// DlgScene.cpp : implementation file
//

#include "stdafx.h"
#include "WSNtest.h"
#include "DlgScene.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDlgScene dialog


CDlgScene::CDlgScene(CWnd* pParent /*=NULL*/)
	: CDialog(CDlgScene::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDlgScene)
		// NOTE: the ClassWizard will add member initialization here
	ampm = FALSE;
	foot = FALSE;
	//}}AFX_DATA_INIT
}


void CDlgScene::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDlgScene)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDlgScene, CDialog)
	//{{AFX_MSG_MAP(CDlgScene)
	ON_BN_CLICKED(IDC_BTN_LIT, OnBtnLit)
	ON_BN_CLICKED(IDC_BTN_FOOT, OnBtnFoot)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDlgScene message handlers

//DEL void CDlgScene::OnBtnCur() 
//DEL {
//DEL 	// TODO: Add your control notification handler code here
//DEL 	MessageBox("温馨提示：窗帘正在拉上，保证良好睡眠");
//DEL }

//DEL void CDlgScene::OnBtnFir() 
//DEL {
//DEL 	// TODO: Add your control notification handler code here
//DEL 	MessageBox("温馨提示：消防监测正常");
//DEL }

void CDlgScene::OnBtnLit() 
{
	// TODO: Add your control notification handler code here
	if (!ampm)
	{
		MessageBox("现在是白天，光照充足");
	} 
	else
	{
		MessageBox("现在是夜晚，光照不良");
	}
	
}

void CDlgScene::OnBtnFoot() 
{
	// TODO: Add your control notification handler code here
	if (!foot)
	{
		MessageBox("老人在休息");
	} 
	else
	{
		MessageBox("老人在行动");
	}
	
}
