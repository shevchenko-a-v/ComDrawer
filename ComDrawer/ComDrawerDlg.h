
// ComDrawerDlg.h : header file
//

#pragma once

#include "DimensionSplitter.h"

// CComDrawerDlg dialog
class CComDrawerDlg : public CDialogEx
{
// Construction
public:
	CComDrawerDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_COMDRAWER_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
	
	afx_msg void OnBnClickedBtnDraw();
	afx_msg void OnGetMinMaxInfo(MINMAXINFO* lpMMI);

private:
	DimensionSplitter m_dimSplitter;
};
