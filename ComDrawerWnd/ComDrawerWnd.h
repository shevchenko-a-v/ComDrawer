
// ComDrawerWnd.h : main header file for the ComDrawerWnd application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CComDrawerWndApp:
// See ComDrawerWnd.cpp for the implementation of this class
//

class CComDrawerWndApp : public CWinApp
{
public:
	CComDrawerWndApp();

protected:
	CMultiDocTemplate* m_pDocTemplate;
public:

// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnFileNewFrame();
	afx_msg void OnFileRedraw();
	DECLARE_MESSAGE_MAP()
};

extern CComDrawerWndApp theApp;
