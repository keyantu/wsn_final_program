; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CDlgScene
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "WSNtest.h"

ClassCount=7
Class1=CWSNtestApp
Class2=CWSNtestDlg
Class3=CAboutDlg

ResourceCount=7
Resource1=IDD_DLG_DATA
Resource2=IDR_MAINFRAME
Resource3=IDD_DLG_PORT
Resource4=IDD_ABOUTBOX
Resource5=IDD_DLG_1HELLO
Resource6=IDD_WSNTEST_DIALOG
Class4=CDlgHello
Class5=CDlgData
Class6=CDlgPort
Class7=CDlgScene
Resource7=IDD_DLG_SCENE

[CLS:CWSNtestApp]
Type=0
HeaderFile=WSNtest.h
ImplementationFile=WSNtest.cpp
Filter=N

[CLS:CWSNtestDlg]
Type=0
HeaderFile=WSNtestDlg.h
ImplementationFile=WSNtestDlg.cpp
Filter=D
LastObject=IDC_EDIT1
BaseClass=CDialog
VirtualFilter=dWC

[CLS:CAboutDlg]
Type=0
HeaderFile=WSNtestDlg.h
ImplementationFile=WSNtestDlg.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[DLG:IDD_WSNTEST_DIALOG]
Type=1
Class=CWSNtestDlg
ControlCount=18
Control1=IDC_STATIC,button,1342177287
Control2=IDC_MSCOMM1,{648A5600-2C6E-101B-82B6-000000000014},1342242816
Control3=IDC_TAB1,SysTabControl32,1342177280
Control4=IDC_STATIC,button,1342177287
Control5=IDC_STATIC,button,1342177287
Control6=IDC_COMB_PORT,combobox,1344340226
Control7=IDC_COMBO_BAUD,combobox,1344340226
Control8=IDC_STATIC,static,1342308352
Control9=IDC_STATIC,static,1342308352
Control10=IDC_EDIT_SEND,edit,1350631552
Control11=IDC_BTN_SEND,button,1342242816
Control12=IDC_STATIC,button,1342177287
Control13=IDC_STATIC,static,1342308352
Control14=IDC_EDIT1,edit,1350631552
Control15=IDC_STATIC,static,1342308352
Control16=IDC_EDIT2,edit,1350631552
Control17=IDC_STATIC,static,1342308352
Control18=IDC_EDIT3,edit,1350631552

[DLG:IDD_DLG_DATA]
Type=1
Class=CDlgData
ControlCount=3
Control1=IDC_TCHART1,{B6C10489-FB89-11D4-93C9-006008A7EED4},1342242816
Control2=IDC_STATIC,button,1342177287
Control3=IDC_STATIC,button,1342177287

[DLG:IDD_DLG_PORT]
Type=1
Class=CDlgPort
ControlCount=13
Control1=IDC_STATIC,button,1342177287
Control2=IDC_STATIC,button,1342177287
Control3=IDC_STATIC,static,1342308352
Control4=IDC_WG,static,1342177283
Control5=IDC_STATIC,static,1342308352
Control6=IDC_LY1,static,1342177283
Control7=IDC_STATIC,static,1342308352
Control8=IDC_LY2,static,1342177283
Control9=IDC_STATIC,static,1342308352
Control10=IDC_END,static,1342177283
Control11=IDC_PWG,static,1342177294
Control12=IDC_PLY1,static,1342177294
Control13=IDC_PLY2,static,1342177294

[DLG:IDD_DLG_SCENE]
Type=1
Class=CDlgScene
ControlCount=3
Control1=IDC_BTN_LIT,button,1342242816
Control2=IDC_BTN_FOOT,button,1342242816
Control3=IDC_STATIC,static,1342177294

[CLS:CDlgHello]
Type=0
HeaderFile=DlgHello.h
ImplementationFile=DlgHello.cpp
BaseClass=CDialog
Filter=D
LastObject=CDlgHello
VirtualFilter=dWC

[CLS:CDlgData]
Type=0
HeaderFile=DlgData.h
ImplementationFile=DlgData.cpp
BaseClass=CDialog
Filter=D
LastObject=CDlgData
VirtualFilter=dWC

[CLS:CDlgPort]
Type=0
HeaderFile=DlgPort.h
ImplementationFile=DlgPort.cpp
BaseClass=CDialog
Filter=D
LastObject=IDC_PLY2
VirtualFilter=dWC

[CLS:CDlgScene]
Type=0
HeaderFile=DlgScene.h
ImplementationFile=DlgScene.cpp
BaseClass=CDialog
Filter=D
LastObject=CDlgScene
VirtualFilter=dWC

[DLG:IDD_DLG_1HELLO]
Type=1
Class=CDlgHello
ControlCount=4
Control1=IDC_STATIC_HELLO,static,1342308865
Control2=IDOK,button,1342242817
Control3=IDCANCEL,button,1342242816
Control4=IDC_STATIC,static,1342177294

