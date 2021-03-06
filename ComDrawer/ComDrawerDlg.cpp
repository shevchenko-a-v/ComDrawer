
// ComDrawerDlg.cpp : implementation file
//

#include "stdafx.h"
#include "ComDrawer.h"
#include "ComDrawerDlg.h"
#include "afxdialogex.h"

#include "atlbase.h"
#import "DrawerServer.tlb" no_namespace

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CComDrawerDlg dialog



CComDrawerDlg::CComDrawerDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_COMDRAWER_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CComDrawerDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CComDrawerDlg, CDialogEx)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BTN_DRAW, &CComDrawerDlg::OnBnClickedBtnDraw)
	ON_WM_GETMINMAXINFO()
END_MESSAGE_MAP()


// CComDrawerDlg message handlers

BOOL CComDrawerDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// TODO: Add extra initialization here
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CComDrawerDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CComDrawerDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CComDrawerDlg::OnBnClickedBtnDraw()
{
	CWnd* btnRedraw = this->GetDlgItem(IDC_BTN_DRAW);
	RECT btnRect;
	if (btnRedraw != nullptr)
	{
		btnRedraw->GetWindowRect(&btnRect);
		ScreenToClient(&btnRect);
	}
	RECT r;
	GetClientRect(&r);
	r.top += btnRect.bottom + 10; // add some space after button
	// draw white rectangle to clear area
	CDC *dc = GetDC();
	HBRUSH brWhite = CreateSolidBrush(RGB(255, 255, 255));
	HBRUSH old = (HBRUSH)dc->SelectObject(&brWhite);
	dc->Rectangle(&r);
	dc->SelectObject(&old);
	DeleteObject(brWhite);

	m_dimSplitter.SetBaseRect(r);
	std::vector<RECT> rects;
	m_dimSplitter.GetSplitRects(rects);

	std::random_device rd;
	std::uniform_int_distribution<int> typeDist(0, 4);
	std::uniform_int_distribution<int> colorDist(0, 255);

	for (auto r : rects)
	{		
		CComPtr<IUnknown> spUnknown;
		int type = typeDist(rd);
		switch (type)
		{
		case 0:
			spUnknown.CoCreateInstance(__uuidof(CircleObject));
			break;
		case 1:
			spUnknown.CoCreateInstance(__uuidof(EllipseObject));
			break;
		case 2:
			spUnknown.CoCreateInstance(__uuidof(SquareObject));
			break;
		case 3:
			spUnknown.CoCreateInstance(__uuidof(RectangleObject));
			break;
		case 4:
			spUnknown.CoCreateInstance(__uuidof(TriangleObject));
			break;
		}
	
		CComPtr<IShapeToDraw> pI;
		spUnknown.QueryInterface(&pI);
		
		pI->SetPosition(r);
		HBRUSH br = CreateSolidBrush(RGB(colorDist(rd), colorDist(rd), colorDist(rd)));
		pI->Draw((wireHDC)GetDC()->m_hDC, (wireHBRUSH)br);
		DeleteObject(br);
	}
}


void CComDrawerDlg::OnGetMinMaxInfo(MINMAXINFO* lpMMI)
{
	lpMMI->ptMinTrackSize.x = 500;
	lpMMI->ptMinTrackSize.y = 350;

	CDialogEx::OnGetMinMaxInfo(lpMMI);
}
