

/* this ALWAYS GENERATED file contains the RPC client stubs */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Thu Jul 05 04:46:07 2018
 */
/* Compiler settings for IWinHttpAutoProxySvc.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.00.0603 
    protocol : ndr64 , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/

#include <string.h>

#include "IWinHttpAutoProxySvc_h.h"

#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   0            

static const RPC_SYNTAX_IDENTIFIER  _NDR64_RpcTransferSyntax = 
{{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}};




#define GENERIC_BINDING_TABLE_SIZE   0            


/* Standard interface: IWinHttpAutoProxySvc, ver. 5.1,
   GUID={0x3473dd4d,0x2e88,0x4006,{0x9c,0xba,0x22,0x57,0x09,0x09,0xdd,0x10}} */

 extern const MIDL_STUBLESS_PROXY_INFO IWinHttpAutoProxySvc_ProxyInfo;


static const RPC_CLIENT_INTERFACE IWinHttpAutoProxySvc___RpcClientInterface =
    {
    sizeof(RPC_CLIENT_INTERFACE),
    {{0x3473dd4d,0x2e88,0x4006,{0x9c,0xba,0x22,0x57,0x09,0x09,0xdd,0x10}},{5,1}},
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0,
    0,
    0,
    &IWinHttpAutoProxySvc_ProxyInfo,
    0x00000000
    };
RPC_IF_HANDLE IWinHttpAutoProxySvc_v5_1_c_ifspec = (RPC_IF_HANDLE)& IWinHttpAutoProxySvc___RpcClientInterface;

extern const MIDL_STUB_DESC IWinHttpAutoProxySvc_StubDesc;

static RPC_BINDING_HANDLE IWinHttpAutoProxySvc__MIDL_AutoBindHandle;


/* [async] */ void  GetProxyForUrl( 
    /* [in] */ PRPC_ASYNC_STATE GetProxyForUrl_AsyncHandle,
    handle_t hRpcBinding,
    /* [in] */ tagProxyResolveUrl *pProxyResolveUrl,
    /* [in] */ WINHTTP_AUTOPROXY_OPTIONS *pAutoProxyOptions,
    /* [in] */ Struct_2 *pStruct_2,
    /* [in] */ DWORD DataLength,
    /* [size_is][unique][in] */ BYTE *pByteArray,
    /* [out] */ DWORD *pInt,
    /* [out] */ WINHTTP_PROXY_RESULT_EX *pProxyResultEx,
    /* [system_handle][out] */ HANDLE *pNameResTrkRecordHandle,
    /* [out] */ DWORD *pWinHttpStatusCode)
{

    Ndr64AsyncClientCall(
                        ( PMIDL_STUBLESS_PROXY_INFO  )&IWinHttpAutoProxySvc_ProxyInfo,
                        0,
                        0,
                        GetProxyForUrl_AsyncHandle,
                        hRpcBinding,
                        pProxyResolveUrl,
                        pAutoProxyOptions,
                        pStruct_2,
                        DataLength,
                        pByteArray,
                        pInt,
                        pProxyResultEx,
                        pNameResTrkRecordHandle,
                        pWinHttpStatusCode);
    
}


HRESULT ResetAutoProxy( 
    handle_t hRpcBinding,
    /* [in] */ DWORD dwFlags)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IWinHttpAutoProxySvc_ProxyInfo,
                  1,
                  0,
                  hRpcBinding,
                  dwFlags);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT SaveProxyCredentials( 
    handle_t hRpcBinding,
    /* [in] */ DWORD CredentialFlag,
    /* [string][in] */ WCHAR *TargetName,
    /* [string][in] */ WCHAR *UserName,
    /* [string][in] */ WCHAR *CredentialBlob)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IWinHttpAutoProxySvc_ProxyInfo,
                  2,
                  0,
                  hRpcBinding,
                  CredentialFlag,
                  TargetName,
                  UserName,
                  CredentialBlob);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT StoreSavedProxyCredentialsForCurrentUser( 
    handle_t hRpcBinding,
    /* [in] */ DWORD CredentialFlag,
    /* [string][in] */ WCHAR *TargetName,
    /* [out] */ DWORD *StatusCode)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IWinHttpAutoProxySvc_ProxyInfo,
                  3,
                  0,
                  hRpcBinding,
                  CredentialFlag,
                  TargetName,
                  StatusCode);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT DeleteSavedProxyCredentials( 
    handle_t hRpcBinding,
    /* [in] */ wchar_t *TargetName)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IWinHttpAutoProxySvc_ProxyInfo,
                  4,
                  0,
                  hRpcBinding,
                  TargetName);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT ReindicateAllProxies( 
    /* [in] */ handle_t IDL_handle)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IWinHttpAutoProxySvc_ProxyInfo,
                  5,
                  0,
                  IDL_handle);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT ReadProxySettings( 
    handle_t hRpcBinding,
    /* [string][unique][in] */ WCHAR *ConnectionName,
    /* [in] */ DWORD dwFlags,
    /* [in] */ DWORD p4,
    /* [out] */ DWORD *p5,
    /* [out] */ DWORD *p6,
    /* [out] */ WINHTTP_PROXY_SETTINGS *ProxySettings)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IWinHttpAutoProxySvc_ProxyInfo,
                  6,
                  0,
                  hRpcBinding,
                  ConnectionName,
                  dwFlags,
                  p4,
                  p5,
                  p6,
                  ProxySettings);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT WriteProxySettings( 
    handle_t hRpcBinding,
    /* [in] */ BOOL fForceUpdate,
    /* [in] */ WINHTTP_PROXY_SETTINGS *ProxySettings)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IWinHttpAutoProxySvc_ProxyInfo,
                  7,
                  0,
                  hRpcBinding,
                  fForceUpdate,
                  ProxySettings);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT ConnectionUpdateIfIndexTable( 
    handle_t hRpcBinding,
    /* [in] */ DNS_CONNECTION_IFINDEX_LIST *pConnectionIfIndexEntries)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IWinHttpAutoProxySvc_ProxyInfo,
                  8,
                  0,
                  hRpcBinding,
                  pConnectionIfIndexEntries);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT ConnectionSetPolicyEntries( 
    handle_t hRpcBinding,
    /* [in] */ DNS_CONNECTION_POLICY_TAG PolicyEntryTag,
    /* [in] */ DNS_CONNECTION_POLICY_ENTRY_LIST *pPolicyEntryList)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IWinHttpAutoProxySvc_ProxyInfo,
                  9,
                  0,
                  hRpcBinding,
                  PolicyEntryTag,
                  pPolicyEntryList);
    return ( HRESULT  )_RetVal.Simple;
    
}


HRESULT ConnectionDeletePolicyEntries( 
    handle_t hRpcBinding,
    /* [in] */ DNS_CONNECTION_POLICY_TAG PolicyEntryTag)
{

    CLIENT_CALL_RETURN _RetVal;

    _RetVal = NdrClientCall3(
                  ( PMIDL_STUBLESS_PROXY_INFO  )&IWinHttpAutoProxySvc_ProxyInfo,
                  10,
                  0,
                  hRpcBinding,
                  PolicyEntryTag);
    return ( HRESULT  )_RetVal.Simple;
    
}


#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif


#include "ndr64types.h"
#include "pshpack8.h"


typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag115_t;
extern const __midl_frag115_t __midl_frag115;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag112_t;
extern const __midl_frag112_t __midl_frag112;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        struct _NDR64_NO_REPEAT_FORMAT frag7;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag8;
        struct _NDR64_POINTER_FORMAT frag9;
        struct _NDR64_NO_REPEAT_FORMAT frag10;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag11;
        struct _NDR64_POINTER_FORMAT frag12;
        NDR64_FORMAT_CHAR frag13;
    } frag2;
}
__midl_frag109_t;
extern const __midl_frag109_t __midl_frag109;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag107_t;
extern const __midl_frag107_t __midl_frag107;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag105_t;
extern const __midl_frag105_t __midl_frag105;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag104_t;
extern const __midl_frag104_t __midl_frag104;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag3;
            struct _NDR64_POINTER_FORMAT frag4;
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
            struct _NDR64_POINTER_FORMAT frag6;
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag7;
            struct _NDR64_POINTER_FORMAT frag8;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag100_t;
extern const __midl_frag100_t __midl_frag100;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag99_t;
extern const __midl_frag99_t __midl_frag99;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag98_t;
extern const __midl_frag98_t __midl_frag98;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag96_t;
extern const __midl_frag96_t __midl_frag96;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag93_t;
extern const __midl_frag93_t __midl_frag93;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag91_t;
extern const __midl_frag91_t __midl_frag91;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag90_t;
extern const __midl_frag90_t __midl_frag90;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag89_t;
extern const __midl_frag89_t __midl_frag89;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag88_t;
extern const __midl_frag88_t __midl_frag88;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag87_t;
extern const __midl_frag87_t __midl_frag87;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
}
__midl_frag83_t;
extern const __midl_frag83_t __midl_frag83;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag81_t;
extern const __midl_frag81_t __midl_frag81;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag80_t;
extern const __midl_frag80_t __midl_frag80;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag79_t;
extern const __midl_frag79_t __midl_frag79;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag77_t;
extern const __midl_frag77_t __midl_frag77;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag76_t;
extern const __midl_frag76_t __midl_frag76;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        struct _NDR64_NO_REPEAT_FORMAT frag7;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag8;
        struct _NDR64_POINTER_FORMAT frag9;
        struct _NDR64_NO_REPEAT_FORMAT frag10;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag11;
        struct _NDR64_POINTER_FORMAT frag12;
        struct _NDR64_NO_REPEAT_FORMAT frag13;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag14;
        struct _NDR64_POINTER_FORMAT frag15;
        struct _NDR64_NO_REPEAT_FORMAT frag16;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag17;
        struct _NDR64_POINTER_FORMAT frag18;
        struct _NDR64_NO_REPEAT_FORMAT frag19;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag20;
        struct _NDR64_POINTER_FORMAT frag21;
        struct _NDR64_NO_REPEAT_FORMAT frag22;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag23;
        struct _NDR64_POINTER_FORMAT frag24;
        NDR64_FORMAT_CHAR frag25;
    } frag2;
}
__midl_frag69_t;
extern const __midl_frag69_t __midl_frag69;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag68_t;
extern const __midl_frag68_t __midl_frag68;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag60_t;
extern const __midl_frag60_t __midl_frag60;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
}
__midl_frag59_t;
extern const __midl_frag59_t __midl_frag59;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
}
__midl_frag57_t;
extern const __midl_frag57_t __midl_frag57;

typedef 
NDR64_FORMAT_CHAR
__midl_frag55_t;
extern const __midl_frag55_t __midl_frag55;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag54_t;
extern const __midl_frag54_t __midl_frag54;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag53_t;
extern const __midl_frag53_t __midl_frag53;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
}
__midl_frag46_t;
extern const __midl_frag46_t __midl_frag46;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag39_t;
extern const __midl_frag39_t __midl_frag39;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
}
__midl_frag37_t;
extern const __midl_frag37_t __midl_frag37;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
}
__midl_frag34_t;
extern const __midl_frag34_t __midl_frag34;

typedef 
NDR64_SYSTEM_HANDLE_FORMAT
__midl_frag30_t;
extern const __midl_frag30_t __midl_frag30;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag29_t;
extern const __midl_frag29_t __midl_frag29;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        NDR64_FORMAT_CHAR frag4;
    } frag2;
}
__midl_frag26_t;
extern const __midl_frag26_t __midl_frag26;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag24_t;
extern const __midl_frag24_t __midl_frag24;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_REPEAT_FORMAT frag1;
        struct 
        {
            struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag1;
            struct _NDR64_POINTER_FORMAT frag2;
        } frag2;
        NDR64_FORMAT_CHAR frag3;
    } frag2;
    struct _NDR64_ARRAY_ELEMENT_INFO frag3;
}
__midl_frag23_t;
extern const __midl_frag23_t __midl_frag23;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        NDR64_FORMAT_CHAR frag7;
    } frag2;
}
__midl_frag22_t;
extern const __midl_frag22_t __midl_frag22;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag21_t;
extern const __midl_frag21_t __midl_frag21;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag19_t;
extern const __midl_frag19_t __midl_frag19;

typedef 
NDR64_FORMAT_CHAR
__midl_frag18_t;
extern const __midl_frag18_t __midl_frag18;

typedef 
struct 
{
    NDR64_FORMAT_UINT32 frag1;
    struct _NDR64_EXPR_VAR frag2;
}
__midl_frag17_t;
extern const __midl_frag17_t __midl_frag17;

typedef 
struct 
{
    struct _NDR64_CONF_ARRAY_HEADER_FORMAT frag1;
    struct _NDR64_ARRAY_ELEMENT_INFO frag2;
}
__midl_frag16_t;
extern const __midl_frag16_t __midl_frag16;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag15_t;
extern const __midl_frag15_t __midl_frag15;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
}
__midl_frag13_t;
extern const __midl_frag13_t __midl_frag13;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag12_t;
extern const __midl_frag12_t __midl_frag12;

typedef 
NDR64_FORMAT_CHAR
__midl_frag11_t;
extern const __midl_frag11_t __midl_frag11;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        NDR64_FORMAT_CHAR frag7;
    } frag2;
}
__midl_frag9_t;
extern const __midl_frag9_t __midl_frag9;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag8_t;
extern const __midl_frag8_t __midl_frag8;

typedef 
struct _NDR64_CONFORMANT_STRING_FORMAT
__midl_frag5_t;
extern const __midl_frag5_t __midl_frag5;

typedef 
struct 
{
    struct _NDR64_STRUCTURE_HEADER_FORMAT frag1;
    struct 
    {
        struct _NDR64_NO_REPEAT_FORMAT frag1;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag2;
        struct _NDR64_POINTER_FORMAT frag3;
        struct _NDR64_NO_REPEAT_FORMAT frag4;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag5;
        struct _NDR64_POINTER_FORMAT frag6;
        struct _NDR64_NO_REPEAT_FORMAT frag7;
        struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT frag8;
        struct _NDR64_POINTER_FORMAT frag9;
        NDR64_FORMAT_CHAR frag10;
    } frag2;
}
__midl_frag4_t;
extern const __midl_frag4_t __midl_frag4;

typedef 
struct _NDR64_POINTER_FORMAT
__midl_frag3_t;
extern const __midl_frag3_t __midl_frag3;

typedef 
struct 
{
    struct _NDR64_PROC_FORMAT frag1;
    struct _NDR64_BIND_AND_NOTIFY_EXTENSION frag2;
    struct _NDR64_PARAM_FORMAT frag3;
    struct _NDR64_PARAM_FORMAT frag4;
    struct _NDR64_PARAM_FORMAT frag5;
    struct _NDR64_PARAM_FORMAT frag6;
    struct _NDR64_PARAM_FORMAT frag7;
    struct _NDR64_PARAM_FORMAT frag8;
    struct _NDR64_PARAM_FORMAT frag9;
    struct _NDR64_PARAM_FORMAT frag10;
    struct _NDR64_PARAM_FORMAT frag11;
    struct _NDR64_PARAM_FORMAT frag12;
}
__midl_frag2_t;
extern const __midl_frag2_t __midl_frag2;

typedef 
NDR64_FORMAT_UINT32
__midl_frag1_t;
extern const __midl_frag1_t __midl_frag1;

static const __midl_frag115_t __midl_frag115 =
{ 
/* ConnectionDeletePolicyEntries */
    { 
    /* ConnectionDeletePolicyEntries */      /* procedure ConnectionDeletePolicyEntries */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* PolicyEntryTag */      /* parameter PolicyEntryTag */
        &__midl_frag11,
        { 
        /* PolicyEntryTag */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag11,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag112_t __midl_frag112 =
{ 
/* *BYTE */
    { 
    /* *BYTE */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *BYTE */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag105
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag18
    }
};

static const __midl_frag109_t __midl_frag109 =
{ 
/* DNS_CONNECTION_POLICY_ENTRY */
    { 
    /* DNS_CONNECTION_POLICY_ENTRY */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DNS_CONNECTION_POLICY_ENTRY */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 56 /* 0x38 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag5
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag5
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 24 /* 0x18 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *BYTE */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag112
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 40 /* 0x28 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* **WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 16 /* 0x10 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag107
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag107_t __midl_frag107 =
{ 
/* *WCHAR */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag55
};

static const __midl_frag105_t __midl_frag105 =
{ 
/* ,  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    }
};

static const __midl_frag104_t __midl_frag104 =
{ 
/* *BYTE */
    { 
    /* *BYTE */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *BYTE */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag105
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag18
    }
};

static const __midl_frag100_t __midl_frag100 =
{ 
/* *DNS_CONNECTION_POLICY_ENTRY */
    { 
    /* *DNS_CONNECTION_POLICY_ENTRY */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* *DNS_CONNECTION_POLICY_ENTRY */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 56 /* 0x38 */,
        &__midl_frag91
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 1 /* 0x1 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 56 /* 0x38 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 4 /* 0x4 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag5
            },
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 8 /* 0x8 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag5
            },
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 24 /* 0x18 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *BYTE */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag104
            },
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 40 /* 0x28 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* **WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 16 /* 0x10 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag107
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 56 /* 0x38 */,
        &__midl_frag109
    }
};

static const __midl_frag99_t __midl_frag99 =
{ 
/* DNS_CONNECTION_POLICY_ENTRY_LIST */
    { 
    /* DNS_CONNECTION_POLICY_ENTRY_LIST */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DNS_CONNECTION_POLICY_ENTRY_LIST */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DNS_CONNECTION_POLICY_ENTRY */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag100
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag98_t __midl_frag98 =
{ 
/* *DNS_CONNECTION_POLICY_ENTRY_LIST */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag99
};

static const __midl_frag96_t __midl_frag96 =
{ 
/* ConnectionSetPolicyEntries */
    { 
    /* ConnectionSetPolicyEntries */      /* procedure ConnectionSetPolicyEntries */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* PolicyEntryTag */      /* parameter PolicyEntryTag */
        &__midl_frag11,
        { 
        /* PolicyEntryTag */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* pPolicyEntryList */      /* parameter pPolicyEntryList */
        &__midl_frag99,
        { 
        /* pPolicyEntryList */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag11,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag93_t __midl_frag93 =
{ 
/* DNS_CONNECTION_IFINDEX_ENTRY */
    { 
    /* DNS_CONNECTION_IFINDEX_ENTRY */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DNS_CONNECTION_IFINDEX_ENTRY */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag5
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag91_t __midl_frag91 =
{ 
/* ,  */
    (NDR64_UINT32) 0 /* 0x0 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */
    }
};

static const __midl_frag90_t __midl_frag90 =
{ 
/* *DNS_CONNECTION_IFINDEX_ENTRY */
    { 
    /* *DNS_CONNECTION_IFINDEX_ENTRY */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* *DNS_CONNECTION_IFINDEX_ENTRY */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag91
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 1 /* 0x1 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 0 /* 0x0 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag5
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 16 /* 0x10 */,
        &__midl_frag93
    }
};

static const __midl_frag89_t __midl_frag89 =
{ 
/* DNS_CONNECTION_IFINDEX_LIST */
    { 
    /* DNS_CONNECTION_IFINDEX_LIST */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* DNS_CONNECTION_IFINDEX_LIST */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 16 /* 0x10 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DNS_CONNECTION_IFINDEX_ENTRY */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag90
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag88_t __midl_frag88 =
{ 
/* *DNS_CONNECTION_IFINDEX_LIST */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag89
};

static const __midl_frag87_t __midl_frag87 =
{ 
/* ConnectionUpdateIfIndexTable */
    { 
    /* ConnectionUpdateIfIndexTable */      /* procedure ConnectionUpdateIfIndexTable */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pConnectionIfIndexEntries */      /* parameter pConnectionIfIndexEntries */
        &__midl_frag89,
        { 
        /* pConnectionIfIndexEntries */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag11,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag83_t __midl_frag83 =
{ 
/* WriteProxySettings */
    { 
    /* WriteProxySettings */      /* procedure WriteProxySettings */
        (NDR64_UINT32) 19660864 /* 0x12c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, ServerCorrelation, HasExtensions */
        (NDR64_UINT32) 32 /* 0x20 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 3 /* 0x3 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* fForceUpdate */      /* parameter fForceUpdate */
        &__midl_frag11,
        { 
        /* fForceUpdate */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* ProxySettings */      /* parameter ProxySettings */
        &__midl_frag69,
        { 
        /* ProxySettings */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag11,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    }
};

static const __midl_frag81_t __midl_frag81 =
{ 
/* WINHTTP_PROXY_NETWORKING_KEY */
    { 
    /* WINHTTP_PROXY_NETWORKING_KEY */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* WINHTTP_PROXY_NETWORKING_KEY */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 128 /* 0x80 */
    }
};

static const __midl_frag80_t __midl_frag80 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 96 /* 0x60 */
    }
};

static const __midl_frag79_t __midl_frag79 =
{ 
/* *WINHTTP_PROXY_NETWORKING_KEY */
    { 
    /* *WINHTTP_PROXY_NETWORKING_KEY */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *WINHTTP_PROXY_NETWORKING_KEY */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 128 /* 0x80 */,
        &__midl_frag80
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 128 /* 0x80 */,
        &__midl_frag81
    }
};

static const __midl_frag77_t __midl_frag77 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 84 /* 0x54 */
    }
};

static const __midl_frag76_t __midl_frag76 =
{ 
/* *DWORD */
    { 
    /* *DWORD */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* *DWORD */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag77
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 4 /* 0x4 */,
        &__midl_frag11
    }
};

static const __midl_frag69_t __midl_frag69 =
{ 
/* WINHTTP_PROXY_SETTINGS */
    { 
    /* WINHTTP_PROXY_SETTINGS */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* WINHTTP_PROXY_SETTINGS */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 112 /* 0x70 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag5
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 24 /* 0x18 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag5
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 32 /* 0x20 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag5
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 40 /* 0x28 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag5
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 48 /* 0x30 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag5
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 64 /* 0x40 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag5
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 88 /* 0x58 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DWORD */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag76
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 104 /* 0x68 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WINHTTP_PROXY_NETWORKING_KEY */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag79
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag68_t __midl_frag68 =
{ 
/* *WINHTTP_PROXY_SETTINGS, *WINHTTP_PROXY_SETTINGS */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag69
};

static const __midl_frag60_t __midl_frag60 =
{ 
/* *WCHAR */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag5
};

static const __midl_frag59_t __midl_frag59 =
{ 
/* ReadProxySettings */
    { 
    /* ReadProxySettings */      /* procedure ReadProxySettings */
        (NDR64_UINT32) 21889088 /* 0x14e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 64 /* 0x40 */ ,  /* Stack size */
        (NDR64_UINT32) 16 /* 0x10 */,
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 7 /* 0x7 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* ConnectionName */      /* parameter ConnectionName */
        &__midl_frag60,
        { 
        /* ConnectionName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* dwFlags */      /* parameter dwFlags */
        &__midl_frag11,
        { 
        /* dwFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* p4 */      /* parameter p4 */
        &__midl_frag11,
        { 
        /* p4 */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* p5 */      /* parameter p5 */
        &__midl_frag11,
        { 
        /* p5 */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* p6 */      /* parameter p6 */
        &__midl_frag11,
        { 
        /* p6 */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* ProxySettings */      /* parameter ProxySettings */
        &__midl_frag69,
        { 
        /* ProxySettings */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag11,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    }
};

static const __midl_frag57_t __midl_frag57 =
{ 
/* ReindicateAllProxies */
    { 
    /* ReindicateAllProxies */      /* procedure ReindicateAllProxies */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 16 /* 0x10 */ ,  /* Stack size */
        (NDR64_UINT32) 0 /* 0x0 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 1 /* 0x1 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag11,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    }
};

static const __midl_frag55_t __midl_frag55 =
0x11    /* FC64_WCHAR */;

static const __midl_frag54_t __midl_frag54 =
{ 
/* *wchar_t */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 8 /* 0x8 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag55
};

static const __midl_frag53_t __midl_frag53 =
{ 
/* DeleteSavedProxyCredentials */
    { 
    /* DeleteSavedProxyCredentials */      /* procedure DeleteSavedProxyCredentials */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 30 /* 0x1e */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* TargetName */      /* parameter TargetName */
        &__midl_frag55,
        { 
        /* TargetName */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag11,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag46_t __midl_frag46 =
{ 
/* StoreSavedProxyCredentialsForCurrentUser */
    { 
    /* StoreSavedProxyCredentialsForCurrentUser */      /* procedure StoreSavedProxyCredentialsForCurrentUser */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 40 /* 0x28 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 40 /* 0x28 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 4 /* 0x4 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* CredentialFlag */      /* parameter CredentialFlag */
        &__midl_frag11,
        { 
        /* CredentialFlag */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* TargetName */      /* parameter TargetName */
        &__midl_frag5,
        { 
        /* TargetName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* StatusCode */      /* parameter StatusCode */
        &__midl_frag11,
        { 
        /* StatusCode */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag11,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    }
};

static const __midl_frag39_t __midl_frag39 =
{ 
/* *WCHAR, *WCHAR, *WCHAR, *WCHAR */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag5
};

static const __midl_frag37_t __midl_frag37 =
{ 
/* SaveProxyCredentials */
    { 
    /* SaveProxyCredentials */      /* procedure SaveProxyCredentials */
        (NDR64_UINT32) 17563712 /* 0x10c0040 */,    /* explicit handle */ /* IsIntrepreted, ClientMustSize, HasReturn, HasExtensions */
        (NDR64_UINT32) 48 /* 0x30 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 5 /* 0x5 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* CredentialFlag */      /* parameter CredentialFlag */
        &__midl_frag11,
        { 
        /* CredentialFlag */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* TargetName */      /* parameter TargetName */
        &__midl_frag5,
        { 
        /* TargetName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* UserName */      /* parameter UserName */
        &__midl_frag5,
        { 
        /* UserName */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* CredentialBlob */      /* parameter CredentialBlob */
        &__midl_frag5,
        { 
        /* CredentialBlob */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag11,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    }
};

static const __midl_frag34_t __midl_frag34 =
{ 
/* ResetAutoProxy */
    { 
    /* ResetAutoProxy */      /* procedure ResetAutoProxy */
        (NDR64_UINT32) 17301568 /* 0x1080040 */,    /* explicit handle */ /* IsIntrepreted, HasReturn, HasExtensions */
        (NDR64_UINT32) 24 /* 0x18 */ ,  /* Stack size */
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT32) 8 /* 0x8 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 2 /* 0x2 */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            0 /* 0x0 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* dwFlags */      /* parameter dwFlags */
        &__midl_frag11,
        { 
        /* dwFlags */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        8 /* 0x8 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag11,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    }
};

static const __midl_frag30_t __midl_frag30 =
{ 
/* HANDLE */
    0x3c,    /* FC64_SYSTEM_HANDLE */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT32) 0 /* 0x0 */,
};

static const __midl_frag29_t __midl_frag29 =
{ 
/* *HANDLE */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag30
};

static const __midl_frag26_t __midl_frag26 =
{ 
/* WINHTTP_PROXY_RESULT_ENTRY */
    { 
    /* WINHTTP_PROXY_RESULT_ENTRY */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* WINHTTP_PROXY_RESULT_ENTRY */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag5
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag24_t __midl_frag24 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 0 /* 0x0 */
    }
};

static const __midl_frag23_t __midl_frag23 =
{ 
/* *WINHTTP_PROXY_RESULT_ENTRY */
    { 
    /* *WINHTTP_PROXY_RESULT_ENTRY */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* *WINHTTP_PROXY_RESULT_ENTRY */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */,
        &__midl_frag24
    },
    { 
    /*  */
        { 
        /* struct _NDR64_REPEAT_FORMAT */
            0x82,    /* FC64_VARIABLE_REPEAT */
            { 
            /* struct _NDR64_REPEAT_FORMAT */
                (NDR64_UINT8) 1 /* 0x1 */,
                (NDR64_UINT8) 0 /* 0x0 */
            },
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 32 /* 0x20 */,
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 1 /* 0x1 */
        },
        { 
        /*  */
            { 
            /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
                (NDR64_UINT32) 16 /* 0x10 */,
                (NDR64_UINT32) 0 /* 0x0 */
            },
            { 
            /* *WCHAR */
                0x21,    /* FC64_UP */
                (NDR64_UINT8) 0 /* 0x0 */,
                (NDR64_UINT16) 0 /* 0x0 */,
                &__midl_frag5
            }
        },
        0x93    /* FC64_END */
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 32 /* 0x20 */,
        &__midl_frag26
    }
};

static const __midl_frag22_t __midl_frag22 =
{ 
/* WINHTTP_PROXY_RESULT_EX */
    { 
    /* WINHTTP_PROXY_RESULT_EX */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* WINHTTP_PROXY_RESULT_EX */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WINHTTP_PROXY_RESULT_ENTRY */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag23
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DWORD */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 8 /* 0x8 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag11
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag21_t __midl_frag21 =
{ 
/* *WINHTTP_PROXY_RESULT_EX */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 4 /* 0x4 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag22
};

static const __midl_frag19_t __midl_frag19 =
{ 
/* *DWORD, *DWORD, *DWORD, *DWORD, *DWORD */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 12 /* 0xc */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag11
};

static const __midl_frag18_t __midl_frag18 =
0x2    /* FC64_INT8 */;

static const __midl_frag17_t __midl_frag17 =
{ 
/*  */
    (NDR64_UINT32) 1 /* 0x1 */,
    { 
    /* struct _NDR64_EXPR_VAR */
        0x3,    /* FC_EXPR_VAR */
        0x6,    /* FC64_UINT32 */
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT32) 40 /* 0x28 */  /* Offset */
    }
};

static const __midl_frag16_t __midl_frag16 =
{ 
/* *BYTE */
    { 
    /* *BYTE */
        0x41,    /* FC64_CONF_ARRAY */
        (NDR64_UINT8) 0 /* 0x0 */,
        { 
        /* *BYTE */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag17
    },
    { 
    /* struct _NDR64_ARRAY_ELEMENT_INFO */
        (NDR64_UINT32) 1 /* 0x1 */,
        &__midl_frag18
    }
};

static const __midl_frag15_t __midl_frag15 =
{ 
/* *BYTE */
    0x21,    /* FC64_UP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag16
};

static const __midl_frag13_t __midl_frag13 =
{ 
/* Struct_2 */
    { 
    /* Struct_2 */
        0x30,    /* FC64_STRUCT */
        (NDR64_UINT8) 3 /* 0x3 */,
        { 
        /* Struct_2 */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 24 /* 0x18 */
    }
};

static const __midl_frag12_t __midl_frag12 =
{ 
/* *Struct_2 */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag13
};

static const __midl_frag11_t __midl_frag11 =
0x5    /* FC64_INT32 */;

static const __midl_frag9_t __midl_frag9 =
{ 
/* WINHTTP_AUTOPROXY_OPTIONS */
    { 
    /* WINHTTP_AUTOPROXY_OPTIONS */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* WINHTTP_AUTOPROXY_OPTIONS */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag5
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *DWORD */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 8 /* 0x8 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag11
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag8_t __midl_frag8 =
{ 
/* *WINHTTP_AUTOPROXY_OPTIONS */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag9
};

static const __midl_frag5_t __midl_frag5 =
{ 
/* *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR */
    { 
    /* *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR */
        0x64,    /* FC64_CONF_WCHAR_STRING */
        { 
        /* *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR, *WCHAR */
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT16) 2 /* 0x2 */
    }
};

static const __midl_frag4_t __midl_frag4 =
{ 
/* tagProxyResolveUrl */
    { 
    /* tagProxyResolveUrl */
        0x31,    /* FC64_PSTRUCT */
        (NDR64_UINT8) 7 /* 0x7 */,
        { 
        /* tagProxyResolveUrl */
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0
        },
        (NDR64_UINT8) 0 /* 0x0 */,
        (NDR64_UINT32) 32 /* 0x20 */
    },
    { 
    /*  */
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag5
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 8 /* 0x8 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag5
        },
        { 
        /* struct _NDR64_NO_REPEAT_FORMAT */
            0x80,    /* FC64_NO_REPEAT */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* struct _NDR64_POINTER_INSTANCE_HEADER_FORMAT */
            (NDR64_UINT32) 16 /* 0x10 */,
            (NDR64_UINT32) 0 /* 0x0 */
        },
        { 
        /* *WCHAR */
            0x21,    /* FC64_UP */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT16) 0 /* 0x0 */,
            &__midl_frag5
        },
        0x93    /* FC64_END */
    }
};

static const __midl_frag3_t __midl_frag3 =
{ 
/* *tagProxyResolveUrl */
    0x20,    /* FC64_RP */
    (NDR64_UINT8) 0 /* 0x0 */,
    (NDR64_UINT16) 0 /* 0x0 */,
    &__midl_frag4
};

static const __midl_frag2_t __midl_frag2 =
{ 
/* GetProxyForUrl */
    { 
    /* GetProxyForUrl */      /* procedure GetProxyForUrl */
        (NDR64_UINT32) 23986240 /* 0x16e0040 */,    /* explicit handle */ /* IsIntrepreted, ServerMustSize, ClientMustSize, HasReturn, ServerCorrelation, ClientCorrelation, HasExtensions */
        (NDR64_UINT32) 96 /* 0x60 */ ,  /* Stack size */
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT32) 72 /* 0x48 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 0 /* 0x0 */,
        (NDR64_UINT16) 10 /* 0xa */,
        (NDR64_UINT16) 8 /* 0x8 */
    },
    { 
    /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
        { 
        /* struct _NDR64_BIND_AND_NOTIFY_EXTENSION */
            0x72,    /* FC64_BIND_PRIMITIVE */
            (NDR64_UINT8) 0 /* 0x0 */,
            8 /* 0x8 */,   /* Stack offset */
            (NDR64_UINT8) 0 /* 0x0 */,
            (NDR64_UINT8) 0 /* 0x0 */
        },
        (NDR64_UINT16) 0 /* 0x0 */      /* Notify index */
    },
    { 
    /* pProxyResolveUrl */      /* parameter pProxyResolveUrl */
        &__midl_frag4,
        { 
        /* pProxyResolveUrl */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        16 /* 0x10 */,   /* Stack offset */
    },
    { 
    /* pAutoProxyOptions */      /* parameter pAutoProxyOptions */
        &__midl_frag9,
        { 
        /* pAutoProxyOptions */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        24 /* 0x18 */,   /* Stack offset */
    },
    { 
    /* pStruct_2 */      /* parameter pStruct_2 */
        &__midl_frag13,
        { 
        /* pStruct_2 */
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustFree, [in], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        32 /* 0x20 */,   /* Stack offset */
    },
    { 
    /* DataLength */      /* parameter DataLength */
        &__midl_frag11,
        { 
        /* DataLength */
            0,
            0,
            0,
            1,
            0,
            0,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [in], Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        40 /* 0x28 */,   /* Stack offset */
    },
    { 
    /* pByteArray */      /* parameter pByteArray */
        &__midl_frag15,
        { 
        /* pByteArray */
            1,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [in] */
        (NDR64_UINT16) 0 /* 0x0 */,
        48 /* 0x30 */,   /* Stack offset */
    },
    { 
    /* pInt */      /* parameter pInt */
        &__midl_frag11,
        { 
        /* pInt */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        56 /* 0x38 */,   /* Stack offset */
    },
    { 
    /* pProxyResultEx */      /* parameter pProxyResultEx */
        &__midl_frag22,
        { 
        /* pProxyResultEx */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* MustSize, MustFree, [out], SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        64 /* 0x40 */,   /* Stack offset */
    },
    { 
    /* pNameResTrkRecordHandle */      /* parameter pNameResTrkRecordHandle */
        &__midl_frag30,
        { 
        /* pNameResTrkRecordHandle */
            1,
            1,
            0,
            0,
            1,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* MustSize, MustFree, [out], SimpleRef */
        (NDR64_UINT16) 0 /* 0x0 */,
        72 /* 0x48 */,   /* Stack offset */
    },
    { 
    /* pWinHttpStatusCode */      /* parameter pWinHttpStatusCode */
        &__midl_frag11,
        { 
        /* pWinHttpStatusCode */
            0,
            0,
            0,
            0,
            1,
            0,
            1,
            0,
            1,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            1
        },    /* [out], Basetype, SimpleRef, UseCache */
        (NDR64_UINT16) 0 /* 0x0 */,
        80 /* 0x50 */,   /* Stack offset */
    },
    { 
    /* HRESULT */      /* parameter HRESULT */
        &__midl_frag11,
        { 
        /* HRESULT */
            0,
            0,
            0,
            0,
            1,
            1,
            1,
            1,
            0,
            0,
            0,
            0,
            0,
            (NDR64_UINT16) 0 /* 0x0 */,
            0
        },    /* [out], IsReturn, Basetype, ByValue */
        (NDR64_UINT16) 0 /* 0x0 */,
        88 /* 0x58 */,   /* Stack offset */
    }
};

static const __midl_frag1_t __midl_frag1 =
(NDR64_UINT32) 0 /* 0x0 */;


#include "poppack.h"


static const FormatInfoRef IWinHttpAutoProxySvc_Ndr64ProcTable[] =
    {
    &__midl_frag2,
    &__midl_frag34,
    &__midl_frag37,
    &__midl_frag46,
    &__midl_frag53,
    &__midl_frag57,
    &__midl_frag59,
    &__midl_frag83,
    &__midl_frag87,
    &__midl_frag96,
    &__midl_frag115
    };


static const MIDL_STUB_DESC IWinHttpAutoProxySvc_StubDesc = 
    {
    (void *)& IWinHttpAutoProxySvc___RpcClientInterface,
    MIDL_user_allocate,
    MIDL_user_free,
    &IWinHttpAutoProxySvc__MIDL_AutoBindHandle,
    0,
    0,
    0,
    0,
    0,
    1, /* -error bounds_check flag */
    0x60003, /* Ndr library version */
    0,
    0x800025b, /* MIDL Version 8.0.603 */
    0,
    0,
    0,  /* notify & notify_flag routine table */
    0x2000001, /* MIDL flag */
    0, /* cs routines */
    (void *)& IWinHttpAutoProxySvc_ProxyInfo,   /* proxy/server info */
    0
    };

static const MIDL_SYNTAX_INFO IWinHttpAutoProxySvc_SyntaxInfo [  1 ] = 
    {
    {
    {{0x71710533,0xbeba,0x4937,{0x83,0x19,0xb5,0xdb,0xef,0x9c,0xcc,0x36}},{1,0}},
    0,
    0 ,
    (unsigned short *) IWinHttpAutoProxySvc_Ndr64ProcTable,
    0,
    0,
    0,
    0
    }
    };

static const MIDL_STUBLESS_PROXY_INFO IWinHttpAutoProxySvc_ProxyInfo =
    {
    &IWinHttpAutoProxySvc_StubDesc,
    0,
    (unsigned short *) IWinHttpAutoProxySvc_Ndr64ProcTable,
    (RPC_SYNTAX_IDENTIFIER*)&_NDR64_RpcTransferSyntax,
    1,
    (MIDL_SYNTAX_INFO*)IWinHttpAutoProxySvc_SyntaxInfo
    
    };

#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_AMD64)*/

