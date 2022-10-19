// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << Info13.cpp >>

#include "stdafx.h"
#include "StegMed.h"
#include "Info131.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// Variables globales
extern CFont m_font1;

/////////////////////////////////////////////////////////////////////////////
// CInfo13 dialog


CInfo13::CInfo13(CWnd* pParent /*=NULL*/)
	: CDialog(CInfo13::IDD, pParent)
{
	//{{AFX_DATA_INIT(CInfo13)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CInfo13::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CInfo13)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CInfo13, CDialog)
	//{{AFX_MSG_MAP(CInfo13)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CInfo13 message handlers

BOOL CInfo13::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// asociar fuente al texto que la va a usar
	GetDlgItem(IDC_TEXTOI131)->SetFont(&m_font1, TRUE);
	GetDlgItem(IDC_TEXTOI132)->SetFont(&m_font1, TRUE);
		
	// configurar los botones 
	VERIFY(m_aceptar.AutoLoad(IDOK, this));

	return TRUE;  
}

// Elimina tecla ESC 
void CInfo13::OnCancel() 
{
//	CDialog::OnCancel();
}
