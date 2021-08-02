﻿// test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "..\inc\Process.h"


#ifdef _WIN64  
#ifdef _DEBUG
#pragma comment(lib, "..\\x64\\Debug\\Process.lib")
#else
#pragma comment(lib, "..\\x64\\Release\\Process.lib")
#endif
#else 
#ifdef _DEBUG
#pragma comment(lib, "..\\Debug\\Process.lib")
#else
#pragma comment(lib, "..\\Release\\Process.lib")
#endif
#endif


//////////////////////////////////////////////////////////////////////////////////////////////////


int _cdecl main(_In_ int argc, _In_reads_(argc) CHAR * argv[])
{
    //__debugbreak();

    setlocale(LC_CTYPE, ".936");

    int Args;
    LPWSTR * Arglist = CommandLineToArgvW(GetCommandLineW(), &Args);
    if (NULL == Arglist) {
        //LOGA(ERROR_LEVEL, "LastError：%d", GetLastError());
        return 0;
    }

    //EnumWfpInfo(Args, Arglist);

    //GetAdaptersAddressesInfo(argc, argv);

    //GetEnvironment();

    //ZwEnumerateDirectoryObject(L"\\KnownDlls", L"Section");
    QuerySymbolicLinkName(L"\\KnownDlls\\KnownDllPath");

    LocalFree(Arglist);
}