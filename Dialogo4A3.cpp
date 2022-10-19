// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << Dialogo4A3.cpp >>

#include "stdafx.h"
#include "StegMed.h"
#include "Dialogo4A3.h"
#include "Dialogo5A.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// Variables globales
extern CFont m_font1;

/////////////////////////////////////////////////////////////////////////////
// CDialogo4A3 dialog


CDialogo4A3::CDialogo4A3(CWnd* pParent /*=NULL*/)
	: CDialog(CDialogo4A3::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDialogo4A3)
	m_Conclusion = _T("");
	m_Descripcion = _T("");
	m_Doctor = _T("Dr(a).");
	m_Edad = _T("");
	m_Fecha = _T("");
	m_Informe = _T("");
	m_Nombre = _T("");
	m_Region = _T("");
	//}}AFX_DATA_INIT
}


void CDialogo4A3::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDialogo4A3)
	DDX_Text(pDX, IDC_CONCLUSION, m_Conclusion);
	DDV_MaxChars(pDX, m_Conclusion, 50);
	DDX_Text(pDX, IDC_DESCRIP, m_Descripcion);
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


BEGIN_MESSAGE_MAP(CDialogo4A3, CDialog)
	//{{AFX_MSG_MAP(CDialogo4A3)
	ON_BN_CLICKED(IDC_ATRAS4A3, OnAtras4a3)
	ON_BN_CLICKED(IDC_SEGUIR4A3, OnSeguir4a3)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialogo4A3 message handlers

BOOL CDialogo4A3::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// asociar la fuente al texto que la va a usar
	GetDlgItem(IDC_TEXTO4A3)->SetFont(&m_font1, TRUE);
	
	// configurar los botones  
	VERIFY(m_seguir.AutoLoad(IDC_SEGUIR4A3, this));
	VERIFY(m_atras.AutoLoad(IDC_ATRAS4A3, this));
	
	return TRUE; 
}

// Abre el di�logo siguiente 
void CDialogo4A3::OnSeguir4a3() 
{
	// organizar y cargar datos en m_Info 
	UpdateData(CTRL2VAR);
	CDialogo5A dlg5A(this);
	dlg5A.m_Info = "TOMOGRAFIA COMPUTADA\r\n\r\nNombre completo:  " + m_Nombre + "        -        Fecha:  " + m_Fecha + "\r\nEdad:  " + m_Edad + " a�os" + "\r\n\r\nRegi�n:  " + m_Region + "\r\n\r\nDescripci�n:\r\n     " + m_Descripcion + "\r\n\r\nInforme:\r\n     " + m_Informe + "\r\n\r\nConclusi�n:\r\n     " + m_Conclusion + "\r\n\r\nDoctor:\r\n   " + m_Doctor ;
	// abrir Dialogo5A 
	dlg5A.DoModal ();
}

// Vuelve al di�logo anterior 
void CDialogo4A3::OnAtras4a3() 
{
	// volver al Dialogo3A
	EndDialog(IDCANCEL);	
}

// Elimina tecla ESC 
void CDialogo4A3::OnCancel() 
{
//	CDialog::OnCancel();
}
