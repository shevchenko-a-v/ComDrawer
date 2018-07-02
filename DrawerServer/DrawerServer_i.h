

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

#ifndef __ISquareObject_FWD_DEFINED__
#define __ISquareObject_FWD_DEFINED__
typedef interface ISquareObject ISquareObject;

#endif 	/* __ISquareObject_FWD_DEFINED__ */


#ifndef __SquareObject_FWD_DEFINED__
#define __SquareObject_FWD_DEFINED__

#ifdef __cplusplus
typedef class SquareObject SquareObject;
#else
typedef struct SquareObject SquareObject;
#endif /* __cplusplus */

#endif 	/* __SquareObject_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ISquareObject_INTERFACE_DEFINED__
#define __ISquareObject_INTERFACE_DEFINED__

/* interface ISquareObject */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ISquareObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ba0a089b-b7a5-4f3b-aa02-5679730cbd29")
    ISquareObject : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetPosition( 
            /* [in] */ RECT rect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Draw( 
            /* [in] */ wireHDC hDc) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISquareObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISquareObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISquareObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISquareObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ISquareObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ISquareObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ISquareObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ISquareObject * This,
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
            ISquareObject * This,
            /* [in] */ RECT rect);
        
        HRESULT ( STDMETHODCALLTYPE *Draw )( 
            ISquareObject * This,
            /* [in] */ wireHDC hDc);
        
        END_INTERFACE
    } ISquareObjectVtbl;

    interface ISquareObject
    {
        CONST_VTBL struct ISquareObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISquareObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISquareObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISquareObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISquareObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ISquareObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ISquareObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ISquareObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ISquareObject_SetPosition(This,rect)	\
    ( (This)->lpVtbl -> SetPosition(This,rect) ) 

#define ISquareObject_Draw(This,hDc)	\
    ( (This)->lpVtbl -> Draw(This,hDc) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISquareObject_INTERFACE_DEFINED__ */



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
#endif /* __DrawerServerLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


