// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << Info10.cpp >>

#include "stdafx.h"
#include "StegMed.h"
#include "Info10.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// Variables globales
extern CFont m_font1;

/////////////////////////////////////////////////////////////////////////////
// CInfo10 dialog


CInfo10::CInfo10(CWnd* pParent /*=NULL*/)
	: CDialog(CInfo10::IDD, pParent)
{
	//{{AFX_DATA_INIT(CInfo10)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CInfo10::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CInfo10)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CInfo10, CDialog)
	//{{AFX_MSG_MAP(CInfo10)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CInfo10 message handlers

BOOL CInfo10::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// asociar fuente al texto que la va a usar
	GetDlgItem(IDC_TEXTOI101)->SetFont(&m_font1, TRUE);
	GetDlgItem(IDC_TEXTOI102)->SetFont(&m_font1, TRUE);
		
	// configurar los botones 
	VERIFY(m_aceptar.AutoLoad(IDOK, this));

	return TRUE;  
}

// Elimina tecla ESC 
void CInfo10::OnCancel() 
{
//	CDialog::OnCancel();
}
