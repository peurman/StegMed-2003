// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << Dialogo2B.cpp >>

#include "stdafx.h"
#include "StegMed.h"
#include "Dialogo2B.h"
#include "Dialogo3B.h"
#include "Info1.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// Variables globales
extern CString m_path;
extern CString m_name;
extern CString m_appdir;
extern CFont m_font1;

/////////////////////////////////////////////////////////////////////////////
// CDialogo2B dialog


CDialogo2B::CDialogo2B(CWnd* pParent /*=NULL*/)
	: CDialog(CDialogo2B::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDialogo2B)
	m_pathfile2 = _T("*.bmp");
	//}}AFX_DATA_INIT
}


void CDialogo2B::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDialogo2B)
	DDX_Text(pDX, IDC_EDITPATH2, m_pathfile2);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDialogo2B, CDialog)
	//{{AFX_MSG_MAP(CDialogo2B)
	ON_BN_CLICKED(IDC_ATRAS2B, OnAtras2b)
	ON_BN_CLICKED(IDC_EXAMINAR_B, OnExaminarB)
	ON_BN_CLICKED(IDC_SEGUIR2B, OnSeguir2b)
	ON_EN_UPDATE(IDC_EDITPATH2, OnUpdateEditpath2)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialogo2B message handlers

BOOL CDialogo2B::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// asociar fuente al texto que la va a usar
	GetDlgItem(IDC_TEXTO2B)->SetFont(&m_font1, TRUE);
	
	// configurar botones  
	VERIFY(m_seguir.AutoLoad(IDC_SEGUIR2B, this));
	VERIFY(m_atras.AutoLoad(IDC_ATRAS2B, this));
	VERIFY(m_examinar.AutoLoad(IDC_EXAMINAR_B, this));
	
	return TRUE; 
}

// Selecciona el archivo BMP a utilizar 
void CDialogo2B::OnExaminarB() 
{
	// seleccionar stegofile
	static char BASED_CODE szFilter[] = "Archivos de mapa de bits (*.bmp)|*.bmp||";
	CFileDialog fd(TRUE, "bmp", "*.bmp", OFN_HIDEREADONLY, szFilter, NULL);
	if (fd.DoModal()==IDOK)
	{
		m_pathfile2 = fd.GetPathName();
		// habilitar bot�n "Siguiente"
		UpdateData(VAR2CTRL);
		CWnd* pb = GetDlgItem(IDC_SEGUIR2B);
		pb->EnableWindow(TRUE);
	}
}

// Abre el di�logo siguiente 
void CDialogo2B::OnSeguir2b() 
{
	// extraer nombre de archivo. m_name es global
	m_name = m_pathfile2.Right(strlen(m_pathfile2) - m_pathfile2.ReverseFind('\\') - 1);

	// buscar y setear directorio donde est� el ejecutable 
	char  szAppPath[MAX_PATH] = "";
	::GetModuleFileName(0, szAppPath, sizeof(szAppPath) - 1);
	m_appdir = szAppPath; // m_appdir es global
	m_appdir = m_appdir.Left(m_appdir.ReverseFind('\\')) + "\\"; // extraer directorio
	SetCurrentDirectory(m_appdir); 

	// verificar si existe el archivo
	CFile file;
	if (!file.Open(m_pathfile2,CFile::modeRead,NULL)) {
			MessageBeep(MB_ICONHAND);
			CInfo1 dlg(this);
			dlg.DoModal();
			m_pathfile2 = "";
			UpdateData(VAR2CTRL);
			CWnd* pb = GetDlgItem(IDC_SEGUIR2B);
			pb->EnableWindow(FALSE);
	}
	else {
		file.Close() ;
		UpdateData(CTRL2VAR);
		m_path = m_pathfile2.Left(strlen(m_pathfile2) - strlen(m_name)); // m_path es global
		// copiar archivo en el directorio del ejecutable
		CString m_newpath = m_appdir + m_name ;
		CopyFile(m_pathfile2, m_newpath, FALSE); 

		// abrir Dialogo3B
		CDialogo3B dlg3B(this);
		dlg3B.DoModal ();
	}
}

// Vuelve al di�logo anterior 
void CDialogo2B::OnAtras2b() 
{
	// volver al Dialogo1
	EndDialog(IDCANCEL);
}

// Habilita el bot�n "Siguiente"
void CDialogo2B::OnUpdateEditpath2() 
{
	UpdateData(CTRL2VAR);
	CWnd* pb = GetDlgItem(IDC_SEGUIR2B);
	pb->EnableWindow(TRUE);
}

// Elimina tecla ESC 
void CDialogo2B::OnCancel() 
{
//	CDialog::OnCancel();
}
