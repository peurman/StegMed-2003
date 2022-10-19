// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << Info3.cpp >>

#include "stdafx.h"
#include "StegMed.h"
#include "Info3.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// Variables globales
extern CFont m_font1;
extern CFont m_font3;

/////////////////////////////////////////////////////////////////////////////
// CInfo3 dialog


CInfo3::CInfo3(CWnd* pParent /*=NULL*/)
	: CDialog(CInfo3::IDD, pParent)
{
	//{{AFX_DATA_INIT(CInfo3)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CInfo3::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CInfo3)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CInfo3, CDialog)
	//{{AFX_MSG_MAP(CInfo3)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CInfo3 message handlers

BOOL CInfo3::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// asociar fuente al texto que la va a usar
	GetDlgItem(IDC_TEXTOI31)->SetFont(&m_font1, TRUE);
	GetDlgItem(IDC_TEXTOI32)->SetFont(&m_font1, TRUE);
	GetDlgItem(IDC_TEXTOI33)->SetFont(&m_font1, TRUE);	
	
	// configurar botones 
	VERIFY(m_aceptar.AutoLoad(IDOK, this));
	
	return TRUE;  
}

// Elimina tecla ESC 
void CInfo3::OnCancel() 
{
//	CDialog::OnCancel();
}
