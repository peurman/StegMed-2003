// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << Info4.cpp >>

#include "stdafx.h"
#include "StegMed.h"
#include "Info4.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// Variables globales
extern CFont m_font1;

/////////////////////////////////////////////////////////////////////////////
// CInfo4 dialog


CInfo4::CInfo4(CWnd* pParent /*=NULL*/)
	: CDialog(CInfo4::IDD, pParent)
{
	//{{AFX_DATA_INIT(CInfo4)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CInfo4::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CInfo4)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CInfo4, CDialog)
	//{{AFX_MSG_MAP(CInfo4)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CInfo4 message handlers

BOOL CInfo4::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// asociar fuente al texto que la va a usar
	GetDlgItem(IDC_TEXTOI41)->SetFont(&m_font1, TRUE);
	GetDlgItem(IDC_TEXTOI42)->SetFont(&m_font1, TRUE);
	GetDlgItem(IDC_TEXTOI43)->SetFont(&m_font1, TRUE);	
	
	// configurar los botones
	VERIFY(m_aceptar.AutoLoad(IDOK, this));
	
	return TRUE; 
}

// Elimina tecla ESC 
void CInfo4::OnCancel() 
{
//	CDialog::OnCancel();
}
