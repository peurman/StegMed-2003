// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << Dialogo4A6.cpp >>

#include "stdafx.h"
#include "StegMed.h"
#include "Dialogo4A6.h"
#include "Dialogo5A.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// Variables globales
extern CFont m_font1;

/////////////////////////////////////////////////////////////////////////////
// CDialogo4A6 dialog


CDialogo4A6::CDialogo4A6(CWnd* pParent /*=NULL*/)
	: CDialog(CDialogo4A6::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDialogo4A6)
	m_Informacion = _T("");
	//}}AFX_DATA_INIT
}


void CDialogo4A6::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDialogo4A6)
	DDX_Text(pDX, IDC_INFORMAC, m_Informacion);
	DDV_MaxChars(pDX, m_Informacion, 2000000);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDialogo4A6, CDialog)
	//{{AFX_MSG_MAP(CDialogo4A6)
	ON_BN_CLICKED(IDC_SEGUIR4A6, OnSeguir4a6)
	ON_BN_CLICKED(IDC_ATRAS4A6, OnAtras4a6)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialogo4A6 message handlers

BOOL CDialogo4A6::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// asociar la fuente al texto que la va a usar
	GetDlgItem(IDC_TEXTO4A6)->SetFont(&m_font1, TRUE);
	
	// configurar los botones  
	VERIFY(m_seguir.AutoLoad(IDC_SEGUIR4A6, this));
	VERIFY(m_atras.AutoLoad(IDC_ATRAS4A6, this));
	
	return TRUE; 
}

// Abre el di�logo siguiente 
void CDialogo4A6::OnSeguir4a6() 
{
	// organizar y cargar datos en m_Info
	UpdateData(CTRL2VAR);
	CDialogo5A dlg5A(this);
	dlg5A.m_Info = "INFORMACION:\r\n\r\n" + m_Informacion;
	// abrir Dialogo5A 
	dlg5A.DoModal ();	
}

// Vuelve al di�logo anterior 
void CDialogo4A6::OnAtras4a6() 
{
	// volver al Dialogo3A
	EndDialog(IDCANCEL);	
}

// Elimina tecla ESC 
void CDialogo4A6::OnCancel() 
{
//	CDialog::OnCancel();
}
