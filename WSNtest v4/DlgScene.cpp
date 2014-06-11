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
//DEL 	MessageBox("��ܰ��ʾ�������������ϣ���֤����˯��");
//DEL }

//DEL void CDlgScene::OnBtnFir() 
//DEL {
//DEL 	// TODO: Add your control notification handler code here
//DEL 	MessageBox("��ܰ��ʾ�������������");
//DEL }

void CDlgScene::OnBtnLit() 
{
	// TODO: Add your control notification handler code here
	if (!ampm)
	{
		MessageBox("�����ǰ��죬���ճ���");
	} 
	else
	{
		MessageBox("������ҹ�����ղ���");
	}
	
}

void CDlgScene::OnBtnFoot() 
{
	// TODO: Add your control notification handler code here
	if (!foot)
	{
		MessageBox("��������Ϣ");
	} 
	else
	{
		MessageBox("�������ж�");
	}
	
}
