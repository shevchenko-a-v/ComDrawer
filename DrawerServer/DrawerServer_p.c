

/* this ALWAYS GENERATED file contains the proxy stub code */


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

#if !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_)


#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */
#pragma warning( disable: 4100 ) /* unreferenced arguments in x86 call */

#pragma optimize("", off ) 

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "DrawerServer_i.h"

#define TYPE_FORMAT_STRING_SIZE   57                                
#define PROC_FORMAT_STRING_SIZE   79                                
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _DrawerServer_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } DrawerServer_MIDL_TYPE_FORMAT_STRING;

typedef struct _DrawerServer_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } DrawerServer_MIDL_PROC_FORMAT_STRING;

typedef struct _DrawerServer_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } DrawerServer_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const DrawerServer_MIDL_TYPE_FORMAT_STRING DrawerServer__MIDL_TypeFormatString;
extern const DrawerServer_MIDL_PROC_FORMAT_STRING DrawerServer__MIDL_ProcFormatString;
extern const DrawerServer_MIDL_EXPR_FORMAT_STRING DrawerServer__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IShapeToDraw_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IShapeToDraw_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN32__)
#error  Invalid build platform for this stub.
#endif
#if !(TARGET_IS_NT60_OR_LATER)
#error You need Windows Vista or later to run this stub because it uses these features:
#error   forced complex structure or array, new range semantics, compiled for Windows Vista.
#error However, your C/C++ compilation flags indicate you intend to run this app on earlier systems.
#error This app will fail with the RPC_X_WRONG_STUB_VERSION error.
#endif


static const DrawerServer_MIDL_PROC_FORMAT_STRING DrawerServer__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure SetPosition */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0x18 ),	/* x86 Stack size/offset = 24 */
/* 10 */	NdrFcShort( 0x20 ),	/* 32 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x44,		/* Oi2 Flags:  has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0x8,		/* 8 */
			0x41,		/* Ext Flags:  new corr desc, has range on conformance */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter rect */

/* 24 */	NdrFcShort( 0x8a ),	/* Flags:  must free, in, by val, */
/* 26 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 28 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 30 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 32 */	NdrFcShort( 0x14 ),	/* x86 Stack size/offset = 20 */
/* 34 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure Draw */

/* 36 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 38 */	NdrFcLong( 0x0 ),	/* 0 */
/* 42 */	NdrFcShort( 0x8 ),	/* 8 */
/* 44 */	NdrFcShort( 0x10 ),	/* x86 Stack size/offset = 16 */
/* 46 */	NdrFcShort( 0x0 ),	/* 0 */
/* 48 */	NdrFcShort( 0x8 ),	/* 8 */
/* 50 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 52 */	0x8,		/* 8 */
			0x45,		/* Ext Flags:  new corr desc, srv corr check, has range on conformance */
/* 54 */	NdrFcShort( 0x0 ),	/* 0 */
/* 56 */	NdrFcShort( 0x1 ),	/* 1 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter hDc */

/* 60 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 62 */	NdrFcShort( 0x4 ),	/* x86 Stack size/offset = 4 */
/* 64 */	NdrFcShort( 0x24 ),	/* Type Offset=36 */

	/* Parameter brush */

/* 66 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 68 */	NdrFcShort( 0x8 ),	/* x86 Stack size/offset = 8 */
/* 70 */	NdrFcShort( 0x2e ),	/* Type Offset=46 */

	/* Return value */

/* 72 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 74 */	NdrFcShort( 0xc ),	/* x86 Stack size/offset = 12 */
/* 76 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const DrawerServer_MIDL_TYPE_FORMAT_STRING DrawerServer__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/*  4 */	NdrFcShort( 0x10 ),	/* 16 */
/*  6 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/*  8 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 10 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 12 */	
			0x12, 0x0,	/* FC_UP */
/* 14 */	NdrFcShort( 0x2 ),	/* Offset= 2 (16) */
/* 16 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x48,		/* 72 */
/* 18 */	NdrFcShort( 0x4 ),	/* 4 */
/* 20 */	NdrFcShort( 0x2 ),	/* 2 */
/* 22 */	NdrFcLong( 0x48746457 ),	/* 1215587415 */
/* 26 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 28 */	NdrFcLong( 0x52746457 ),	/* 1383359575 */
/* 32 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 34 */	NdrFcShort( 0xffff ),	/* Offset= -1 (33) */
/* 36 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 38 */	NdrFcShort( 0x0 ),	/* 0 */
/* 40 */	NdrFcShort( 0x4 ),	/* 4 */
/* 42 */	NdrFcShort( 0x0 ),	/* 0 */
/* 44 */	NdrFcShort( 0xffe0 ),	/* Offset= -32 (12) */
/* 46 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 48 */	NdrFcShort( 0x1 ),	/* 1 */
/* 50 */	NdrFcShort( 0x4 ),	/* 4 */
/* 52 */	NdrFcShort( 0x0 ),	/* 0 */
/* 54 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (12) */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            HDC_UserSize
            ,HDC_UserMarshal
            ,HDC_UserUnmarshal
            ,HDC_UserFree
            },
            {
            HBRUSH_UserSize
            ,HBRUSH_UserMarshal
            ,HBRUSH_UserUnmarshal
            ,HBRUSH_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IShapeToDraw, ver. 0.0,
   GUID={0xba0a089b,0xb7a5,0x4f3b,{0xaa,0x02,0x56,0x79,0x73,0x0c,0xbd,0x29}} */

#pragma code_seg(".orpc")
static const unsigned short IShapeToDraw_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    36
    };

static const MIDL_STUBLESS_PROXY_INFO IShapeToDraw_ProxyInfo =
    {
    &Object_StubDesc,
    DrawerServer__MIDL_ProcFormatString.Format,
    &IShapeToDraw_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IShapeToDraw_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    DrawerServer__MIDL_ProcFormatString.Format,
    &IShapeToDraw_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(9) _IShapeToDrawProxyVtbl = 
{
    &IShapeToDraw_ProxyInfo,
    &IID_IShapeToDraw,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IShapeToDraw::SetPosition */ ,
    (void *) (INT_PTR) -1 /* IShapeToDraw::Draw */
};


static const PRPC_STUB_FUNCTION IShapeToDraw_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IShapeToDrawStubVtbl =
{
    &IID_IShapeToDraw,
    &IShapeToDraw_ServerInfo,
    9,
    &IShapeToDraw_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    DrawerServer__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x60001, /* Ndr library version */
    0,
    0x801026e, /* MIDL Version 8.1.622 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _DrawerServer_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IShapeToDrawProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _DrawerServer_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IShapeToDrawStubVtbl,
    0
};

PCInterfaceName const _DrawerServer_InterfaceNamesList[] = 
{
    "IShapeToDraw",
    0
};

const IID *  const _DrawerServer_BaseIIDList[] = 
{
    &IID_IDispatch,
    0
};


#define _DrawerServer_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _DrawerServer, pIID, n)

int __stdcall _DrawerServer_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_DrawerServer_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo DrawerServer_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _DrawerServer_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _DrawerServer_StubVtblList,
    (const PCInterfaceName * ) & _DrawerServer_InterfaceNamesList,
    (const IID ** ) & _DrawerServer_BaseIIDList,
    & _DrawerServer_IID_Lookup, 
    1,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#pragma optimize("", on )
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* !defined(_M_IA64) && !defined(_M_AMD64) && !defined(_ARM_) */

