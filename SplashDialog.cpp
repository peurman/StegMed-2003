// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << SplashDialog.cpp >> 

#include "stdafx.h"
#include "StegMed.h"
#include "SplashDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSplashDialog dialog


CSplashDialog::CSplashDialog(CWnd* pParent /*=NULL*/)
	: CDialog(CSplashDialog::IDD, pParent)
{
	//{{AFX_DATA_INIT(CSplashDialog)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CSplashDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSplashDialog)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CSplashDialog, CDialog)
	//{{AFX_MSG_MAP(CSplashDialog)
	ON_WM_TIMER()
	ON_WM_CTLCOLOR()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSplashDialog message handlers

BOOL CSplashDialog::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// configurar timer
	SetTimer(1000, 1000, 0);

	// cambiar el color de fondo del Splash
	m_brush.CreateSolidBrush(RGB(255, 255, 255));  // color blanco
		
	return TRUE; 
}

HBRUSH CSplashDialog::OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor) 
{
	HBRUSH hbr = CDialog::OnCtlColor(pDC, pWnd, nCtlColor);
	
	int ctrlID;

	if(nCtlColor==CTLCOLOR_STATIC ) {
		ctrlID=pWnd->GetDlgCtrlID();
		if(ctrlID==IDC_STATIC ) { 
			pDC->SetTextColor(0x0000EF);
			pDC->SetBkColor(0xFFFF00);
		}
	}

	return m_brush;
}

// Se ejecuta en cada per�odo del timer
void CSplashDialog::OnTimer(UINT nIDEvent) 
{
	// cerrar di�logo
	EndDialog(3);
	CDialog::OnTimer(nIDEvent);
}
