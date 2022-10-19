// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << Info8.cpp >>

#include "stdafx.h"
#include "StegMed.h"
#include "Info8.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// Variables globales
extern CFont m_font1;

/////////////////////////////////////////////////////////////////////////////
// CInfo8 dialog


CInfo8::CInfo8(CWnd* pParent /*=NULL*/)
	: CDialog(CInfo8::IDD, pParent)
{
	//{{AFX_DATA_INIT(CInfo8)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CInfo8::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CInfo8)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CInfo8, CDialog)
	//{{AFX_MSG_MAP(CInfo8)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CInfo8 message handlers

BOOL CInfo8::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// asociar fuente al texto que la va a usar
	GetDlgItem(IDC_TEXTOI81)->SetFont(&m_font1, TRUE);
	GetDlgItem(IDC_TEXTOI82)->SetFont(&m_font1, TRUE);
	
	// configurar los botones
	VERIFY(m_aceptar.AutoLoad(IDOK, this));
	
	return TRUE;
}

// Elimina tecla ESC 
void CInfo8::OnCancel() 
{
//	CDialog::OnCancel();
}
