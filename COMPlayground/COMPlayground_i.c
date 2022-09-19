

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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



#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IcomPlayground1,0xb8520af4,0x6403,0x4dca,0x98,0x8b,0xf4,0x49,0x3a,0x0b,0x8a,0xd9);


MIDL_DEFINE_GUID(IID, IID_IcomPlayground2,0xb8520af5,0x6403,0x4dca,0x98,0x8b,0xf4,0x49,0x3a,0x0b,0x8a,0xd9);


MIDL_DEFINE_GUID(IID, IID_IcreateCOMPlaygrounObject,0xb8520af6,0x6403,0x4dca,0x98,0x8b,0xf4,0x49,0x3a,0x0b,0x8a,0xd9);


MIDL_DEFINE_GUID(IID, LIBID_CarLocalServerLib,0xb8520af7,0x6403,0x4dca,0x98,0x8b,0xf4,0x49,0x3a,0x0b,0x8a,0xd9);


MIDL_DEFINE_GUID(CLSID, CLSID_comPlaygroundClass,0xa662686c,0x1d25,0x4b21,0xb7,0x7a,0x44,0x6b,0x27,0xf7,0xf8,0x6d);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



