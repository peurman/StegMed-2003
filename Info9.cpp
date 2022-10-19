// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << Info9.cpp >>

#include "stdafx.h"
#include "StegMed.h"
#include "Info9.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// Variables globales
extern CFont m_font1;

/////////////////////////////////////////////////////////////////////////////
// CInfo9 dialog


CInfo9::CInfo9(CWnd* pParent /*=NULL*/)
	: CDialog(CInfo9::IDD, pParent)
{
	//{{AFX_DATA_INIT(CInfo9)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CInfo9::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CInfo9)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CInfo9, CDialog)
	//{{AFX_MSG_MAP(CInfo9)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CInfo9 message handlers

BOOL CInfo9::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// asociar fuente al texto que la va a usar
	GetDlgItem(IDC_TEXTOI91)->SetFont(&m_font1, TRUE);
	GetDlgItem(IDC_TEXTOI92)->SetFont(&m_font1, TRUE);
	
	// configurar los botones
	VERIFY(m_aceptar.AutoLoad(IDOK, this));
	
	return TRUE;
}

// Elimina tecla ESC 
void CInfo9::OnCancel() 
{
//	CDialog::OnCancel();
}
