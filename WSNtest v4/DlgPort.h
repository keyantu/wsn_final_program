#if !defined(AFX_DLGPORT_H__52F360BD_04F0_4720_92A9_61902E99D1CC__INCLUDED_)
#define AFX_DLGPORT_H__52F360BD_04F0_4720_92A9_61902E99D1CC__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DlgPort.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDlgPort dialog

class CDlgPort : public CDialog
{
// Construction
public:
	void icon_re();
	BOOL state2;
	BOOL state1;
	CDlgPort(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDlgPort)
	enum { IDD = IDD_DLG_PORT };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDlgPort)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDlgPort)
	virtual BOOL OnInitDialog();
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLGPORT_H__52F360BD_04F0_4720_92A9_61902E99D1CC__INCLUDED_)
