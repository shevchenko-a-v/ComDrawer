// EllipseObject.h : Declaration of the CEllipseObject

#pragma once
#include "resource.h"       // main symbols



#include "DrawerServer_i.h"



#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

using namespace ATL;


// CEllipseObject

class ATL_NO_VTABLE CEllipseObject :
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CEllipseObject, &CLSID_EllipseObject>,
	public IDispatchImpl<IEllipseObject, &IID_IEllipseObject, &LIBID_DrawerServerLib, /*wMajor =*/ 1, /*wMinor =*/ 0>
{
public:
	CEllipseObject()
	{
	}

DECLARE_REGISTRY_RESOURCEID(108)


BEGIN_COM_MAP(CEllipseObject)
	COM_INTERFACE_ENTRY(IEllipseObject)
	COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()



	DECLARE_PROTECT_FINAL_CONSTRUCT()

	HRESULT FinalConstruct()
	{
		return S_OK;
	}

	void FinalRelease()
	{
	}

public:

	HRESULT STDMETHODCALLTYPE SetPosition(RECT r);

	HRESULT STDMETHODCALLTYPE Draw(HDC hDc, HBRUSH brush);

private:

	RECT m_rect;

};

OBJECT_ENTRY_AUTO(__uuidof(EllipseObject), CEllipseObject)
