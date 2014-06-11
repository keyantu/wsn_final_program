// WSNtestDlg.h : header file
//
#include "DlgData.h"
#include "DlgPort.h"
#include "DlgScene.h"
#include "DlgHello.h"

//{{AFX_INCLUDES()
#include "mscomm.h"
//}}AFX_INCLUDES
#define PageNum 2
#if !defined(AFX_WSNTESTDLG_H__D3D67673_1843_469E_B742_E821A8C567B0__INCLUDED_)
#define AFX_WSNTESTDLG_H__D3D67673_1843_469E_B742_E821A8C567B0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CWSNtestDlg dialog

class CWSNtestDlg : public CDialog
{
// Construction
public:
	CWSNtestDlg(CWnd* pParent = NULL);	// standard constructor
	void ShowPageX(int nPageID);
	CDlgPort m_page1;
	//CDlgData m_page2;
	CDlgScene m_page3;
	CDialog*  m_PageArry[PageNum];
	//为添加图标做准备
	CImageList m_ImageList;
// Dialog Data
	//{{AFX_DATA(CWSNtestDlg)
	enum { IDD = IDD_WSNTEST_DIALOG };
	CTabCtrl	m_TabCtrl;
	CMSComm	m_cComm;
	CString	m_strSendData;
	int		m_temp;
	int		m_humid;
	int		m_light;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWSNtestDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CWSNtestDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnMscom();
	afx_msg void OnSelPort();
	afx_msg void OnSelBaud();
	afx_msg void OnBtnSend();
	afx_msg void OnSelchangeTab1(NMHDR* pNMHDR, LRESULT* pResult);
	DECLARE_EVENTSINK_MAP()
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WSNTESTDLG_H__D3D67673_1843_469E_B742_E821A8C567B0__INCLUDED_)
