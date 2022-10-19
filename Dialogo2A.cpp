// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << Dialogo2A.cpp >>


#include "stdafx.h"
#include "StegMed.h"
#include "Dialogo2A.h"
#include "Dialogo3A.h"
#include "Info1.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// Variables globales
CString m_name = "";
CString m_path = "";
CString m_appdir;
extern CFont m_font1;

/////////////////////////////////////////////////////////////////////////////
// CDialogo2A dialog

CDialogo2A::CDialogo2A(CWnd* pParent /*=NULL*/)
	: CDialog(CDialogo2A::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDialogo2A)
	m_pathfile = _T("*.bmp");
	//}}AFX_DATA_INIT
}

void CDialogo2A::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDialogo2A)
	DDX_Text(pDX, IDC_EDITPATH1, m_pathfile);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDialogo2A, CDialog)
	//{{AFX_MSG_MAP(CDialogo2A)
	ON_BN_CLICKED(IDC_ATRAS2A, OnAtras2a)
	ON_BN_CLICKED(IDC_SEGUIR2A, OnSeguir2a)
	ON_BN_CLICKED(IDC_EXAMINAR_A, OnExaminarA)
	ON_EN_UPDATE(IDC_EDITPATH1, OnUpdateEditpath1)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialogo2A message handlers

BOOL CDialogo2A::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// asociar fuente al texto que la va a usar
	GetDlgItem(IDC_TEXTO2A)->SetFont(&m_font1, TRUE);
	
	// configurar botones  
	VERIFY(m_seguir.AutoLoad(IDC_SEGUIR2A, this));
	VERIFY(m_atras.AutoLoad(IDC_ATRAS2A, this));
	VERIFY(m_examinar.AutoLoad(IDC_EXAMINAR_A, this));
	
	return TRUE;
}

// Selecciona el archivo BMP a utilizar
void CDialogo2A::OnExaminarA() 
{
	// seleccionar coverfile
	static char BASED_CODE szFilter[] = "Archivos de mapa de bits (*.bmp)|*.bmp||";
	CFileDialog fd(TRUE, "bmp", "*.bmp", OFN_HIDEREADONLY, szFilter, NULL);
	if (fd.DoModal()==IDOK)
	{
		m_pathfile = fd.GetPathName();
		// habilitar bot�n "Siguiente"
		UpdateData(VAR2CTRL);
		CWnd* pb = GetDlgItem(IDC_SEGUIR2A);
		pb->EnableWindow(TRUE);
	}
}

// Abre el di�logo siguiente
void CDialogo2A::OnSeguir2a() 
{
	// extraer nombre de archivo. m_name es global
	m_name = m_pathfile.Right(strlen(m_pathfile) - m_pathfile.ReverseFind('\\') - 1);

	// buscar y setear directorio donde est� el ejecutable
	char  szAppPath[MAX_PATH] = "";
	::GetModuleFileName(0, szAppPath, sizeof(szAppPath) - 1);
	m_appdir = szAppPath; // m_appdir es global
	m_appdir = m_appdir.Left(m_appdir.ReverseFind('\\')) + "\\"; // extraer directorio
	SetCurrentDirectory(m_appdir); 

	// verificar si existe archivo
	CFile file;
	if (!file.Open(m_pathfile,CFile::modeRead,NULL)) {
			MessageBeep(MB_ICONHAND);
			CInfo1 dlg(this); 
			dlg.DoModal(); // "ERROR: el archivo elegido no existe"
			m_pathfile = "";
			UpdateData(VAR2CTRL);
			CWnd* pb = GetDlgItem(IDC_SEGUIR2A);
			pb->EnableWindow(FALSE);
	}
	else {
		file.Close() ;
		UpdateData(CTRL2VAR);
		m_path = m_pathfile.Left(strlen(m_pathfile) - strlen(m_name)); // m_path es global
		// copiar archivo en el directorio del ejecutable
		CString m_newpath = m_appdir + m_name ;
		CopyFile(m_pathfile, m_newpath, FALSE); 

		// abrir Dialogo3A
		CDialogo3A dlg3A(this);
		dlg3A.DoModal ();
	}
}

// Vuelve al di�logo anterior
void CDialogo2A::OnAtras2a() 
{
	// volver al Dialogo1
	EndDialog(IDCANCEL);
}

// Habilita el bot�n "Siguiente"
void CDialogo2A::OnUpdateEditpath1() 
{
	UpdateData(CTRL2VAR);
	CWnd* pb = GetDlgItem(IDC_SEGUIR2A);
	pb->EnableWindow(TRUE);
}

// Elimina tecla ESC 
void CDialogo2A::OnCancel() 
{
//	CDialog::OnCancel();
}
