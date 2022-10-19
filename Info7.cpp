// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << Info7.cpp >>

#include "stdafx.h"
#include "StegMed.h"
#include "Info7.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// Variables globales
extern CFont m_font1;

/////////////////////////////////////////////////////////////////////////////
// CInfo7 dialog


CInfo7::CInfo7(CWnd* pParent /*=NULL*/)
	: CDialog(CInfo7::IDD, pParent)
{
	//{{AFX_DATA_INIT(CInfo7)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CInfo7::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CInfo7)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CInfo7, CDialog)
	//{{AFX_MSG_MAP(CInfo7)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CInfo7 message handlers

BOOL CInfo7::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// asociar fuente al texto que la va a usar
	GetDlgItem(IDC_TEXTOI71)->SetFont(&m_font1, TRUE);
	GetDlgItem(IDC_TEXTOI72)->SetFont(&m_font1, TRUE);
	
	// configurar los botones
	VERIFY(m_aceptar.AutoLoad(IDOK, this));
	
	return TRUE;
}

// Elimina tecla ESC 
void CInfo7::OnCancel() 
{
//	CDialog::OnCancel();
}
