// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << Info14.cpp >>

#include "stdafx.h"
#include "StegMed.h"
#include "Info14.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// Variables globales
extern CFont m_font1;

/////////////////////////////////////////////////////////////////////////////
// CInfo14 dialog


CInfo14::CInfo14(CWnd* pParent /*=NULL*/)
	: CDialog(CInfo14::IDD, pParent)
{
	//{{AFX_DATA_INIT(CInfo14)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CInfo14::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CInfo14)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CInfo14, CDialog)
	//{{AFX_MSG_MAP(CInfo14)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CInfo14 message handlers

BOOL CInfo14::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// asociar fuente al texto que la va a usar
	GetDlgItem(IDC_TEXTOI141)->SetFont(&m_font1, TRUE);
	GetDlgItem(IDC_TEXTOI142)->SetFont(&m_font1, TRUE);
		
	// configurar los botones 
	VERIFY(m_aceptar.AutoLoad(IDOK, this));

	return TRUE;  
}

// Elimina tecla ESC 
void CInfo14::OnCancel() 
{
//	CDialog::OnCancel();
}
