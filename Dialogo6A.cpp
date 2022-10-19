// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << Dialogo6A.cpp >>

#include "stdafx.h"
#include "StegMed.h"
#include "Dialogo6A.h"
#include "Dialogo7A.h"
#include "Info2.h"

#include <string.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// Variables globales
CString m_passphrase = "";
extern CFont m_font1;

/////////////////////////////////////////////////////////////////////////////
// CDialogo6A dialog


CDialogo6A::CDialogo6A(CWnd* pParent /*=NULL*/)
	: CDialog(CDialogo6A::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDialogo6A)
	m_passphrase1a = _T("");
	m_passphrase2a = _T("");
	//}}AFX_DATA_INIT
}


void CDialogo6A::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDialogo6A)
	DDX_Text(pDX, IDC_EDITPASSA1, m_passphrase1a);
	DDV_MaxChars(pDX, m_passphrase1a, 512);
	DDX_Text(pDX, IDC_EDITPASSA2, m_passphrase2a);
	DDV_MaxChars(pDX, m_passphrase2a, 512);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDialogo6A, CDialog)
	//{{AFX_MSG_MAP(CDialogo6A)
	ON_BN_CLICKED(IDC_ATRAS6A, OnAtras6a)
	ON_BN_CLICKED(IDC_SEGUIR6A, OnSeguir6a)
	ON_EN_UPDATE(IDC_EDITPASSA1, OnUpdateEditpassa1)
	ON_EN_UPDATE(IDC_EDITPASSA2, OnUpdateEditpassa2)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialogo6A message handlers

BOOL CDialogo6A::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// asociar fuente al texto que la va a usar
	GetDlgItem(IDC_TEXTO6A)->SetFont(&m_font1, TRUE);
	
	// configurar botones  
	VERIFY(m_seguir.AutoLoad(IDC_SEGUIR6A, this));
	VERIFY(m_atras.AutoLoad(IDC_ATRAS6A, this));
	
	return TRUE;
}

// Asocia el valor ingresado a la variable 
void CDialogo6A::OnUpdateEditpassa1() 
{
	UpdateData(CTRL2VAR);
}

// Habilita el bot�n "Siguiente"
void CDialogo6A::OnUpdateEditpassa2() 
{
	UpdateData(CTRL2VAR);
	// habilitar bot�n "Siguiente"
	CWnd* pb = GetDlgItem(IDC_SEGUIR6A);
	pb->EnableWindow(TRUE);
}

// Abre el di�logo siguiente 
void CDialogo6A::OnSeguir6a() 
{
	// comparar passphrases
	if (strcmp(m_passphrase1a,m_passphrase2a)!=0) {
		// no concuerdan: mostrar Info2
		MessageBeep(MB_ICONHAND);
		CInfo2 dlg(this);
		dlg.DoModal();
		m_passphrase1a = m_passphrase2a = "";
		UpdateData(VAR2CTRL);
		// deshabilitar bot�n "Siguiente"
		CWnd* pb = GetDlgItem(IDC_SEGUIR6A);
		pb->EnableWindow(FALSE);
	}
	else {
		m_passphrase = m_passphrase1a;
		m_passphrase1a = m_passphrase2a = "";
		UpdateData(VAR2CTRL);
		// abrir Dialogo7A
		CDialogo7A dlg7A(this);
		dlg7A.DoModal ();
	}

}

// Vuelve al di�logo anterior 
void CDialogo6A::OnAtras6a() 
{
	// volver al Dialogo5A
	EndDialog(IDCANCEL);
}

// Elimina tecla ESC 
void CDialogo6A::OnCancel() 
{
//	CDialog::OnCancel();
}
