#pragma once
#include <Windows.h>
#include <comutil.h>
#include <stdio.h>
#include "COMPlayground_h.h"


// finally defeine COM class 
class comPlaygroundClass : public IcomPlayground1 {
public:

    //IUknown
    ULONG __stdcall AddRef();
    ULONG __stdcall Release();
    HRESULT __stdcall QueryInterface(REFIID riid, void** ppv);


    // IDispatch
    HRESULT __stdcall GetTypeInfoCount(UINT* pctinfo);
    HRESULT __stdcall GetTypeInfo(UINT iTypeInfo, LCID, ITypeInfo** ppTypeInfo);
    HRESULT __stdcall GetIDsOfNames(REFIID riid, LPOLESTR* rgszNames, UINT cNames, LCID, DISPID* rgDispId);
    HRESULT __stdcall Invoke(DISPID dispIdMember, REFIID riid, LCID, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr);

    // Icomplayground1
    HRESULT Echo( BSTR* echoString);
    HRESULT sendClientdata( BSTR* outString);
    HRESULT hiFromCOM( BSTR* inString,  BSTR* outString);

    //// Icomplayground2 
    //HRESULT Echo([in] BSTR* echoString);
    //HRESULT sendClientdata( BSTR* outString);
    //HRESULT setCOMUwUAttribute( BSTR* inString, BSTR* outString);



    // Init loads our Type library
    HRESULT Init();

    // Constructor
    comPlaygroundClass() : m_cRef(1) {};
    ~comPlaygroundClass() {
        if (m_pITypeInfo != NULL)
            m_pITypeInfo->Release();
    };
private:
    ULONG m_cRef;
    ITypeInfo* m_pITypeInfo;
};

class IcreateCOMPlaygrounObjectFactory : public IClassFactory
{

public:
    // IUnknown
    ULONG __stdcall AddRef();
    ULONG __stdcall Release();
    HRESULT __stdcall QueryInterface(REFIID riid, void** ppv);

    HRESULT __stdcall CreateInstance(IUnknown* pUnknownOuter, const IID& iid, void** ppv);
    HRESULT __stdcall LockServer(BOOL bLock);

    IcreateCOMPlaygrounObjectFactory() : m_cRef(1) {};

    static HMODULE s_hModule;

private:
    ULONG m_cRef;

};