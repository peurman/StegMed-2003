// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << Dialogo7A.cpp >>


#include "stdafx.h"
#include "StegMed.h"
#include "Dialogo2A.h"
#include "Dialogo7A.h"
#include "Dialogo8A.h"
#include "Info3.h"
#include "Info5.h"
#include "Info6.h"
#include "Info7.h"
#include "Info8.h"
#include "Info9.h"
#include "Info10.h"
#include "Info11.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// Variables globales
extern CString m_passphrase;
extern CString m_name;
extern CString m_path;
extern CString m_appdir;
extern CFont m_font2;
int cont;

/////////////////////////////////////////////////////////////////////////////
// CDialogo7A dialog


CDialogo7A::CDialogo7A(CWnd* pParent /*=NULL*/)
	: CDialog(CDialogo7A::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDialogo7A)
	//}}AFX_DATA_INIT
}


void CDialogo7A::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDialogo7A)
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDialogo7A, CDialog)
	//{{AFX_MSG_MAP(CDialogo7A)
	ON_BN_CLICKED(IDC_CANCELARA, OnCancelara)
	ON_BN_CLICKED(IDC_SEGUIR7A, OnSeguir7a)
	ON_BN_CLICKED(IDC_COMENZAR1, OnEmbed)
	ON_WM_TIMER()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialogo7A message handlers

BOOL CDialogo7A::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// asociar fuente al texto que la va a usar
	GetDlgItem(IDC_INFOEMB1)->SetFont(&m_font2, TRUE);
	GetDlgItem(IDC_INFOEMB2)->SetFont(&m_font2, TRUE);
	GetDlgItem(IDC_INFOEMB3)->SetFont(&m_font2, TRUE);
	GetDlgItem(IDC_INFOEMB4)->SetFont(&m_font2, TRUE);
	GetDlgItem(IDC_INFOEMB5)->SetFont(&m_font2, TRUE);
	GetDlgItem(IDC_INFOEMB6)->SetFont(&m_font2, TRUE);
	
	// configurar botones  
	VERIFY(m_comezar.AutoLoad(IDC_COMENZAR1, this));
	VERIFY(m_seguir.AutoLoad(IDC_SEGUIR7A, this));
	VERIFY(m_cancelar.AutoLoad(IDC_CANCELARA, this));
	
	return TRUE;
}

// Realiza el proceso de ocultaci�n
void CDialogo7A::OnEmbed() 
{
	// OCULTAR
	CString m_newname = m_name.Left(strlen(m_name) - 4) + "_sm.bmp" ;
	CString m_cover = m_appdir + m_name;
	CString m_stego = m_appdir + m_newname;
	CString m_plain = m_appdir + "info_sm.txt";
	CString m_totalchar =  m_appdir + "accion.exe ocultar -pf " + m_plain + " -cf " + m_cover + " -sf " + m_stego + " -p \"" + m_passphrase + "\"" ;
	
	// llamado a accion.exe
	if (WinExec(m_totalchar, SW_SHOWMINNOACTIVE) == ERROR_FILE_NOT_FOUND) {
		cont = 5 ;
		// mostrar Error 0
		MessageBeep(MB_ICONHAND);
		CInfo5 dlg5(this); 
		dlg5.DoModal();
		// mostrar INFO5: "Proceso Interrumpido..."
		CWnd* pb5 = GetDlgItem(IDC_INFOEMB5);
		pb5->ShowWindow(SW_RESTORE);
	}
	else {
		cont = 0;
		//  mostrar INFO1: "Leyendo archivos..."
		CWnd* pb1 = GetDlgItem(IDC_INFOEMB1);
		pb1->ShowWindow(SW_RESTORE);
		// setear timer
		SetTimer(1010, 3000, 0);
	}
}

// Se ejecuta en cada per�odo del timer
void CDialogo7A::OnTimer(UINT nIDEvent) 
{
	CString m_newname = m_name.Left(strlen(m_name) - 4) + "_sm.bmp" ;
	CString m_cover = m_appdir + m_name;
	CString m_stego = m_appdir + m_newname;
	CString m_plain = m_appdir + "info_sm.txt";

	if (cont == 0) {
		if (existe_file("error_1.txt") || existe_file("error_4.txt")) {
			// detener timer
			cont = 5;
			// mostrar Error 1
			MessageBeep(MB_ICONHAND);
			CInfo6 dlg6(this); 
			dlg6.DoModal();
			// mostrar INFO5: "Proceso Interrumpido..."
			CWnd* pb5 = GetDlgItem(IDC_INFOEMB5);
			pb5->ShowWindow(SW_RESTORE);
			// borrar archivo temporal
			DeleteFile(m_appdir + "error_1.txt");
			DeleteFile(m_appdir +"error_4.txt");
		}
		else if (existe_file("error_2.txt")) {
			// detener timer
			cont = 5;
			// mostrar Error 2
			MessageBeep(MB_ICONHAND);
			CInfo7 dlg7(this); 
			dlg7.DoModal();
			//  mostrar INFO5: "Proceso Interrumpido..."
			CWnd* pb5 = GetDlgItem(IDC_INFOEMB5);
			pb5->ShowWindow(SW_RESTORE);
			// borrar archivo temporal
			DeleteFile(m_appdir +"error_2.txt");
		}
		else {
			//  mostrar INFO2: "Encriptando informaci�n..."
			CWnd* pb2 = GetDlgItem(IDC_INFOEMB2);
			pb2->ShowWindow(SW_RESTORE);
			cont = cont + 1;
		}
	}

	else if (cont == 1) {
		if (existe_file("error_6.txt") || existe_file("error_7.txt")) {
			// detener timer 
			cont =5;
			// muestro Error 3
			MessageBeep(MB_ICONHAND);
			CInfo8 dlg8(this); 
			dlg8.DoModal();
			//  mostrar INFO5: "Proceso Interrumpido..."
			CWnd* pb5 = GetDlgItem(IDC_INFOEMB5);
			pb5->ShowWindow(SW_RESTORE);
			// borrar el archivo temporal
			DeleteFile(m_appdir + "error_6.txt");
			DeleteFile(m_appdir +"error_7.txt");
		}
		else if (existe_file("error_5.txt")) {
			// detener timer
			cont = 5;
			// mostrar Error 4
			MessageBeep(MB_ICONHAND);
			CInfo9 dlg9(this); 
			dlg9.DoModal();
			//  mostrar INFO5: "Proceso Interrumpido..."
			CWnd* pb5 = GetDlgItem(IDC_INFOEMB5);
			pb5->ShowWindow(SW_RESTORE);
			// borrar archivo temporal
			DeleteFile(m_appdir +"error_5.txt");
		}
		else {
			//  mostrar INFO3: "Ocultando informaci�n encriptada en la imagen..."
			CWnd* pb3 = GetDlgItem(IDC_INFOEMB3);
			pb3->ShowWindow(SW_RESTORE);
			cont = cont + 1;
		}
	}

	else if (cont == 2) {
		if (existe_file("error_8.txt")) {
			// detener timer
			cont = 5;
			// mostrar Error 5
			MessageBeep(MB_ICONHAND);
			CInfo10 dlg10(this); 
			dlg10.DoModal();
			//  mostrar INFO5: "Proceso Interrumpido..."
			CWnd* pb5 = GetDlgItem(IDC_INFOEMB5);
			pb5->ShowWindow(SW_RESTORE);
			// borrar archivo temporal
			DeleteFile(m_appdir + "error_8.txt");
		}
		else {
			//  mostrar INFO4: "Generando archivo esteganogr�fico..."
			CWnd* pb4 = GetDlgItem(IDC_INFOEMB4);
			pb4->ShowWindow(SW_RESTORE);
			cont = cont + 1;
		}
	}

	else if (cont == 3) {
		// verificar si se cre� el stegofile:
		CFile file;
		if (!file.Open(m_stego,CFile::modeRead,NULL)) {
			// detener timer
			cont = 5;
			// mostrar Error 6
			MessageBeep(MB_ICONHAND);
			CInfo11 dlg11(this); 
			dlg11.DoModal();
			//  mostrar INFO5: "Proceso Interrumpido..."
			CWnd* pb5 = GetDlgItem(IDC_INFOEMB5);
			pb5->ShowWindow(SW_RESTORE);
		}
		else {
			file.Close() ;
			CString m_newstego = m_path + m_newname;
			MoveFile(m_stego, m_newstego); // mover archivo al directorio original
			// borrar archivo temporal
			DeleteFile(m_cover); 
			m_name = m_newstego ; // asignar nuevo nombre
			//  mostrar INFO6: "TERMINADO"
			CWnd* pb6 = GetDlgItem(IDC_INFOEMB6);
			pb6->ShowWindow(SW_RESTORE);
			cont = cont + 1;
		}
	}

	else if (cont == 4) {
		//  mostrar INFO7: "Presione Siguiente para continuar..."
		CWnd* pb7 = GetDlgItem(IDC_INFOEMB7);
		pb7->ShowWindow(SW_RESTORE);
		//  habilitar bot�n "Siguiente"
		CWnd* pb8 = GetDlgItem(IDC_SEGUIR7A);
		pb8->EnableWindow(TRUE);
		cont = cont + 1;
	}
	else if (cont == 5) {
		// detener timer
		KillTimer(nIDEvent);
		// borrar archivos temporales
		DeleteFile(m_cover); 
		DeleteFile(m_plain);
	}

	CDialog::OnTimer(nIDEvent);
}

// Verifica la existencia de un archivo
int CDialogo7A::existe_file(char *filename)
{
    FILE *fd = NULL ;
    int retval = 0 ;
	CString fullfilename;

	fullfilename = m_appdir + filename;

    if ((fd = fopen (fullfilename, "r")) == NULL) {
        retval = 0 ;
    }
    else {
        retval = 1 ;
        fclose (fd) ;
    }

	return retval ;
}

// Abre el di�logo siguiente 
void CDialogo7A::OnSeguir7a() 
{
	// abrir Dialogo8A
	CDialogo8A dlg8A(this);
	dlg8A.DoModal ();
}

// Cancela el proceso y regresa al Dialogo2A
void CDialogo7A::OnCancelara() 
{
	CString m_cover = m_appdir + m_name;
	CString m_plain = m_appdir + "info_sm.txt";

	// borro el passphrase guardado
	m_passphrase = "";

	// borrar archivos temporales
	DeleteFile(m_cover); 
	DeleteFile(m_plain);

	// detener timer
	KillTimer(1010);

	// mostrar Info3
	MessageBeep(MB_ICONEXCLAMATION);
	CInfo3 dlg3(this);
	dlg3.DoModal();

	// volver al Di�logo2A
	CDialogo2A dlg2A(this);
	dlg2A.DoModal ();
}

// Elimina tecla ESC 
void CDialogo7A::OnCancel() 
{
//	CDialog::OnCancel();
}
