
// ComDrawerWndView.cpp : implementation of the CComDrawerWndView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "ComDrawerWnd.h"
#endif

#include "ComDrawerWndDoc.h"
#include "ComDrawerWndView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CComDrawerWndView

IMPLEMENT_DYNCREATE(CComDrawerWndView, CView)

BEGIN_MESSAGE_MAP(CComDrawerWndView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CComDrawerWndView construction/destruction

CComDrawerWndView::CComDrawerWndView()
{
	// TODO: add construction code here

}

CComDrawerWndView::~CComDrawerWndView()
{
}

BOOL CComDrawerWndView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CComDrawerWndView drawing

void CComDrawerWndView::OnDraw(CDC* pDC)
{
	CComDrawerWndDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	auto shapes = pDoc->GetShapesToDraw();

	for (auto shape : shapes)
	{
		shape->Draw(pDC->m_hDC);
	}
}


// CComDrawerWndView printing

BOOL CComDrawerWndView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CComDrawerWndView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CComDrawerWndView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}


// CComDrawerWndView diagnostics

#ifdef _DEBUG
void CComDrawerWndView::AssertValid() const
{
	CView::AssertValid();
}

void CComDrawerWndView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CComDrawerWndDoc* CComDrawerWndView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CComDrawerWndDoc)));
	return (CComDrawerWndDoc*)m_pDocument;
}
#endif //_DEBUG


// CComDrawerWndView message handlers
