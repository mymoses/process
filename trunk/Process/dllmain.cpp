﻿// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "pch.h"


BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call) {
    case DLL_PROCESS_ATTACH:
        setlocale(LC_CTYPE, ".936");//这个没继承进程的，否者，汉字无法显示。
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