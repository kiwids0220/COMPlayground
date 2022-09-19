// dllmain.cpp : Defines the entry point for the DLL application.
#include "comPlaygroundcpp.h"

typedef HRESULT(__stdcall* _DllGetClassObject)(REFCLSID rclsid, REFIID riid, LPVOID* ppv);

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

STDAPI DllCanUnloadNow(void)
{
    return S_OK;
}
STDAPI DllRegisterServer(void)
{
    return S_OK;
}
STDAPI DllUnregisterServer(void)
{
    return S_OK;
}

STDAPI DllGetClassObject(REFCLSID rclsid, REFIID riid, LPVOID* ppv)
{
    IcreateCOMPlaygrounObjectFactory* pFactory = new IcreateCOMPlaygrounObjectFactory();
    HRESULT hr = pFactory->QueryInterface(riid, ppv);
    pFactory->Release();
    return hr;
}

