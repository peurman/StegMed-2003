// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << Info5.cpp >>

#include "stdafx.h"
#include "StegMed.h"
#include "Info5.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// Variables globales
extern CFont m_font1;

/////////////////////////////////////////////////////////////////////////////
// CInfo5 dialog


CInfo5::CInfo5(CWnd* pParent /*=NULL*/)
	: CDialog(CInfo5::IDD, pParent)
{
	//{{AFX_DATA_INIT(CInfo5)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CInfo5::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CInfo5)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CInfo5, CDialog)
	//{{AFX_MSG_MAP(CInfo5)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CInfo5 message handlers

BOOL CInfo5::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// asociar fuente al texto que la va a usar
	GetDlgItem(IDC_TEXTOI51)->SetFont(&m_font1, TRUE);
	GetDlgItem(IDC_TEXTOI52)->SetFont(&m_font1, TRUE);
	
	// configurar los botones
	VERIFY(m_aceptar.AutoLoad(IDOK, this));
	
	return TRUE;
}

// Elimina tecla ESC 
void CInfo5::OnCancel() 
{
//	CDialog::OnCancel();
}
