// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << StegMed.cpp >> 


#include "stdafx.h"
#include "StegMed.h"
#include "StegMedDlg.h"
#include "SplashDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CStegMedApp

BEGIN_MESSAGE_MAP(CStegMedApp, CWinApp)
	//{{AFX_MSG_MAP(CStegMedApp)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CStegMedApp construction

CStegMedApp::CStegMedApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CStegMedApp object

CStegMedApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CStegMedApp initialization

BOOL CStegMedApp::InitInstance()
{
	AfxEnableControlContainer();

#ifdef _AFXDLL
	Enable3dControls();		
#else
	Enable3dControlsStatic();
#endif
	
	// CSplashDialog es la clase que contiene el SPLASH
	CSplashDialog dlg1;
	dlg1.DoModal();

	// establecer color de fondo de todos los di�logos
	SetDialogBkColor(RGB(100, 190, 170), RGB(0, 0, 0));

	CStegMedDlg dlg;
	m_pMainWnd = &dlg;
	int nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
	}
	else if (nResponse == IDCANCEL)
	{
	}

	return FALSE;
}
