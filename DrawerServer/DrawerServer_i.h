

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


#ifndef __IRectangleObject_FWD_DEFINED__
#define __IRectangleObject_FWD_DEFINED__
typedef interface IRectangleObject IRectangleObject;

#endif 	/* __IRectangleObject_FWD_DEFINED__ */


#ifndef __IEllipseObject_FWD_DEFINED__
#define __IEllipseObject_FWD_DEFINED__
typedef interface IEllipseObject IEllipseObject;

#endif 	/* __IEllipseObject_FWD_DEFINED__ */


#ifndef __ICircleObject_FWD_DEFINED__
#define __ICircleObject_FWD_DEFINED__
typedef interface ICircleObject ICircleObject;

#endif 	/* __ICircleObject_FWD_DEFINED__ */


#ifndef __ITriangleObject_FWD_DEFINED__
#define __ITriangleObject_FWD_DEFINED__
typedef interface ITriangleObject ITriangleObject;

#endif 	/* __ITriangleObject_FWD_DEFINED__ */


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
            /* [in] */ HDC hDc,
            /* [in] */ HBRUSH brush) = 0;
        
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
            /* [in] */ HDC hDc,
            /* [in] */ HBRUSH brush);
        
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

#define ISquareObject_Draw(This,hDc,brush)	\
    ( (This)->lpVtbl -> Draw(This,hDc,brush) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISquareObject_INTERFACE_DEFINED__ */


#ifndef __IRectangleObject_INTERFACE_DEFINED__
#define __IRectangleObject_INTERFACE_DEFINED__

/* interface IRectangleObject */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IRectangleObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("83c4e003-d606-4091-896a-cdbf24ac7e68")
    IRectangleObject : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetPosition( 
            /* [in] */ RECT rect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Draw( 
            /* [in] */ HDC hDc,
            /* [in] */ HBRUSH brush) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IRectangleObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IRectangleObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IRectangleObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IRectangleObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IRectangleObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IRectangleObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IRectangleObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IRectangleObject * This,
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
            IRectangleObject * This,
            /* [in] */ RECT rect);
        
        HRESULT ( STDMETHODCALLTYPE *Draw )( 
            IRectangleObject * This,
            /* [in] */ HDC hDc,
            /* [in] */ HBRUSH brush);
        
        END_INTERFACE
    } IRectangleObjectVtbl;

    interface IRectangleObject
    {
        CONST_VTBL struct IRectangleObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IRectangleObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IRectangleObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IRectangleObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IRectangleObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IRectangleObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IRectangleObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IRectangleObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IRectangleObject_SetPosition(This,rect)	\
    ( (This)->lpVtbl -> SetPosition(This,rect) ) 

#define IRectangleObject_Draw(This,hDc,brush)	\
    ( (This)->lpVtbl -> Draw(This,hDc,brush) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IRectangleObject_INTERFACE_DEFINED__ */


#ifndef __IEllipseObject_INTERFACE_DEFINED__
#define __IEllipseObject_INTERFACE_DEFINED__

/* interface IEllipseObject */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_IEllipseObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1013a9b4-0517-4c2a-b4a2-4fdf6201e814")
    IEllipseObject : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetPosition( 
            /* [in] */ RECT rect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Draw( 
            /* [in] */ HDC hDc,
            /* [in] */ HBRUSH brush) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEllipseObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEllipseObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEllipseObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEllipseObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IEllipseObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IEllipseObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IEllipseObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IEllipseObject * This,
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
            IEllipseObject * This,
            /* [in] */ RECT rect);
        
        HRESULT ( STDMETHODCALLTYPE *Draw )( 
            IEllipseObject * This,
            /* [in] */ HDC hDc,
            /* [in] */ HBRUSH brush);
        
        END_INTERFACE
    } IEllipseObjectVtbl;

    interface IEllipseObject
    {
        CONST_VTBL struct IEllipseObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEllipseObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEllipseObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEllipseObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEllipseObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IEllipseObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IEllipseObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IEllipseObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IEllipseObject_SetPosition(This,rect)	\
    ( (This)->lpVtbl -> SetPosition(This,rect) ) 

#define IEllipseObject_Draw(This,hDc,brush)	\
    ( (This)->lpVtbl -> Draw(This,hDc,brush) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEllipseObject_INTERFACE_DEFINED__ */


#ifndef __ICircleObject_INTERFACE_DEFINED__
#define __ICircleObject_INTERFACE_DEFINED__

/* interface ICircleObject */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ICircleObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6f24d918-1a86-41aa-a54c-cf67c3292d33")
    ICircleObject : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetPosition( 
            /* [in] */ RECT rect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Draw( 
            /* [in] */ HDC hDc,
            /* [in] */ HBRUSH brush) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ICircleObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ICircleObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ICircleObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ICircleObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ICircleObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ICircleObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ICircleObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ICircleObject * This,
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
            ICircleObject * This,
            /* [in] */ RECT rect);
        
        HRESULT ( STDMETHODCALLTYPE *Draw )( 
            ICircleObject * This,
            /* [in] */ HDC hDc,
            /* [in] */ HBRUSH brush);
        
        END_INTERFACE
    } ICircleObjectVtbl;

    interface ICircleObject
    {
        CONST_VTBL struct ICircleObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ICircleObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ICircleObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ICircleObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ICircleObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ICircleObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ICircleObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ICircleObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ICircleObject_SetPosition(This,rect)	\
    ( (This)->lpVtbl -> SetPosition(This,rect) ) 

#define ICircleObject_Draw(This,hDc,brush)	\
    ( (This)->lpVtbl -> Draw(This,hDc,brush) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ICircleObject_INTERFACE_DEFINED__ */


#ifndef __ITriangleObject_INTERFACE_DEFINED__
#define __ITriangleObject_INTERFACE_DEFINED__

/* interface ITriangleObject */
/* [unique][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_ITriangleObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("d6f8edb5-1a56-4890-bb09-a03cdb36f514")
    ITriangleObject : public IDispatch
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE SetPosition( 
            /* [in] */ RECT rect) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Draw( 
            /* [in] */ HDC hDc,
            /* [in] */ HBRUSH brush) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITriangleObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITriangleObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITriangleObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITriangleObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITriangleObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITriangleObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITriangleObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITriangleObject * This,
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
            ITriangleObject * This,
            /* [in] */ RECT rect);
        
        HRESULT ( STDMETHODCALLTYPE *Draw )( 
            ITriangleObject * This,
            /* [in] */ HDC hDc,
            /* [in] */ HBRUSH brush);
        
        END_INTERFACE
    } ITriangleObjectVtbl;

    interface ITriangleObject
    {
        CONST_VTBL struct ITriangleObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITriangleObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITriangleObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITriangleObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITriangleObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITriangleObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITriangleObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITriangleObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITriangleObject_SetPosition(This,rect)	\
    ( (This)->lpVtbl -> SetPosition(This,rect) ) 

#define ITriangleObject_Draw(This,hDc,brush)	\
    ( (This)->lpVtbl -> Draw(This,hDc,brush) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITriangleObject_INTERFACE_DEFINED__ */



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


