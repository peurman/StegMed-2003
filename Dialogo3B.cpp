// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << Dialogo3B.cpp >>

#include "stdafx.h"
#include "StegMed.h"
#include "Dialogo3B.h"
#include "Dialogo4B.h"
#include "Info2.h"

#include <string.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// Variables globales
extern CString m_name;
extern CString m_appdir;
extern CString m_passphrase;
extern CFont m_font1;

/////////////////////////////////////////////////////////////////////////////
// CDialogo3B dialog


CDialogo3B::CDialogo3B(CWnd* pParent /*=NULL*/)
	: CDialog(CDialogo3B::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDialogo3B)
	m_passphrase1b = _T("");
	m_passphrase2b = _T("");
	//}}AFX_DATA_INIT
}


void CDialogo3B::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDialogo3B)
	DDX_Text(pDX, IDC_EDITPASSB1, m_passphrase1b);
	DDV_MaxChars(pDX, m_passphrase1b, 512);
	DDX_Text(pDX, IDC_EDITPASSB2, m_passphrase2b);
	DDV_MaxChars(pDX, m_passphrase2b, 512);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDialogo3B, CDialog)
	//{{AFX_MSG_MAP(CDialogo3B)
	ON_BN_CLICKED(IDC_ATRAS3B, OnAtras3b)
	ON_BN_CLICKED(IDC_SEGUIR3B, OnSeguir3b)
	ON_EN_UPDATE(IDC_EDITPASSB1, OnUpdateEditpassb1)
	ON_EN_UPDATE(IDC_EDITPASSB2, OnUpdateEditpassb2)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialogo3B message handlers

BOOL CDialogo3B::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// asociar fuente al texto que la va a usar
	GetDlgItem(IDC_TEXTO3B)->SetFont(&m_font1, TRUE);
	
	// configurar botones  
	VERIFY(m_seguir.AutoLoad(IDC_SEGUIR3B, this));
	VERIFY(m_atras.AutoLoad(IDC_ATRAS3B, this));
	
	return TRUE; 
}

// Asocia el valor ingresado a la variable
void CDialogo3B::OnUpdateEditpassb1() 
{
	UpdateData(CTRL2VAR);
}

// Habilita el bot�n "Siguiente"
void CDialogo3B::OnUpdateEditpassb2() 
{
	UpdateData(CTRL2VAR);
	// habilitar bot�n "Siguiente"
	CWnd* pb = GetDlgItem(IDC_SEGUIR3B);
	pb->EnableWindow(TRUE);
}

// Abre el di�logo siguiente 
void CDialogo3B::OnSeguir3b() 
{
	// comparar passphrases
	if (strcmp(m_passphrase1b,m_passphrase2b)!=0) {
		// no concuerdan: mostrar Info2
		MessageBeep(MB_ICONHAND);
		CInfo2 dlg(this);
		dlg.DoModal();
		m_passphrase1b = m_passphrase2b = "";
		UpdateData(VAR2CTRL);
		// deshabilitar bot�n "Siguiente"
		CWnd* pb = GetDlgItem(IDC_SEGUIR3B);
		pb->EnableWindow(FALSE);
	}
	else {
		m_passphrase = m_passphrase1b;
		m_passphrase1b = m_passphrase2b = "";
		UpdateData(VAR2CTRL);
		// abrir Dialogo4B
		CDialogo4B dlg4B(this);
		dlg4B.DoModal ();
	}
}

// Vuelve al di�logo anterior 
void CDialogo3B::OnAtras3b() 
{
	CString m_stego = m_appdir + m_name;

	// borrar archivo temporal
	DeleteFile(m_stego); 

	// volver al Dialogo2B 
	EndDialog(IDCANCEL);
}

// Elimina tecla ESC 
void CDialogo3B::OnCancel() 
{
//	CDialog::OnCancel();
}
