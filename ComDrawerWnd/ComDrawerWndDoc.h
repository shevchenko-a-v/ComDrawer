
// ComDrawerWndDoc.h : interface of the CComDrawerWndDoc class
//


#pragma once


class CComDrawerWndDoc : public CDocument
{
protected: // create from serialization only
	CComDrawerWndDoc();
	DECLARE_DYNCREATE(CComDrawerWndDoc)

// Attributes
public:

// Operations
public:

// Overrides
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// Implementation
public:
	virtual ~CComDrawerWndDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

	void CreateShapesToDraw(RECT rect);
	const std::vector<ShapeWrapper*>& GetShapesToDraw();

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// Helper function that sets search content for a Search Handler
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS

private:

	DimensionSplitter m_dimSplitter;
	std::vector<ShapeWrapper*> m_shapes;

};
