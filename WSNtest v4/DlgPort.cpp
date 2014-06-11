// DlgPort.cpp : implementation file
//

#include "stdafx.h"
#include "WSNtest.h"
#include "DlgPort.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDlgPort dialog


CDlgPort::CDlgPort(CWnd* pParent /*=NULL*/)
	: CDialog(CDlgPort::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDlgPort)
		// NOTE: the ClassWizard will add member initialization here
	state1 = false;
	state2 = false;
	//}}AFX_DATA_INIT
}


void CDlgPort::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDlgPort)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDlgPort, CDialog)
	//{{AFX_MSG_MAP(CDlgPort)
	ON_WM_TIMER()
	ON_WM_PAINT()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDlgPort message handlers

BOOL CDlgPort::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// TODO: Add extra initialization here
	UINT uIconID[3] = {IDC_PWG,IDC_PLY1,IDC_PLY2};
	CString strTitle[3] = {L"pic/WG_OK.bmp",L"pic/RT.bmp",L"pic/RT.bmp"};
	for (int i=0;i<3;i++)
	{
		CStatic* pWnd=(CStatic*)GetDlgItem(uIconID[i]);//得到Picture Control控件句柄
		pWnd->ModifyStyle(0,SS_BITMAP);//修改它的属性为位图
		pWnd->SetBitmap((HBITMAP)::LoadImage(NULL,_T(strTitle[i]),IMAGE_BITMAP,50,50,LR_CREATEDIBSECTION|LR_DEFAULTSIZE|LR_LOADFROMFILE));
	}
	
	return TRUE;  // return TRUE unless you set the focus to a control
	              // EXCEPTION: OCX Property Pages should return FALSE
}


void CDlgPort::OnTimer(UINT nIDEvent) 
{
	// TODO: Add your message handler code here and/or call default
	
	CDialog::OnTimer(nIDEvent);
}

void CDlgPort::OnPaint() 
{
	CPaintDC dc(this); // device context for painting
	
	// TODO: Add your message handler code here
	
	// Do not call CDialog::OnPaint() for painting messages
}

void CDlgPort::icon_re()
{
	if (state1)
	{
		CStatic* pWnd = (CStatic*)GetDlgItem(IDC_PLY1); // 得到 Picture Control 句柄
		pWnd->ModifyStyle(0, SS_BITMAP); // 修改它的属性为位图
		pWnd->SetBitmap((HBITMAP)::LoadImage(NULL, _T("pic/LY1.bmp"), 
			IMAGE_BITMAP, 
			30, 
			30, 
			LR_CREATEDIBSECTION | LR_DEFAULTSIZE | LR_LOADFROMFILE));	
			  
	} 
	if (state2)
	{
		CStatic* pWnd = (CStatic*)GetDlgItem(IDC_PLY2); // 得到 Picture Control 句柄
		pWnd->ModifyStyle(0, SS_BITMAP); // 修改它的属性为位图
		pWnd->SetBitmap((HBITMAP)::LoadImage(NULL, _T("pic/LY2.bmp"), 
			IMAGE_BITMAP, 
			30, 
			30, 
			LR_CREATEDIBSECTION | LR_DEFAULTSIZE | LR_LOADFROMFILE));	
			
	}
}
