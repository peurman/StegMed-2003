// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << Dialogo8A.cpp >>

#include "stdafx.h"
#include "StegMed.h"
#include "Dialogo8A.h"

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
// CDialogo8A dialog


CDialogo8A::CDialogo8A(CWnd* pParent /*=NULL*/)
	: CDialog(CDialogo8A::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDialogo8A)
	m_stegofilepath = m_name ; // copiar pathfile del stegofile creado
	//}}AFX_DATA_INIT
}


void CDialogo8A::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDialogo8A)
	DDX_Text(pDX, IDC_PATHNAME8A, m_stegofilepath);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDialogo8A, CDialog)
	//{{AFX_MSG_MAP(CDialogo8A)
	ON_BN_CLICKED(IDC_TERMINARA, OnTerminara)
	ON_BN_CLICKED(IDC_MOSTRAR, OnMostrar)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialogo8A message handlers

BOOL CDialogo8A::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// asociar fuente al texto que la va a usar
	GetDlgItem(IDC_TEXTO8A1)->SetFont(&m_font2, TRUE);
	GetDlgItem(IDC_PATHNAME8A)->SetFont(&m_font2, TRUE);
	GetDlgItem(IDC_TEXTO8A4)->SetFont(&m_font1, TRUE);
		
	// configurar botones 
	VERIFY(m_mostrar.AutoLoad(IDC_MOSTRAR, this));
	VERIFY(m_terminar.AutoLoad(IDC_TERMINARA, this));
	
	return TRUE;
}

// Abre en Mspaint el stegofile generado 
void CDialogo8A::OnMostrar() 
{
	CString m_cad1 = "C:\\Archivos de programa\\Accesorios\\Mspaint.exe " ;
	CString m_cad2 = "C:\\Program Files\\Accessories\\Mspaint.exe " ;
	m_name = "\"" + m_name + "\"" ;

	// abrir Mspaint y mostrar stegofile creado
	ShellExecute(0, "open", m_cad1, m_name, 0, SW_SHOW) ; 
	ShellExecute(0, "open", m_cad2, m_name, 0, SW_SHOW) ; 
	
	// borro el passphrase guardado
	m_passphrase = "";

	// cerrar sesi�n de StegMed
	PostQuitMessage(0) ;
}

// Cierra la sesi�n de StegMed 
void CDialogo8A::OnTerminara() 
{
	// borro el passphrase guardado
	m_passphrase = "";

	PostQuitMessage(0) ;
}

// Elimina tecla ESC 
void CDialogo8A::OnCancel() 
{
//	CDialog::OnCancel();
}
