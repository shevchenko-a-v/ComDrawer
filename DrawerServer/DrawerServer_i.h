

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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

#ifndef __DrawerServer_i_h__
#define __DrawerServer_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IShapeToDraw_FWD_DEFINED__
#define __IShapeToDraw_FWD_DEFINED__
typedef interface IShapeToDraw IShapeToDraw;

#endif 	/* __IShapeToDraw_FWD_DEFINED__ */


#ifndef __SquareObject_FWD_DEFINED__
#define __SquareObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class SquareObject SquareObject;
#else
typedef struct SquareObject SquareObject;
#endif /* __cplusplus */

#endif 	/* __SquareObject_FWD_DEFINED__ */


#ifndef __RectangleObject_FWD_DEFINED__
#define __RectangleObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class RectangleObject RectangleObject;
#else
typedef struct RectangleObject RectangleObject;
#endif /* __cplusplus */

#endif 	/* __RectangleObject_FWD_DEFINED__ */


#ifndef __EllipseObject_FWD_DEFINED__
#define __EllipseObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class EllipseObject EllipseObject;
#else
typedef struct EllipseObject EllipseObject;
#endif /* __cplusplus */

#endif 	/* __EllipseObject_FWD_DEFINED__ */


#ifndef __CircleObject_FWD_DEFINED__
#define __CircleObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class CircleObject CircleObject;
#else
typedef struct CircleObject CircleObject;
#endif /* __cplusplus */

#endif 	/* __CircleObject_FWD_DEFINED__ */


#ifndef __TriangleObject_FWD_DEFINED__
#define __TriangleObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class TriangleObject TriangleObject;
#else
typedef struct TriangleObject TriangleObject;
#endif /* __cplusplus */

#endif 	/* __TriangleObject_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IShapeToDraw_INTERFACE_DEFINED__
#define __IShapeToDraw_INTERFACE_DEFINED__

/* interface IShapeToDraw */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IShapeToDraw;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ba0a089b-b7a5-4f3b-aa02-5679730cbd29")
    IShapeToDraw : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetPosition( 
            /* [in] */ RECT rect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Draw( 
            /* [in] */ HDC hDc,
            /* [in] */ HBRUSH brush) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IShapeToDrawVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IShapeToDraw * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IShapeToDraw * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IShapeToDraw * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IShapeToDraw * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IShapeToDraw * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IShapeToDraw * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IShapeToDraw * This,
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
        
        HRESULT ( STDMETHODCALLTYPE *SetPosition )( 
            IShapeToDraw * This,
            /* [in] */ RECT rect);
        
        HRESULT ( STDMETHODCALLTYPE *Draw )( 
            IShapeToDraw * This,
            /* [in] */ HDC hDc,
            /* [in] */ HBRUSH brush);
        
        END_INTERFACE
    } IShapeToDrawVtbl;

    interface IShapeToDraw
    {
        CONST_VTBL struct IShapeToDrawVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IShapeToDraw_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IShapeToDraw_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IShapeToDraw_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IShapeToDraw_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IShapeToDraw_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IShapeToDraw_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IShapeToDraw_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IShapeToDraw_SetPosition(This,rect)	\
    ( (This)->lpVtbl -> SetPosition(This,rect) ) 

#define IShapeToDraw_Draw(This,hDc,brush)	\
    ( (This)->lpVtbl -> Draw(This,hDc,brush) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IShapeToDraw_INTERFACE_DEFINED__ */



#ifndef __DrawerServerLib_LIBRARY_DEFINED__
#define __DrawerServerLib_LIBRARY_DEFINED__

/* library DrawerServerLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_DrawerServerLib;

EXTERN_C const CLSID CLSID_SquareObject;

#ifdef __cplusplus

class DECLSPEC_UUID("6cae19e1-61f7-4145-8026-45e985c86358")
SquareObject;
#endif

EXTERN_C const CLSID CLSID_RectangleObject;

#ifdef __cplusplus

class DECLSPEC_UUID("13c5bb57-77dc-4bf7-b8d7-aa104ce81428")
RectangleObject;
#endif

EXTERN_C const CLSID CLSID_EllipseObject;

#ifdef __cplusplus

class DECLSPEC_UUID("fb95bd2a-98c0-44ec-8f36-6e21a666d65d")
EllipseObject;
#endif

EXTERN_C const CLSID CLSID_CircleObject;

#ifdef __cplusplus

class DECLSPEC_UUID("3505ed72-4337-4e13-baa4-40eb298ec47a")
CircleObject;
#endif

EXTERN_C const CLSID CLSID_TriangleObject;

#ifdef __cplusplus

class DECLSPEC_UUID("f97f9cd8-8265-49de-9811-afc72641ce70")
TriangleObject;
#endif
#endif /* __DrawerServerLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HBRUSH_UserSize(     unsigned long *, unsigned long            , HBRUSH * ); 
unsigned char * __RPC_USER  HBRUSH_UserMarshal(  unsigned long *, unsigned char *, HBRUSH * ); 
unsigned char * __RPC_USER  HBRUSH_UserUnmarshal(unsigned long *, unsigned char *, HBRUSH * ); 
void                      __RPC_USER  HBRUSH_UserFree(     unsigned long *, HBRUSH * ); 

unsigned long             __RPC_USER  HDC_UserSize(     unsigned long *, unsigned long            , HDC * ); 
unsigned char * __RPC_USER  HDC_UserMarshal(  unsigned long *, unsigned char *, HDC * ); 
unsigned char * __RPC_USER  HDC_UserUnmarshal(unsigned long *, unsigned char *, HDC * ); 
void                      __RPC_USER  HDC_UserFree(     unsigned long *, HDC * ); 

unsigned long             __RPC_USER  HBRUSH_UserSize64(     unsigned long *, unsigned long            , HBRUSH * ); 
unsigned char * __RPC_USER  HBRUSH_UserMarshal64(  unsigned long *, unsigned char *, HBRUSH * ); 
unsigned char * __RPC_USER  HBRUSH_UserUnmarshal64(unsigned long *, unsigned char *, HBRUSH * ); 
void                      __RPC_USER  HBRUSH_UserFree64(     unsigned long *, HBRUSH * ); 

unsigned long             __RPC_USER  HDC_UserSize64(     unsigned long *, unsigned long            , HDC * ); 
unsigned char * __RPC_USER  HDC_UserMarshal64(  unsigned long *, unsigned char *, HDC * ); 
unsigned char * __RPC_USER  HDC_UserUnmarshal64(unsigned long *, unsigned char *, HDC * ); 
void                      __RPC_USER  HDC_UserFree64(     unsigned long *, HDC * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


