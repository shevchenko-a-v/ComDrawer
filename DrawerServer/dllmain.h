// dllmain.h : Declaration of module class.

class CDrawerServerModule : public ATL::CAtlDllModuleT< CDrawerServerModule >
{
public :
	DECLARE_LIBID(LIBID_DrawerServerLib)
	DECLARE_REGISTRY_APPID_RESOURCEID(IDR_DRAWERSERVER, "{a2c90dc8-b295-4d6b-a54e-fb123e7bb90e}")
};

extern class CDrawerServerModule _AtlModule;
