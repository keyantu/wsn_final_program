// WSNtestDlg.cpp : implementation file
//

#include "stdafx.h"
#include "WSNtest.h"
#include "WSNtestDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CWSNtestDlg dialog

CWSNtestDlg::CWSNtestDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CWSNtestDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CWSNtestDlg)
	m_strSendData = _T("");
	m_temp = 0;
	m_humid = 0;
	m_light = 0;
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CWSNtestDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CWSNtestDlg)
	DDX_Control(pDX, IDC_TAB1, m_TabCtrl);
	DDX_Control(pDX, IDC_MSCOMM1, m_cComm);
	DDX_Text(pDX, IDC_EDIT_SEND, m_strSendData);
	DDX_Text(pDX, IDC_EDIT1, m_temp);
	DDX_Text(pDX, IDC_EDIT2, m_humid);
	DDX_Text(pDX, IDC_EDIT3, m_light);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CWSNtestDlg, CDialog)
	//{{AFX_MSG_MAP(CWSNtestDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_CBN_SELCHANGE(IDC_COMB_PORT, OnSelPort)
	ON_CBN_SELCHANGE(IDC_COMBO_BAUD, OnSelBaud)
	ON_BN_CLICKED(IDC_BTN_SEND, OnBtnSend)
	ON_NOTIFY(TCN_SELCHANGE, IDC_TAB1, OnSelchangeTab1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CWSNtestDlg message handlers

BOOL CWSNtestDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	CDlgHello hello;
	hello.DoModal();
	
	CString comport;
    for(unsigned char j=0;j<8;j++)
	{
		comport.Format("COM%d",j+1);
		((CComboBox*)GetDlgItem(IDC_COMB_PORT))->InsertString(j,comport);
	}
	/*int baud[] = {9600,9600,38400};
	for (i = 0; i < sizeof(baud)/sizeof(int); i++)
	{
	((CComboBox*)GetDlgItem(IDC_COMBO3))->InsertString(i,baud[i]);
}*/
	int i = 0;
	UINT uIconID[] = {IDI_ICON1,IDI_ICON5};//IDI_ICON2,
	m_ImageList.Create(16,16,ILC_COLOR24,sizeof(uIconID)/sizeof(UINT),10);
	m_ImageList.SetBkColor(RGB(255,255,255));
	for (i = 0; i < sizeof(uIconID)/sizeof(UINT); i++)
	{
		m_ImageList.Add(AfxGetApp()->LoadIcon(uIconID[i]));
	}
	m_TabCtrl.SetImageList(&m_ImageList);
	
	CString strTitle[] = {L"串口显示",L"家居环境"};//,L"数据显示"
	for (i = 0; i < sizeof(strTitle)/sizeof(CString); i ++)
	{
		m_TabCtrl.InsertItem(i,strTitle[i],i);
	}
	
	UINT uDialogID[] = {IDD_DLG_PORT,IDD_DLG_SCENE};//IDD_DLG_DATA,
	
	m_PageArry[0] = &m_page1;
	//m_PageArry[1] = &m_page2;
	m_PageArry[1] = &m_page3;
	
	for (i = 0; i < sizeof(uDialogID)/sizeof(UINT); i ++)
	{
		m_PageArry[i]->Create(uDialogID[i],&m_TabCtrl);
	}
	CRect rc;
	m_TabCtrl.GetClientRect(&rc);
	rc.top += 20;
	rc.bottom -= 8;
	rc.left += 10;
	rc.right -= 10;
	
	for (i = 0; i < PageNum; i++)
	{
		m_PageArry[i]->MoveWindow(&rc);
	}
	m_PageArry[0]->ShowWindow(SW_SHOW);


	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CWSNtestDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CWSNtestDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CWSNtestDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

BEGIN_EVENTSINK_MAP(CWSNtestDlg, CDialog)
    //{{AFX_EVENTSINK_MAP(CWSNtestDlg)
	ON_EVENT(CWSNtestDlg, IDC_MSCOMM1, 1 /* OnComm */, OnMscom, VTS_NONE)
	//}}AFX_EVENTSINK_MAP
END_EVENTSINK_MAP()

void CWSNtestDlg::OnMscom() 
{
	// TODO: Add your control notification handler code here
	VARIANT   variant_inp;  
	COleSafeArray   safearray_inp;  
	LONG   len,k;  
	BYTE   rxdata[2048];   //设置BYTE数组   An   8-bit   integerthat   is   not   signed.  
	CString   strtemp;  
	if(m_cComm.GetCommEvent()==2)   //事件值为2表示接收缓冲区内有字符  
	{                           ////////以下你可以根据自己的通信协议加入处理代码  
		variant_inp=m_cComm.GetInput();   //读缓冲区  
		safearray_inp=variant_inp;   //VARIANT型变量转换为ColeSafeArray型变量  
		len=safearray_inp.GetOneDimSize();   //得到有效数据长度  
		for(k=0;k<len;k++)  
			safearray_inp.GetElement(&k,rxdata+k);//转换为BYTE型数组 
		m_page1.state1 = true;
		m_page1.state2 = true;
		m_page1.icon_re();

		m_temp = *(rxdata+0);
		m_humid = *(rxdata+1);
		m_light = *(rxdata+2);

		if (m_light<70)
		{
			m_page3.ampm = true;
		} 
		else
		{
			m_page3.ampm = false;
		}

		if (!*(rxdata+4))
		{
			m_page3.foot = true;
		} 
		else
		{
			m_page3.foot = false;
		}

	}  
          UpdateData(FALSE);   //更新编辑框内容  	
}

void CWSNtestDlg::OnSelPort() 
{
	// TODO: Add your control notification handler code here
	int num1=(((CComboBox*)GetDlgItem(IDC_COMB_PORT))->GetCurSel())+1;
	
	if(m_cComm.GetPortOpen())
	{   m_cComm.SetPortOpen(FALSE); }
	
	m_cComm.SetCommPort(num1); 
	m_cComm.SetInBufferSize(1024); //接收缓冲区   
	m_cComm.SetOutBufferSize(1024);//发送缓冲区   
	m_cComm.SetInputLen(0);//设置当前接收区数据长度为0,表示全部读取   
	m_cComm.SetInputMode(1);//以二进制方式读写数据   
	m_cComm.SetRThreshold(1);//接收缓冲区有1个及1个以上字符时，将引发接收数据的OnComm事件   
	m_cComm.SetSettings("38400,n,8,1");//波特率9600无检验位，8个数据位，1个停止位
	
	
	if( !m_cComm.GetPortOpen())
		m_cComm.SetPortOpen(TRUE);//打开串口
	else
		AfxMessageBox("cannot open serial port");
}

void CWSNtestDlg::OnSelBaud() 
{
	// TODO: Add your control notification handler code here
	
}

void CWSNtestDlg::OnBtnSend() 
{
	// TODO: Add your control notification handler code here
	UpdateData(TRUE); //读取编辑框内容
	m_cComm.SetOutput(COleVariant(m_strSendData));//发送数据
	m_cComm.SetOutput(COleVariant("\r\n"));
	m_strSendData.Empty();//发送后清空输入框
	UpdateData(FALSE); //更新编辑框内容 
}

void CWSNtestDlg::OnSelchangeTab1(NMHDR* pNMHDR, LRESULT* pResult) 
{
	// TODO: Add your control notification handler code here
	int iCur = m_TabCtrl.GetCurSel();
	ShowPageX(iCur);
	*pResult = 0;
}
void CWSNtestDlg::ShowPageX(int nPageID)
{
	for (int i = 0; i < PageNum; i++)
	{
		m_PageArry[i]->ShowWindow(SW_HIDE);
	}
	m_PageArry[nPageID]->ShowWindow(SW_SHOW);
}
