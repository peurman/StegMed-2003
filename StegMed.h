// StegMed.h : main header file for the STEGMED application
//

#if !defined(AFX_STEGMED_H__0572830D_49F0_4DAF_ABCD_0FEEB54526FE__INCLUDED_)
#define AFX_STEGMED_H__0572830D_49F0_4DAF_ABCD_0FEEB54526FE__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

#define VAR2CTRL FALSE
#define CTRL2VAR TRUE

void SetDialogBkColor( COLORREF clrCtlBk = RGB(192, 192, 192), COLORREF clrCtlText = RGB(0, 0, 0) );

/////////////////////////////////////////////////////////////////////////////
// CStegMedApp:
// See StegMed.cpp for the implementation of this class
//

class CStegMedApp : public CWinApp
{
public:
	CStegMedApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CStegMedApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CStegMedApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STEGMED_H__0572830D_49F0_4DAF_ABCD_0FEEB54526FE__INCLUDED_)
