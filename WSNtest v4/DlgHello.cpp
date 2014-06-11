// DlgHello.cpp : implementation file
//

#include "stdafx.h"
#include "WSNtest.h"
#include "DlgHello.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDlgHello dialog


CDlgHello::CDlgHello(CWnd* pParent /*=NULL*/)
	: CDialog(CDlgHello::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDlgHello)
		// NOTE: the ClassWizard will add member initialization here
		m_font.CreatePointFont(200,"楷体");
	//}}AFX_DATA_INIT
}


void CDlgHello::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDlgHello)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDlgHello, CDialog)
	//{{AFX_MSG_MAP(CDlgHello)
	ON_WM_CTLCOLOR()
	ON_WM_CANCELMODE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDlgHello message handlers

BOOL CDlgHello::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	
	CBitmap bmp;
	bmp.LoadBitmap(IDB_BITMAP1);  //IDB_BITMAP1是图片资源ID
	m_brush.CreatePatternBrush(&bmp);

	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}

HBRUSH CDlgHello::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor) 
{
	HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);
	
	// TODO: Change any attributes of the DC here
	if(pWnd->GetDlgCtrlID()==IDC_STATIC_HELLO)
	{
		
		pDC->SetTextColor(RGB(0,0,255));
		pDC->SelectObject(&m_font);
	}
	// TODO: Return a different brush if the default is not desired
	
	return (HBRUSH)m_brush;

}

void CDlgHello::OnCancelMode() 
{
	CDialog::OnCancelMode();
	
	// TODO: Add your message handler code here
	
}
