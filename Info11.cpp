// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << Info11.cpp >>

#include "stdafx.h"
#include "StegMed.h"
#include "Info11.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// Variables globales
extern CFont m_font1;

/////////////////////////////////////////////////////////////////////////////
// CInfo11 dialog


CInfo11::CInfo11(CWnd* pParent /*=NULL*/)
	: CDialog(CInfo11::IDD, pParent)
{
	//{{AFX_DATA_INIT(CInfo11)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CInfo11::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CInfo11)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CInfo11, CDialog)
	//{{AFX_MSG_MAP(CInfo11)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CInfo11 message handlers

BOOL CInfo11::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// asociar fuente al texto que la va a usar
	GetDlgItem(IDC_TEXTOI111)->SetFont(&m_font1, TRUE);
	GetDlgItem(IDC_TEXTOI112)->SetFont(&m_font1, TRUE);
		
	// configurar los botones 
	VERIFY(m_aceptar.AutoLoad(IDOK, this));

	return TRUE;  
}

// Elimina tecla ESC 
void CInfo11::OnCancel() 
{
//	CDialog::OnCancel();
}
