

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 05:14:07 2038
 */
/* Compiler settings for DrawerServer.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
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

MIDL_DEFINE_GUID(IID, IID_IShapeToDraw,0xba0a089b,0xb7a5,0x4f3b,0xaa,0x02,0x56,0x79,0x73,0x0c,0xbd,0x29);


MIDL_DEFINE_GUID(IID, LIBID_DrawerServerLib,0xa2c90dc8,0xb295,0x4d6b,0xa5,0x4e,0xfb,0x12,0x3e,0x7b,0xb9,0x0e);


MIDL_DEFINE_GUID(CLSID, CLSID_SquareObject,0x6cae19e1,0x61f7,0x4145,0x80,0x26,0x45,0xe9,0x85,0xc8,0x63,0x58);


MIDL_DEFINE_GUID(CLSID, CLSID_RectangleObject,0x13c5bb57,0x77dc,0x4bf7,0xb8,0xd7,0xaa,0x10,0x4c,0xe8,0x14,0x28);


MIDL_DEFINE_GUID(CLSID, CLSID_EllipseObject,0xfb95bd2a,0x98c0,0x44ec,0x8f,0x36,0x6e,0x21,0xa6,0x66,0xd6,0x5d);


MIDL_DEFINE_GUID(CLSID, CLSID_CircleObject,0x3505ed72,0x4337,0x4e13,0xba,0xa4,0x40,0xeb,0x29,0x8e,0xc4,0x7a);


MIDL_DEFINE_GUID(CLSID, CLSID_TriangleObject,0xf97f9cd8,0x8265,0x49de,0x98,0x11,0xaf,0xc7,0x26,0x41,0xce,0x70);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



