// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << Dialogo5B.cpp >>

#include "stdafx.h"
#include "StegMed.h"
#include "StegMedDlg.h"
#include "Dialogo5B.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// Variables globales
extern CString m_name;
extern CString m_passphrase;
extern CFont m_font1;
extern CFont m_font2;

/////////////////////////////////////////////////////////////////////////////
// CDialogo5B dialog


CDialogo5B::CDialogo5B(CWnd* pParent /*=NULL*/)
	: CDialog(CDialogo5B::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDialogo5B)
	m_info = _T("");
	m_plainfilepath = m_name ;
	//}}AFX_DATA_INIT
}


void CDialogo5B::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDialogo5B)
	DDX_Text(pDX, IDC_INFORESCATADA, m_info);
	DDX_Text(pDX, IDC_PATHNAME5B, m_plainfilepath);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDialogo5B, CDialog)
	//{{AFX_MSG_MAP(CDialogo5B)
	ON_BN_CLICKED(IDC_TERMINARB, OnTerminarb)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialogo5B message handlers

BOOL CDialogo5B::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// asociar fuente al texto que la va a usar
	GetDlgItem(IDC_TEXTO5B1)->SetFont(&m_font2, TRUE);
	GetDlgItem(IDC_TEXTO5B2)->SetFont(&m_font2, TRUE);
	GetDlgItem(IDC_TEXTO5B3)->SetFont(&m_font2, TRUE);
	GetDlgItem(IDC_PATHNAME5B)->SetFont(&m_font2, TRUE);
	GetDlgItem(IDC_TEXTO5B4)->SetFont(&m_font1, TRUE);
	
	// configurar los botones  
	VERIFY(m_terminar.AutoLoad(IDC_TERMINARB, this));
	
	return TRUE;
}

// Cierra la sesi�n de StegMed
void CDialogo5B::OnTerminarb() 
{
	// borro el passphrase guardado
	m_passphrase = "";

	PostQuitMessage(0) ;
}

// Elimina tecla ESC 
void CDialogo5B::OnCancel() 
{
//	CDialog::OnCancel();
}
