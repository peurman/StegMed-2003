// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << Dialogo5A.cpp >>

#include "stdafx.h"
#include "StegMed.h"
#include "Dialogo5A.h"
#include "Dialogo6A.h"
#include "Info4.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// Variables globales
extern CString m_appdir;
extern CFont m_font1;

/////////////////////////////////////////////////////////////////////////////
// CDialogo5A dialog


CDialogo5A::CDialogo5A(CWnd* pParent /*=NULL*/)
	: CDialog(CDialogo5A::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDialogo5A)
	m_Info = _T("");
	//}}AFX_DATA_INIT
}


void CDialogo5A::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDialogo5A)
	DDX_Text(pDX, IDC_INFOOCULTAR, m_Info);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDialogo5A, CDialog)
	//{{AFX_MSG_MAP(CDialogo5A)
	ON_BN_CLICKED(IDC_CORREGIR5A, OnCorregir5a)
	ON_BN_CLICKED(IDC_SEGUIR5A, OnSeguir5a)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialogo5A message handlers

BOOL CDialogo5A::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// asociar fuente al texto que la va a usar
	GetDlgItem(IDC_TEXTO5A1)->SetFont(&m_font1, TRUE);
	
	// configurar los botones  
	VERIFY(m_seguir.AutoLoad(IDC_SEGUIR5A, this));
	VERIFY(m_corregir.AutoLoad(IDC_CORREGIR5A, this));
	
	return TRUE;
}

// Abre el di�logo siguiente 
void CDialogo5A::OnSeguir5a() 
{
	// generar archivo TXT
	CString m_plain = m_appdir + "info_sm.txt";
	CFile Archi; 
	Archi.Open (m_plain, CFile::modeCreate | CFile::modeWrite); 
	Archi.Write ( m_Info, m_Info.GetLength ()); 
	Archi.Close (); 
	m_Info=""; 

	// mostrar Info4
	MessageBeep(MB_ICONASTERISK);
	CInfo4 dlg(this); 
	dlg.DoModal ();

	// abrir el Dialogo6A
	CDialogo6A dlg6A(this);
	dlg6A.DoModal ();
}

// Vuelve al di�logo anterior
void CDialogo5A::OnCorregir5a() 
{
	// volver al Dialogo4AX
	EndDialog(IDCANCEL);
}

// Elimina tecla ESC 
void CDialogo5A::OnCancel() 
{
//	CDialog::OnCancel();
}
