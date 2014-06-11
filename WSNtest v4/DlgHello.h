#if !defined(AFX_DLGHELLO_H__203FD0D8_0CD2_404D_ADD3_095BD1F3BC10__INCLUDED_)
#define AFX_DLGHELLO_H__203FD0D8_0CD2_404D_ADD3_095BD1F3BC10__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DlgHello.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDlgHello dialog

class CDlgHello : public CDialog
{
// Construction
public:
	CDlgHello(CWnd* pParent = NULL);   // standard constructor
	CBrush m_brush;
	CFont m_font;
// Dialog Data
	//{{AFX_DATA(CDlgHello)
	enum { IDD = IDD_DIALOG1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDlgHello)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDlgHello)
	virtual BOOL OnInitDialog();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	afx_msg void OnCancelMode();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLGHELLO_H__203FD0D8_0CD2_404D_ADD3_095BD1F3BC10__INCLUDED_)
