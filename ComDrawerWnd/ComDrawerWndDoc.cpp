
// ComDrawerWndDoc.cpp : implementation of the CComDrawerWndDoc class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "ComDrawerWnd.h"
#endif

#include "ComDrawerWndDoc.h"
#include "ComDrawerWndView.h"


#include <propkey.h>


#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CComDrawerWndDoc

IMPLEMENT_DYNCREATE(CComDrawerWndDoc, CDocument)

BEGIN_MESSAGE_MAP(CComDrawerWndDoc, CDocument)
END_MESSAGE_MAP()


// CComDrawerWndDoc construction/destruction

CComDrawerWndDoc::CComDrawerWndDoc()
{
	// TODO: add one-time construction code here

}

CComDrawerWndDoc::~CComDrawerWndDoc()
{
	for (auto shape : m_shapes)
	{
		delete shape;
	}
	m_shapes.clear();
}

BOOL CComDrawerWndDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)
	POSITION pos = GetFirstViewPosition();
	CComDrawerWndView *p = (CComDrawerWndView *)this->GetNextView(pos);

	if (p != nullptr)
	{
		RECT r;
		p->GetClientRect(&r);
		CreateShapesToDraw(r);
	}
	return TRUE;
}




// CComDrawerWndDoc serialization

void CComDrawerWndDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

#ifdef SHARED_HANDLERS

// Support for thumbnails
void CComDrawerWndDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// Modify this code to draw the document's data
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// Support for Search Handlers
void CComDrawerWndDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// Set search contents from document's data.
	// The content parts should be separated by ";"

	// For example:  strSearchContent = _T("point;rectangle;circle;ole object;");
	SetSearchContent(strSearchContent);
}

void CComDrawerWndDoc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = nullptr;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != nullptr)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// CComDrawerWndDoc diagnostics

#ifdef _DEBUG
void CComDrawerWndDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CComDrawerWndDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}


#endif //_DEBUG

void CComDrawerWndDoc::CreateShapesToDraw(RECT rect)
{
	for (auto shape : m_shapes)
	{
		delete shape;
	}
	m_shapes.clear();

	m_dimSplitter.SetBaseRect(rect);
	std::vector<RECT> rects;
	m_dimSplitter.GetSplitRects(rects);

	std::random_device rd;
	std::uniform_int_distribution<int> typeDist(0, 4);

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
		m_shapes.push_back(new ShapeWrapper(pI));

	}
}

const std::vector<ShapeWrapper*>& CComDrawerWndDoc::GetShapesToDraw()
{
	const std::vector<ShapeWrapper*>& ref = m_shapes;
	return ref;
}


// CComDrawerWndDoc commands
