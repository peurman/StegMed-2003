// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << Dialogo4A4.cpp >>

#include "stdafx.h"
#include "StegMed.h"
#include "Dialogo4A4.h"
#include "Dialogo5A.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// Variables globales
extern CFont m_font1;

/////////////////////////////////////////////////////////////////////////////
// CDialogo4A4 dialog


CDialogo4A4::CDialogo4A4(CWnd* pParent /*=NULL*/)
	: CDialog(CDialogo4A4::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDialogo4A4)
	m_Conclusion = _T("");
	m_Doctor = _T("Dr(a).");
	m_Estudio = _T("");
	m_Fecha = _T("");
	m_Informe = _T("");
	m_Nombre = _T("");
	m_Region = _T("");
	//}}AFX_DATA_INIT
}


void CDialogo4A4::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDialogo4A4)
	DDX_Text(pDX, IDC_CONCLUSION, m_Conclusion);
	DDV_MaxChars(pDX, m_Conclusion, 50);
	DDX_Text(pDX, IDC_DOCTOR, m_Doctor);
	DDV_MaxChars(pDX, m_Doctor, 30);
	DDX_Text(pDX, IDC_ESTUDIO, m_Estudio);
	DDX_Text(pDX, IDC_FECHA, m_Fecha);
	DDX_Text(pDX, IDC_INFORME, m_Informe);
	DDV_MaxChars(pDX, m_Informe, 1000000);
	DDX_Text(pDX, IDC_NOMBRE, m_Nombre);
	DDX_Text(pDX, IDC_REGION, m_Region);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDialogo4A4, CDialog)
	//{{AFX_MSG_MAP(CDialogo4A4)
	ON_BN_CLICKED(IDC_SEGUIR4A4, OnSeguir4a4)
	ON_BN_CLICKED(IDC_ATRAS4A4, OnAtras4a4)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialogo4A4 message handlers

BOOL CDialogo4A4::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// asociar la fuente al texto que la va a usar
	GetDlgItem(IDC_TEXTO4A4)->SetFont(&m_font1, TRUE);
	
	// configurar los botones  
	VERIFY(m_seguir.AutoLoad(IDC_SEGUIR4A4, this));
	VERIFY(m_atras.AutoLoad(IDC_ATRAS4A4, this));
	
	return TRUE; 
}

// Abre el di�logo siguiente 
void CDialogo4A4::OnSeguir4a4() 
{
	// organizar y cargar datos en m_Info 
	UpdateData(CTRL2VAR);
	CDialogo5A dlg5A(this);
	dlg5A.m_Info = "ECOGRAFIA\r\n\r\nNombre completo:  " + m_Nombre + "        -        Fecha:  " + m_Fecha + "\r\n\r\nEstudio:  " + m_Estudio + "\r\n\r\nRegi�n:  " + m_Region + "\r\n\r\nInforme:\r\n     " + m_Informe + "\r\n\r\nConclusi�n:\r\n     " + m_Conclusion + "\r\n\r\nDoctor:\r\n   " + m_Doctor ;
	// abrir Dialogo5A 
	dlg5A.DoModal ();
}

// Vuelve al di�logo anterior 
void CDialogo4A4::OnAtras4a4() 
{
	// volver al Dialogo3A
	EndDialog(IDCANCEL);		
}

// Elimina tecla ESC 
void CDialogo4A4::OnCancel() 
{
//	CDialog::OnCancel();
}
