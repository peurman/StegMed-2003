// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << Info6.cpp >>

#include "stdafx.h"
#include "StegMed.h"
#include "Info6.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// Variables globales
extern CFont m_font1;

/////////////////////////////////////////////////////////////////////////////
// CInfo6 dialog


CInfo6::CInfo6(CWnd* pParent /*=NULL*/)
	: CDialog(CInfo6::IDD, pParent)
{
	//{{AFX_DATA_INIT(CInfo6)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CInfo6::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CInfo6)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CInfo6, CDialog)
	//{{AFX_MSG_MAP(CInfo6)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CInfo6 message handlers

BOOL CInfo6::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// asociar fuente al texto que la va a usar
	GetDlgItem(IDC_TEXTOI61)->SetFont(&m_font1, TRUE);
	GetDlgItem(IDC_TEXTOI62)->SetFont(&m_font1, TRUE);
	
	// configurar los botones
	VERIFY(m_aceptar.AutoLoad(IDOK, this));
	
	return TRUE;
}

// Elimina tecla ESC 
void CInfo6::OnCancel() 
{
//	CDialog::OnCancel();
}
