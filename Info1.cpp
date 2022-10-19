// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << Info1.cpp >>

#include "stdafx.h"
#include "StegMed.h"
#include "Info1.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// Variables globales
extern CFont m_font1;

/////////////////////////////////////////////////////////////////////////////
// CInfo1 dialog


CInfo1::CInfo1(CWnd* pParent /*=NULL*/)
	: CDialog(CInfo1::IDD, pParent)
{
	//{{AFX_DATA_INIT(CInfo1)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CInfo1::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CInfo1)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CInfo1, CDialog)
	//{{AFX_MSG_MAP(CInfo1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CInfo1 message handlers

BOOL CInfo1::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// asociar fuente al texto que la va a usar
	GetDlgItem(IDC_TEXTOI11)->SetFont(&m_font1, TRUE);
	GetDlgItem(IDC_TEXTOI12)->SetFont(&m_font1, TRUE);
		
	// configurar los botones 
	VERIFY(m_aceptar.AutoLoad(IDOK, this));

	return TRUE;  
}

void CInfo1::OnOK()
{
	EndDialog(IDCANCEL);
}

// Elimina tecla ESC 
void CInfo1::OnCancel() 
{
//	CDialog::OnCancel();
}
