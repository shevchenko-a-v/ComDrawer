
// ComDrawerWndView.h : interface of the CComDrawerWndView class
//

#pragma once


class CComDrawerWndView : public CView
{
protected: // create from serialization only
	CComDrawerWndView();
	DECLARE_DYNCREATE(CComDrawerWndView)

// Attributes
public:
	CComDrawerWndDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CComDrawerWndView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in ComDrawerWndView.cpp
inline CComDrawerWndDoc* CComDrawerWndView::GetDocument() const
   { return reinterpret_cast<CComDrawerWndDoc*>(m_pDocument); }
#endif

