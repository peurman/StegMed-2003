// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << Info2.cpp >>

#include "stdafx.h"
#include "StegMed.h"
#include "Info2.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// Variables globales
extern CFont m_font1;

/////////////////////////////////////////////////////////////////////////////
// CInfo2 dialog


CInfo2::CInfo2(CWnd* pParent /*=NULL*/)
	: CDialog(CInfo2::IDD, pParent)
{
	//{{AFX_DATA_INIT(CInfo2)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CInfo2::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CInfo2)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CInfo2, CDialog)
	//{{AFX_MSG_MAP(CInfo2)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CInfo2 message handlers

BOOL CInfo2::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// asociar fuente al texto que la va a usar
	GetDlgItem(IDC_TEXTOI21)->SetFont(&m_font1, TRUE);
	GetDlgItem(IDC_TEXTOI22)->SetFont(&m_font1, TRUE);
		
	// configurar botones 
	VERIFY(m_aceptar.AutoLoad(IDOK, this));
	
	return TRUE; 
}

// Elimina tecla ESC 
void CInfo2::OnCancel() 
{
//	CDialog::OnCancel();
}
