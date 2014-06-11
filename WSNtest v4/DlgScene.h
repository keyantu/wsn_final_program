#if !defined(AFX_DLGSCENE_H__8703D4CD_9C4C_448A_AFF0_FEC7449C9548__INCLUDED_)
#define AFX_DLGSCENE_H__8703D4CD_9C4C_448A_AFF0_FEC7449C9548__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DlgScene.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDlgScene dialog

class CDlgScene : public CDialog
{
// Construction
public:
	BOOL foot;
	BOOL ampm;
	CDlgScene(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDlgScene)
	enum { IDD = IDD_DLG_SCENE };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDlgScene)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDlgScene)
	afx_msg void OnBtnLit();
	afx_msg void OnBtnFoot();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLGSCENE_H__8703D4CD_9C4C_448A_AFF0_FEC7449C9548__INCLUDED_)
