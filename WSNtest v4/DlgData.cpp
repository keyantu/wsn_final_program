// DlgData.cpp : implementation file
//

#include "stdafx.h"
#include "WSNtest.h"
#include "DlgData.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDlgData dialog


CDlgData::CDlgData(CWnd* pParent /*=NULL*/)
	: CDialog(CDlgData::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDlgData)
	//}}AFX_DATA_INIT
}


void CDlgData::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDlgData)
	DDX_Control(pDX, IDC_TCHART1, m_tc_Temp);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDlgData, CDialog)
	//{{AFX_MSG_MAP(CDlgData)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDlgData message handlers
