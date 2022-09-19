

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0626 */
/* at Mon Jan 18 21:14:07 2038
 */
/* Compiler settings for ..\..\COMPlayground.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0626 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __COMPlayground_h_h__
#define __COMPlayground_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if _CONTROL_FLOW_GUARD_XFG
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IcomPlayground1_FWD_DEFINED__
#define __IcomPlayground1_FWD_DEFINED__
typedef interface IcomPlayground1 IcomPlayground1;

#endif 	/* __IcomPlayground1_FWD_DEFINED__ */


#ifndef __IcomPlayground2_FWD_DEFINED__
#define __IcomPlayground2_FWD_DEFINED__
typedef interface IcomPlayground2 IcomPlayground2;

#endif 	/* __IcomPlayground2_FWD_DEFINED__ */


#ifndef __IcreateCOMPlaygrounObject_FWD_DEFINED__
#define __IcreateCOMPlaygrounObject_FWD_DEFINED__
typedef interface IcreateCOMPlaygrounObject IcreateCOMPlaygrounObject;

#endif 	/* __IcreateCOMPlaygrounObject_FWD_DEFINED__ */


#ifndef __comPlaygroundClass_FWD_DEFINED__
#define __comPlaygroundClass_FWD_DEFINED__

#ifdef __cplusplus
typedef class comPlaygroundClass comPlaygroundClass;
#else
typedef struct comPlaygroundClass comPlaygroundClass;
#endif /* __cplusplus */

#endif 	/* __comPlaygroundClass_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IcomPlayground1_INTERFACE_DEFINED__
#define __IcomPlayground1_INTERFACE_DEFINED__

/* interface IcomPlayground1 */
/* [helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IcomPlayground1;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b8520af4-6403-4dca-988b-f4493a0b8ad9")
    IcomPlayground1 : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Echo( 
            /* [in] */ BSTR *echoString) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE sendClientdata( 
            /* [out] */ BSTR *outString) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE hiFromCOM( 
            /* [in] */ BSTR *inString,
            /* [out] */ BSTR *outString) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IcomPlayground1Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IcomPlayground1 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IcomPlayground1 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IcomPlayground1 * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IcomPlayground1 * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IcomPlayground1 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IcomPlayground1 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IcomPlayground1 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IcomPlayground1, Echo)
        HRESULT ( STDMETHODCALLTYPE *Echo )( 
            IcomPlayground1 * This,
            /* [in] */ BSTR *echoString);
        
        DECLSPEC_XFGVIRT(IcomPlayground1, sendClientdata)
        HRESULT ( STDMETHODCALLTYPE *sendClientdata )( 
            IcomPlayground1 * This,
            /* [out] */ BSTR *outString);
        
        DECLSPEC_XFGVIRT(IcomPlayground1, hiFromCOM)
        HRESULT ( STDMETHODCALLTYPE *hiFromCOM )( 
            IcomPlayground1 * This,
            /* [in] */ BSTR *inString,
            /* [out] */ BSTR *outString);
        
        END_INTERFACE
    } IcomPlayground1Vtbl;

    interface IcomPlayground1
    {
        CONST_VTBL struct IcomPlayground1Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IcomPlayground1_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IcomPlayground1_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IcomPlayground1_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IcomPlayground1_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IcomPlayground1_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IcomPlayground1_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IcomPlayground1_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IcomPlayground1_Echo(This,echoString)	\
    ( (This)->lpVtbl -> Echo(This,echoString) ) 

#define IcomPlayground1_sendClientdata(This,outString)	\
    ( (This)->lpVtbl -> sendClientdata(This,outString) ) 

#define IcomPlayground1_hiFromCOM(This,inString,outString)	\
    ( (This)->lpVtbl -> hiFromCOM(This,inString,outString) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IcomPlayground1_INTERFACE_DEFINED__ */


#ifndef __IcomPlayground2_INTERFACE_DEFINED__
#define __IcomPlayground2_INTERFACE_DEFINED__

/* interface IcomPlayground2 */
/* [helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IcomPlayground2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b8520af5-6403-4dca-988b-f4493a0b8ad9")
    IcomPlayground2 : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Echo( 
            /* [in] */ BSTR *echoString) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE sendClientdata( 
            /* [out] */ BSTR *outString) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE setCOMUwUAttribute( 
            /* [in] */ BSTR *inString,
            /* [out] */ BSTR *outString) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IcomPlayground2Vtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IcomPlayground2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IcomPlayground2 * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IcomPlayground2 * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IcomPlayground2 * This,
            /* [out] */ UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IcomPlayground2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IcomPlayground2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IcomPlayground2 * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IcomPlayground2, Echo)
        HRESULT ( STDMETHODCALLTYPE *Echo )( 
            IcomPlayground2 * This,
            /* [in] */ BSTR *echoString);
        
        DECLSPEC_XFGVIRT(IcomPlayground2, sendClientdata)
        HRESULT ( STDMETHODCALLTYPE *sendClientdata )( 
            IcomPlayground2 * This,
            /* [out] */ BSTR *outString);
        
        DECLSPEC_XFGVIRT(IcomPlayground2, setCOMUwUAttribute)
        HRESULT ( STDMETHODCALLTYPE *setCOMUwUAttribute )( 
            IcomPlayground2 * This,
            /* [in] */ BSTR *inString,
            /* [out] */ BSTR *outString);
        
        END_INTERFACE
    } IcomPlayground2Vtbl;

    interface IcomPlayground2
    {
        CONST_VTBL struct IcomPlayground2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IcomPlayground2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IcomPlayground2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IcomPlayground2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IcomPlayground2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IcomPlayground2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IcomPlayground2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IcomPlayground2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IcomPlayground2_Echo(This,echoString)	\
    ( (This)->lpVtbl -> Echo(This,echoString) ) 

#define IcomPlayground2_sendClientdata(This,outString)	\
    ( (This)->lpVtbl -> sendClientdata(This,outString) ) 

#define IcomPlayground2_setCOMUwUAttribute(This,inString,outString)	\
    ( (This)->lpVtbl -> setCOMUwUAttribute(This,inString,outString) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IcomPlayground2_INTERFACE_DEFINED__ */


#ifndef __IcreateCOMPlaygrounObject_INTERFACE_DEFINED__
#define __IcreateCOMPlaygrounObject_INTERFACE_DEFINED__

/* interface IcreateCOMPlaygrounObject */
/* [helpstring][oleautomation][uuid][object] */ 


EXTERN_C const IID IID_IcreateCOMPlaygrounObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b8520af6-6403-4dca-988b-f4493a0b8ad9")
    IcreateCOMPlaygrounObject : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE setCOMPlaygroundName( 
            /* [in] */ BSTR comName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE setCOMPlaygroundPayloadtype( 
            /* [in] */ int type) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IcreateCOMPlaygrounObjectVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IcreateCOMPlaygrounObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IcreateCOMPlaygrounObject * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IcreateCOMPlaygrounObject * This);
        
        DECLSPEC_XFGVIRT(IcreateCOMPlaygrounObject, setCOMPlaygroundName)
        HRESULT ( STDMETHODCALLTYPE *setCOMPlaygroundName )( 
            IcreateCOMPlaygrounObject * This,
            /* [in] */ BSTR comName);
        
        DECLSPEC_XFGVIRT(IcreateCOMPlaygrounObject, setCOMPlaygroundPayloadtype)
        HRESULT ( STDMETHODCALLTYPE *setCOMPlaygroundPayloadtype )( 
            IcreateCOMPlaygrounObject * This,
            /* [in] */ int type);
        
        END_INTERFACE
    } IcreateCOMPlaygrounObjectVtbl;

    interface IcreateCOMPlaygrounObject
    {
        CONST_VTBL struct IcreateCOMPlaygrounObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IcreateCOMPlaygrounObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IcreateCOMPlaygrounObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IcreateCOMPlaygrounObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IcreateCOMPlaygrounObject_setCOMPlaygroundName(This,comName)	\
    ( (This)->lpVtbl -> setCOMPlaygroundName(This,comName) ) 

#define IcreateCOMPlaygrounObject_setCOMPlaygroundPayloadtype(This,type)	\
    ( (This)->lpVtbl -> setCOMPlaygroundPayloadtype(This,type) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IcreateCOMPlaygrounObject_INTERFACE_DEFINED__ */



#ifndef __CarLocalServerLib_LIBRARY_DEFINED__
#define __CarLocalServerLib_LIBRARY_DEFINED__

/* library CarLocalServerLib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_CarLocalServerLib;

EXTERN_C const CLSID CLSID_comPlaygroundClass;

#ifdef __cplusplus

class DECLSPEC_UUID("a662686c-1d25-4b21-b77a-446b27f7f86d")
comPlaygroundClass;
#endif
#endif /* __CarLocalServerLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


