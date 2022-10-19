// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << Dialogo4A1.cpp >>

#include "stdafx.h"
#include "StegMed.h"
#include "Dialogo4A1.h"
#include "Dialogo5A.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// Variables globales
extern CFont m_font1;

/////////////////////////////////////////////////////////////////////////////
// CDialogo4A1 dialog


CDialogo4A1::CDialogo4A1(CWnd* pParent /*=NULL*/)
	: CDialog(CDialogo4A1::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDialogo4A1)
	m_Altura = _T("");
	m_Apellido = _T("");
	m_Domicilio = _T("");
	m_Edad = _T("");
	m_Mutual = _T("");
	m_NacAnio = _T("");
	m_NacDia = _T("");
	m_NacMes = _T("");
	m_Nombre = _T("");
	m_NroSocio = _T("");
	m_Obs = _T("");
	m_Peso = _T("");
	m_NroDoc = _T("");
	m_Telefono = _T("");
	//}}AFX_DATA_INIT
}


void CDialogo4A1::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDialogo4A1)
	DDX_Text(pDX, IDC_ALTURA, m_Altura);
	DDX_Text(pDX, IDC_APELLIDO, m_Apellido);
	DDX_Text(pDX, IDC_DIRECC, m_Domicilio);
	DDX_Text(pDX, IDC_EDAD, m_Edad);
	DDX_CBString(pDX, IDC_MUTUAL, m_Mutual);
	DDX_CBString(pDX, IDC_NACANIO, m_NacAnio);
	DDX_CBString(pDX, IDC_NACDIA, m_NacDia);
	DDX_CBString(pDX, IDC_NACMES, m_NacMes);
	DDX_Text(pDX, IDC_NOMBRE, m_Nombre);
	DDX_Text(pDX, IDC_NROSOCIO, m_NroSocio);
	DDX_Text(pDX, IDC_OBS1, m_Obs);
	DDV_MaxChars(pDX, m_Obs, 1000000);
	DDX_Text(pDX, IDC_PESO, m_Peso);
	DDX_Text(pDX, IDC_NRODOC, m_NroDoc);
	DDX_Text(pDX, IDC_TELEFONO, m_Telefono);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDialogo4A1, CDialog)
	//{{AFX_MSG_MAP(CDialogo4A1)
	ON_BN_CLICKED(IDC_ATRAS4A1, OnAtras4a1)
	ON_BN_CLICKED(IDC_SEGUIR4A1, OnSeguir4a1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialogo4A1 message handlers

BOOL CDialogo4A1::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// asociar la fuente al texto que la va a usar
	GetDlgItem(IDC_TEXTO4A1)->SetFont(&m_font1, TRUE);
	
	// configurar los botones  
	VERIFY(m_seguir.AutoLoad(IDC_SEGUIR4A1, this));
	VERIFY(m_atras.AutoLoad(IDC_ATRAS4A1, this));
	
	return TRUE; 
}

// Abre el di�logo siguiente 
void CDialogo4A1::OnSeguir4a1() 
{
	// organizar y cargar datos en m_Info 
	UpdateData(CTRL2VAR);
	CDialogo5A dlg5A(this);
	dlg5A.m_Info = "INFORMACION DEL PACIENTE\r\n\r\nNombre completo:  " + m_Apellido + ",  "  + m_Nombre + "\r\nMutual:  " + m_Mutual + "   -   Nro Socio:  " + m_NroSocio + "\r\nTel�fono:  " + m_Telefono + "\r\nDomicilio:  " + m_Domicilio + "\r\nNro Doc:  " + m_NroDoc + "\r\nFecha Nac:  " + m_NacDia + "/" + m_NacMes + "/" + m_NacAnio + "   -   Edad: " + m_Edad + " a�os \r\nPeso: " + m_Peso + " kgrs   -   Altura:  " + m_Altura + " mts  \r\nObservaciones:\r\n" + m_Obs ;
	// abrir Dialogo5A 
	dlg5A.DoModal ();
}

// Vuelve al di�logo anterior 
void CDialogo4A1::OnAtras4a1() 
{
	// volver al Dialogo3A
	EndDialog(IDCANCEL);
}

// Elimina tecla ESC 
void CDialogo4A1::OnCancel() 
{
//	CDialog::OnCancel();
}
