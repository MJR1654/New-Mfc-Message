// Bb.h : main header file for the BB application
//

#if !defined(AFX_BB_H__403F2A24_12D3_4C3D_B8F0_391DC335D2E1__INCLUDED_)
#define AFX_BB_H__403F2A24_12D3_4C3D_B8F0_391DC335D2E1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CBbApp:
// See Bb.cpp for the implementation of this class
//

class CBbApp : public CWinApp
{
public:
	CBbApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBbApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CBbApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BB_H__403F2A24_12D3_4C3D_B8F0_391DC335D2E1__INCLUDED_)
