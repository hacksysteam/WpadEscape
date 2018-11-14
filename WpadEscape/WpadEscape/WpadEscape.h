#pragma once

#ifndef __WPAD_ESCAPE_H__
#define __WPAD_ESCAPE_H__

#include <stdio.h>
#include <Windows.h>
#include "IWinHttpAutoProxySvc_h.h"


#pragma comment(lib, "rpcrt4.lib" )


void DEBUG(LPCWSTR Format, ...)
{
	va_list args;
	va_start(args, Format);

	WCHAR buffer[256] = { 0 };
	wvsprintf(buffer, Format, args);
	va_end(args);

	OutputDebugString(buffer);
	OutputDebugString(L"\n");
	wprintf(buffer);
	wprintf(L"\n");
}


#endif // !__WPAD_ESCAPE_H__
