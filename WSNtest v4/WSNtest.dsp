# Microsoft Developer Studio Project File - Name="WSNtest" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=WSNtest - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "WSNtest.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "WSNtest.mak" CFG="WSNtest - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "WSNtest - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "WSNtest - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "WSNtest - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 /nologo /subsystem:windows /machine:I386

!ELSEIF  "$(CFG)" == "WSNtest - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /GZ /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /FD /GZ /c
# SUBTRACT CPP /YX /Yc /Yu
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x804 /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 SkinPPWTL.lib /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "WSNtest - Win32 Release"
# Name "WSNtest - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\axes1.cpp
# End Source File
# Begin Source File

SOURCE=.\axis1.cpp
# End Source File
# Begin Source File

SOURCE=.\DlgData.cpp
# End Source File
# Begin Source File

SOURCE=.\DlgHello.cpp
# End Source File
# Begin Source File

SOURCE=.\DlgPort.cpp
# End Source File
# Begin Source File

SOURCE=.\DlgScene.cpp
# End Source File
# Begin Source File

SOURCE=.\mscomm.cpp
# End Source File
# Begin Source File

SOURCE=.\pen.cpp
# End Source File
# Begin Source File

SOURCE=.\scroll1.cpp
# End Source File
# Begin Source File

SOURCE=.\series1.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# Begin Source File

SOURCE=.\tchart1.cpp
# End Source File
# Begin Source File

SOURCE=.\WSNtest.cpp
# End Source File
# Begin Source File

SOURCE=.\WSNtest.rc
# End Source File
# Begin Source File

SOURCE=.\WSNtestDlg.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\axes1.h
# End Source File
# Begin Source File

SOURCE=.\axis1.h
# End Source File
# Begin Source File

SOURCE=.\DlgData.h
# End Source File
# Begin Source File

SOURCE=.\DlgHello.h
# End Source File
# Begin Source File

SOURCE=.\DlgPort.h
# End Source File
# Begin Source File

SOURCE=.\DlgScene.h
# End Source File
# Begin Source File

SOURCE=.\mscomm.h
# End Source File
# Begin Source File

SOURCE=.\pen.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\scroll1.h
# End Source File
# Begin Source File

SOURCE=.\series1.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# Begin Source File

SOURCE=.\tchart1.h
# End Source File
# Begin Source File

SOURCE=.\WSNtest.h
# End Source File
# Begin Source File

SOURCE=.\WSNtestDlg.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\res\25_110428175231_1.bmp
# End Source File
# Begin Source File

SOURCE=.\res\connect.ico
# End Source File
# Begin Source File

SOURCE=.\res\data.ico
# End Source File
# Begin Source File

SOURCE=.\res\dlg_hello.bmp
# End Source File
# Begin Source File

SOURCE=.\res\END_NOT.ico
# End Source File
# Begin Source File

SOURCE=.\res\END_OK.ico
# End Source File
# Begin Source File

SOURCE=.\res\hello.bmp
# End Source File
# Begin Source File

SOURCE=.\res\home.ico
# End Source File
# Begin Source File

SOURCE=.\res\LY1.ico
# End Source File
# Begin Source File

SOURCE=.\res\LY2.ico
# End Source File
# Begin Source File

SOURCE=.\res\LY_NOT.ico
# End Source File
# Begin Source File

SOURCE=".\res\u=344454903,3932137085&fm=21&gp=0.bmp"
# End Source File
# Begin Source File

SOURCE=.\res\WG_NOT.ico
# End Source File
# Begin Source File

SOURCE=.\res\WG_OK.ico
# End Source File
# Begin Source File

SOURCE=.\res\WSNtest.ico
# End Source File
# Begin Source File

SOURCE=.\res\WSNtest.rc2
# End Source File
# End Group
# Begin Source File

SOURCE=.\ReadMe.txt
# End Source File
# End Target
# End Project
# Section WSNtest : {BDEB0088-66F9-4A55-ABD2-0BF8DEEC1196}
# 	2:21:DefaultSinkHeaderFile:tchart.h
# 	2:16:DefaultSinkClass:CTChart
# End Section
# Section WSNtest : {B6C104A3-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CScroll1
# 	2:10:HeaderFile:scroll1.h
# 	2:8:ImplFile:scroll1.cpp
# End Section
# Section WSNtest : {1AF8EC64-FDF2-4116-8C7F-116A6EBDB87F}
# 	2:5:Class:CSeries
# 	2:10:HeaderFile:series.h
# 	2:8:ImplFile:series.cpp
# End Section
# Section WSNtest : {74373B5D-79BE-472A-B19C-1784E5684E5A}
# 	2:5:Class:CScroll
# 	2:10:HeaderFile:scroll.h
# 	2:8:ImplFile:scroll.cpp
# End Section
# Section WSNtest : {B6C10491-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CAxes1
# 	2:10:HeaderFile:axes1.h
# 	2:8:ImplFile:axes1.cpp
# End Section
# Section WSNtest : {B6C104C6-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CAxis1
# 	2:10:HeaderFile:axis1.h
# 	2:8:ImplFile:axis1.cpp
# End Section
# Section WSNtest : {B6C10485-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CTChart1
# 	2:10:HeaderFile:tchart1.h
# 	2:8:ImplFile:tchart1.cpp
# End Section
# Section WSNtest : {7CD97E43-6830-46FC-B135-D1958AE4C0AA}
# 	2:5:Class:CAxes
# 	2:10:HeaderFile:axes.h
# 	2:8:ImplFile:axes.cpp
# End Section
# Section WSNtest : {B6C104AC-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CSeries1
# 	2:10:HeaderFile:series1.h
# 	2:8:ImplFile:series1.cpp
# End Section
# Section WSNtest : {B6C10489-FB89-11D4-93C9-006008A7EED4}
# 	2:21:DefaultSinkHeaderFile:tchart1.h
# 	2:16:DefaultSinkClass:CTChart1
# End Section
# Section WSNtest : {B6C1048B-FB89-11D4-93C9-006008A7EED4}
# 	2:5:Class:CPen1
# 	2:10:HeaderFile:pen.h
# 	2:8:ImplFile:pen.cpp
# End Section
# Section WSNtest : {648A5600-2C6E-101B-82B6-000000000014}
# 	2:21:DefaultSinkHeaderFile:mscomm.h
# 	2:16:DefaultSinkClass:CMSComm
# End Section
# Section WSNtest : {6DCAF81B-D217-42CF-988D-9FF60BC17092}
# 	2:5:Class:CAxis
# 	2:10:HeaderFile:axis.h
# 	2:8:ImplFile:axis.cpp
# End Section
# Section WSNtest : {E6E17E90-DF38-11CF-8E74-00A0C90F26F8}
# 	2:5:Class:CMSComm
# 	2:10:HeaderFile:mscomm.h
# 	2:8:ImplFile:mscomm.cpp
# End Section
# Section WSNtest : {C398AD7D-B57F-4E47-B183-B29AE925EE77}
# 	2:5:Class:CTChart
# 	2:10:HeaderFile:tchart.h
# 	2:8:ImplFile:tchart.cpp
# End Section
