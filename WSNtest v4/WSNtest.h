// WSNtest.h : main header file for the WSNTEST application
//

#if !defined(AFX_WSNTEST_H__5D15AE6A_11F7_44C2_B40A_19F5D9ADA55F__INCLUDED_)
#define AFX_WSNTEST_H__5D15AE6A_11F7_44C2_B40A_19F5D9ADA55F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CWSNtestApp:
// See WSNtest.cpp for the implementation of this class
//

class CWSNtestApp : public CWinApp
{
public:
	CWSNtestApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CWSNtestApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CWSNtestApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_WSNTEST_H__5D15AE6A_11F7_44C2_B40A_19F5D9ADA55F__INCLUDED_)
