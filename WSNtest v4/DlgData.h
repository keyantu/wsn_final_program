//{{AFX_INCLUDES()

#include "tchart1.h"
//}}AFX_INCLUDES

#include "axes1.h"
#include "axis1.h"
#include "scroll1.h"
#include "series1.h"
#if !defined(AFX_DLGDATA_H__6C420F96_3348_456F_9796_72A90F945ED4__INCLUDED_)
#define AFX_DLGDATA_H__6C420F96_3348_456F_9796_72A90F945ED4__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DlgData.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDlgData dialog

class CDlgData : public CDialog
{
// Construction
public:
	CDlgData(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDlgData)
	enum { IDD = IDD_DLG_DATA };
	CTChart1	m_tc_Temp;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDlgData)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDlgData)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLGDATA_H__6C420F96_3348_456F_9796_72A90F945ED4__INCLUDED_)
