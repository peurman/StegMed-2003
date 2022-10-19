// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << Dialogo4A2.cpp >>

#include "stdafx.h"
#include "StegMed.h"
#include "Dialogo4A2.h"
#include "Dialogo5A.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// Variables globales
extern CFont m_font1;

/////////////////////////////////////////////////////////////////////////////
// CDialogo4A2 dialog


CDialogo4A2::CDialogo4A2(CWnd* pParent /*=NULL*/)
	: CDialog(CDialogo4A2::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDialogo4A2)
	m_Conclusion = _T("");
	m_Doctor = _T("Dr(a).");
	m_Edad = _T("");
	m_Fecha = _T("");
	m_Informe = _T("");
	m_Nombre = _T("");
	m_Region = _T("");
	//}}AFX_DATA_INIT
}


void CDialogo4A2::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDialogo4A2)
	DDX_Text(pDX, IDC_CONCLUSION, m_Conclusion);
	DDV_MaxChars(pDX, m_Conclusion, 50);
	DDX_Text(pDX, IDC_DOCTOR, m_Doctor);
	DDV_MaxChars(pDX, m_Doctor, 30);
	DDX_Text(pDX, IDC_EDAD, m_Edad);
	DDX_Text(pDX, IDC_FECHA, m_Fecha);
	DDX_Text(pDX, IDC_INFORME, m_Informe);
	DDV_MaxChars(pDX, m_Informe, 1000000);
	DDX_Text(pDX, IDC_NOMBRE, m_Nombre);
	DDX_Text(pDX, IDC_REGION, m_Region);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDialogo4A2, CDialog)
	//{{AFX_MSG_MAP(CDialogo4A2)
	ON_BN_CLICKED(IDC_ATRAS4A2, OnAtras4a2)
	ON_BN_CLICKED(IDC_SEGUIR4A2, OnSeguir4a2)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialogo4A2 message handlers

BOOL CDialogo4A2::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// asociar la fuente al texto que la va a usar
	GetDlgItem(IDC_TEXTO4A2)->SetFont(&m_font1, TRUE);
	
	// configurar los botones  
	VERIFY(m_seguir.AutoLoad(IDC_SEGUIR4A2, this));
	VERIFY(m_atras.AutoLoad(IDC_ATRAS4A2, this));
	
	return TRUE; 
}

// Abre el di�logo siguiente 
void CDialogo4A2::OnSeguir4a2() 
{
	// organizar y cargar datos en m_Info 
	UpdateData(CTRL2VAR);
	CDialogo5A dlg5A(this);
	dlg5A.m_Info = "RADIOGRAFIA\r\n\r\nNombre completo:  " + m_Nombre + "        -        Fecha:  " + m_Fecha + "\r\nEdad:  " + m_Edad + " a�os" + "\r\n\r\nRegi�n:  " + m_Region + "\r\n\r\nInforme:\r\n     " + m_Informe + "\r\n\r\nConclusi�n:\r\n     " + m_Conclusion + "\r\n\r\nDoctor:\r\n   " + m_Doctor ;
	// abrir Dialogo5A 
	dlg5A.DoModal ();
}

// Vuelve al di�logo anterior 
void CDialogo4A2::OnAtras4a2() 
{
	// volver al Dialogo3A
	EndDialog(IDCANCEL);	
}

// Elimina tecla ESC 
void CDialogo4A2::OnCancel() 
{
//	CDialog::OnCancel();
}
