// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << Dialogo3A.cpp >>

#include "stdafx.h"
#include "StegMed.h"
#include "Dialogo3A.h"
#include "Dialogo4A1.h"
#include "Dialogo4A2.h"
#include "Dialogo4A3.h"
#include "Dialogo4A4.h"
#include "Dialogo4A5.h"
#include "Dialogo4A6.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// Variables globales
extern CString m_name;
extern CString m_appdir;
extern CFont m_font1;

/////////////////////////////////////////////////////////////////////////////
// CDialogo3A dialog


CDialogo3A::CDialogo3A(CWnd* pParent /*=NULL*/)
	: CDialog(CDialogo3A::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDialogo3A)
	m_tipoinfo = 0;
	//}}AFX_DATA_INIT
}


void CDialogo3A::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDialogo3A)
	DDX_Radio(pDX, IDC_PACIENTE, m_tipoinfo);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDialogo3A, CDialog)
	//{{AFX_MSG_MAP(CDialogo3A)
	ON_BN_CLICKED(IDC_ATRAS3A, OnAtras3a)
	ON_BN_CLICKED(IDC_SEGUIR3A, OnSeguir3a)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialogo3A message handlers

BOOL CDialogo3A::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// asociar fuente al texto que la va a usar
	GetDlgItem(IDC_TEXTO3A)->SetFont(&m_font1, TRUE);
	
	// configurar botones  
	VERIFY(m_seguir.AutoLoad(IDC_SEGUIR3A, this));
	VERIFY(m_atras.AutoLoad(IDC_ATRAS3A, this));
	
	return TRUE; 
}

// Abre el di�logo siguiente 
void CDialogo3A::OnSeguir3a() 
{
	// seleccionar opci�n X y abrir Dialogo4AX
	UpdateData(CTRL2VAR);
	if (m_tipoinfo == 0)
		{
		CDialogo4A1 dlg4A1(this);
		dlg4A1.DoModal ();
		}
	else if (m_tipoinfo == 1)
		{
		CDialogo4A2 dlg4A2(this);
		dlg4A2.DoModal ();
		}
	else if (m_tipoinfo == 2)
		{
		CDialogo4A3 dlg4A3(this);
		dlg4A3.DoModal ();
		}
	else if (m_tipoinfo == 3)
		{
		CDialogo4A4 dlg4A4(this);
		dlg4A4.DoModal ();
		}
	else if (m_tipoinfo == 4)
		{
		CDialogo4A5 dlg4A5(this);
		dlg4A5.DoModal ();
		}
	else
		{
		CDialogo4A6 dlg4A6(this);
		dlg4A6.DoModal ();
		}
}

// Vuelve al di�logo anterior 
void CDialogo3A::OnAtras3a() 
{
	CString m_cover = m_appdir + m_name;

	// borrar archivo temporal
	DeleteFile(m_cover); 

	// volver al Dialogo2A
	EndDialog(IDCANCEL);
}

// Elimina tecla ESC 
void CDialogo3A::OnCancel() 
{
//	CDialog::OnCancel();
}
