// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << Dialogo4B.cpp >>

#include "stdafx.h"
#include "StegMed.h"
#include "Dialogo2B.h"
#include "Dialogo4B.h"
#include "Dialogo5B.h"
#include "Info3.h"
#include "Info5.h"
#include "Info6.h"
#include "Info7.h"
#include "Info8.h"
#include "Info9.h"
#include "Info12.h"
#include "Info131.h"
#include "Info14.h"


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
int contb;

/////////////////////////////////////////////////////////////////////////////
// CDialogo4B dialog


CDialogo4B::CDialogo4B(CWnd* pParent /*=NULL*/)
	: CDialog(CDialogo4B::IDD, pParent)
{
	//{{AFX_DATA_INIT(CDialogo4B)
	//}}AFX_DATA_INIT
}


void CDialogo4B::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CDialogo4B)
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDialogo4B, CDialog)
	//{{AFX_MSG_MAP(CDialogo4B)
	ON_BN_CLICKED(IDC_CANCELARB, OnCancelarb)
	ON_BN_CLICKED(IDC_SEGUIR4B, OnSeguir4b)
	ON_BN_CLICKED(IDC_COMENZAR2, OnExtract)
	ON_WM_TIMER()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialogo4B message handlers

BOOL CDialogo4B::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// asociar fuente al texto que la va a usar
	GetDlgItem(IDC_INFOEXTR1)->SetFont(&m_font2, TRUE);
	GetDlgItem(IDC_INFOEXTR2)->SetFont(&m_font2, TRUE);
	GetDlgItem(IDC_INFOEXTR3)->SetFont(&m_font2, TRUE);
	GetDlgItem(IDC_INFOEXTR4)->SetFont(&m_font2, TRUE);
	GetDlgItem(IDC_INFOEXTR5)->SetFont(&m_font2, TRUE);
	GetDlgItem(IDC_INFOEXTR6)->SetFont(&m_font2, TRUE);
//	GetDlgItem(IDC_INFOEXTR7)->SetFont(&m_font2, TRUE);
	
	// configurar botones  
	VERIFY(m_comezar.AutoLoad(IDC_COMENZAR2, this));
	VERIFY(m_seguir.AutoLoad(IDC_SEGUIR4B, this));
	VERIFY(m_cancelar.AutoLoad(IDC_CANCELARB, this));

	return TRUE; 
}

// Realiza el proceso de extracci�n
void CDialogo4B::OnExtract() 
{
	// EXTRAER
	CString m_plain=  m_appdir + "info_sm.txt";
	CString m_stego = m_appdir + m_name;
	CString m_totalchar =  m_appdir + "accion.exe extraer -sf " + m_stego +" -pf " + m_plain + " -p \"" + m_passphrase + "\"" ;

	// llamado a accion.exe
	if (WinExec(m_totalchar, SW_SHOWMINNOACTIVE) == ERROR_FILE_NOT_FOUND) {
		contb = 5 ;
		// mostrar Error 0
		MessageBeep(MB_ICONHAND);
		CInfo5 dlg5(this); 
		dlg5.DoModal();
		// mostrar INFO6 "Proceso Interrumpido..."
		CWnd* pb6= GetDlgItem(IDC_INFOEXTR6);
		pb6->ShowWindow(SW_RESTORE);
	}
	else {
		contb = 0;
		//  mostrar INFO1: "Leyendo archivo esteganogr�fico"
		CWnd* pb1 = GetDlgItem(IDC_INFOEXTR1); 
		pb1->ShowWindow(SW_RESTORE);
		// setear timer
		SetTimer(1100, 2000, 0);
	}
}

// Se ejecuta en cada per�odo del timer
void CDialogo4B::OnTimer(UINT nIDEvent) 
{
	CString m_plain=  m_appdir + "info_sm.txt";
	CString m_stego = m_appdir + m_name;

	if (contb == 0) {
		if (existe_file("error_1.txt") || existe_file("error_4.txt")) {
			// detener timer
			contb = 5;
			// mostrar Error 1
			MessageBeep(MB_ICONHAND);
			CInfo6 dlg6(this); 
			dlg6.DoModal();
			// mostrar INFO6 "Proceso Interrumpido..."
			CWnd* pb6= GetDlgItem(IDC_INFOEXTR6);
			pb6->ShowWindow(SW_RESTORE);
			// borrar archivo temporal
			DeleteFile(m_appdir + "error_1.txt");
			DeleteFile(m_appdir +"error_4.txt");
		}
		else if (existe_file("error_2.txt")) {
			// detener timer
			contb = 5;
			// mostrar Error 2
			MessageBeep(MB_ICONHAND);
			CInfo7 dlg7(this); 
			dlg7.DoModal();
			// mostrar INFO6 "Proceso Interrumpido..."
			CWnd* pb6= GetDlgItem(IDC_INFOEXTR6);
			pb6->ShowWindow(SW_RESTORE);
			// borrar archivo temporal
			DeleteFile(m_appdir +"error_2.txt");
		}
		else {
			// mostrar INFO2: "Extrayendo informaci�n encriptada de la imagen..."
			CWnd* pb2 = GetDlgItem(IDC_INFOEXTR2); 
			pb2->ShowWindow(SW_RESTORE);
			contb = contb + 1;
		}
	}

	else if (contb == 1) {
		if (existe_file("error_9.txt")) {
			// detener timer
			contb = 5;
			// mostrar Error 7
			MessageBeep(MB_ICONHAND);
			CInfo12 dlg12(this); 
			dlg12.DoModal();
			// mostrar INFO6 "Proceso Interrumpido..."
			CWnd* pb6= GetDlgItem(IDC_INFOEXTR6);
			pb6->ShowWindow(SW_RESTORE);
			// borrar archivo temporal
			DeleteFile(m_appdir +"error_9.txt");
		}
		else {
			// mostrar INFO3: "Decriptando informaci�n..."
			CWnd* pb3 = GetDlgItem(IDC_INFOEXTR3); 
			pb3->ShowWindow(SW_RESTORE);
			contb = contb + 1;
		}
	}

	else if (contb == 2) {
		if (existe_file("error_6.txt") || existe_file("error_7.txt")) {
			// detener timer 
			contb =5;
			// muestro Error 3
			MessageBeep(MB_ICONHAND);
			CInfo8 dlg8(this); 
			dlg8.DoModal();
			// mostrar INFO6 "Proceso Interrumpido..."
			CWnd* pb6= GetDlgItem(IDC_INFOEXTR6);
			pb6->ShowWindow(SW_RESTORE);
			// borrar el archivo temporal
			DeleteFile(m_appdir + "error_6.txt");
			DeleteFile(m_appdir +"error_7.txt");
		}
		else if (existe_file("error_5.txt")) {
			// detener timer
			contb = 5;
			// mostrar Error 4
			MessageBeep(MB_ICONHAND);
			CInfo9 dlg9(this); 
			dlg9.DoModal();
			// mostrar INFO6 "Proceso Interrumpido..."
			CWnd* pb6= GetDlgItem(IDC_INFOEXTR6);
			pb6->ShowWindow(SW_RESTORE);
			// borrar archivo temporal
			DeleteFile(m_appdir +"error_5.txt");
		}
		else if (existe_file("error_11.txt")) {
			// detener timer
			contb = 5;
			// mostrar Error 8
			MessageBeep(MB_ICONHAND);
			CInfo13 dlg13(this); 
			dlg13.DoModal();
			// mostrar INFO6 "Proceso Interrumpido..."
			CWnd* pb6= GetDlgItem(IDC_INFOEXTR6);
			pb6->ShowWindow(SW_RESTORE);
			// borrar archivo temporal
			DeleteFile(m_appdir +"error_11.txt");
		}
		else {
			// mostrar INFO4: "Generando archivo de texto..."
			CWnd* pb4 = GetDlgItem(IDC_INFOEXTR4); 
			pb4->ShowWindow(SW_RESTORE);
			contb = contb + 1;
		}
	}

	else if (contb == 3) {
		// verificar si se cre� el plainfile
		CFile file;
		if (!file.Open(m_plain,CFile::modeRead,NULL)) {
			// detener timer
			contb = 5;
			// mostrar Error 9
			MessageBeep(MB_ICONHAND);
			CInfo14 dlg14(this); 
			dlg14.DoModal();
			// mostrar INFO6 "Proceso Interrumpido..."
			CWnd* pb6= GetDlgItem(IDC_INFOEXTR6);
			pb6->ShowWindow(SW_RESTORE);
		}
		else {
			file.Close() ;
			CString m_newplain = m_path + "info_sm.txt";
			MoveFile(m_plain, m_newplain); // mover archivo al directorio original
			// borrar archivo temporal
			DeleteFile(m_stego);
			m_name = m_newplain; // asignar nuevo nombre
			// mostrar INFO6: "TERMINADO."
			CWnd* pb5 = GetDlgItem(IDC_INFOEXTR5);
			pb5->ShowWindow(SW_RESTORE);
			contb = contb + 1;
		}
	}
	else if (contb == 4) {
		// mostrar INFO7: "Presione Siguiente para continuar..."
		CWnd* pb7 = GetDlgItem(IDC_INFOEXTR7); 
		pb7->ShowWindow(SW_RESTORE);
		//  habilitar bot�n "Siguiente"
		CWnd* pb8 = GetDlgItem(IDC_SEGUIR4B);  
		pb8->EnableWindow(TRUE);
		contb = contb + 1;
	}
	else if (contb == 5) {
		// detener timer
		KillTimer(nIDEvent);
		// borrar archivo temporal
		DeleteFile(m_stego); 
	}

	CDialog::OnTimer(nIDEvent);
}

// Verifica la existencia de un archivo
int CDialogo4B::existe_file(char *filename)
{
    FILE *fd = NULL ;
    int retval = 0 ;

    if ((fd = fopen (filename, "r")) == NULL) {
        retval = 0 ;
    }
    else {
        retval = 1 ;
        fclose (fd) ;
    }

	return retval ;
}

// Abre el di�logo siguiente 
void CDialogo4B::OnSeguir4b() 
{
	CString m_newplain = m_path + "info_sm.txt";
	CFile Archi; 
	Archi.Open (m_newplain, CFile::modeRead); // abrir plainfile
	char m_datos [100000];
	Archi.Read ( m_datos, Archi.GetLength ()); // cargar datos en m_datos
	Archi.Close (); 

	// abrir Dialogo3B 
	CDialogo5B dlg5B(this);
	dlg5B.m_info = m_datos; // copiar datos en m_info
	dlg5B.DoModal ();
}

// Cancela el proceso y regresa al Dialogo2B
void CDialogo4B::OnCancelarb() 
{
	CString m_stego = m_appdir + m_name;

	// borro el passphrase guardado
	m_passphrase = "";

	// borrar archivo temporal
	DeleteFile(m_stego); 

	// detener el timer
	KillTimer(1100);

	// mostrar Info3 
	MessageBeep(MB_ICONEXCLAMATION);
	CInfo3 dlg3(this);
	dlg3.DoModal();

	// volver al Dialogo2B
	CDialogo2B dlg2B(this);
	dlg2B.DoModal ();
}

// Elimina tecla ESC 
void CDialogo4B::OnCancel() 
{
//	CDialog::OnCancel();
}
