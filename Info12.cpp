// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << Info12.cpp >>

#include "stdafx.h"
#include "StegMed.h"
#include "Info12.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// Variables globales
extern CFont m_font1;

/////////////////////////////////////////////////////////////////////////////
// CInfo12 dialog


CInfo12::CInfo12(CWnd* pParent /*=NULL*/)
	: CDialog(CInfo12::IDD, pParent)
{
	//{{AFX_DATA_INIT(CInfo12)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CInfo12::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CInfo12)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CInfo12, CDialog)
	//{{AFX_MSG_MAP(CInfo12)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CInfo12 message handlers

BOOL CInfo12::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// asociar fuente al texto que la va a usar
	GetDlgItem(IDC_TEXTOI121)->SetFont(&m_font1, TRUE);
	GetDlgItem(IDC_TEXTOI122)->SetFont(&m_font1, TRUE);
		
	// configurar los botones 
	VERIFY(m_aceptar.AutoLoad(IDOK, this));

	return TRUE;  
}

// Elimina tecla ESC 
void CInfo12::OnCancel() 
{
//	CDialog::OnCancel();
}
