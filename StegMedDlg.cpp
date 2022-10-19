// StegMed 1.0 - Esteganografía Médica
// Copyright (C) 2003 - Esteban Manrupe <esteban_manrupe@hotmail.com>
// << StegMedDlg.cpp >> 

#include "stdafx.h"
#include "StegMed.h"
#include "StegMedDlg.h"
#include "Dialogo2A.h"
#include "Dialogo2B.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

// Variables globales
extern CString m_name;
extern CString m_appdir;
extern CString m_passphrase;
CFont m_font1;
CFont m_font2;
CFont m_font3;

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CBitmapButton m_aceptar;
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	virtual void OnCancel();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CStegMedDlg dialog

CStegMedDlg::CStegMedDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CStegMedDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CStegMedDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CStegMedDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CStegMedDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CStegMedDlg, CDialog)
	//{{AFX_MSG_MAP(CStegMedDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_EMBED, OnEmbed)
	ON_BN_CLICKED(IDC_EXTRACT, OnExtract)
	ON_COMMAND(IDC_MACERCA, OnAcerca)
	ON_COMMAND(IDC_MSALIR, OnSalir)
	ON_COMMAND(IDC_MCONTENIDO, OnMcontenido)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CStegMedDlg message handlers

BOOL CStegMedDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// set the icon for this dialog. 
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// generar los tipos de fuentes que se va a utilizar
	m_font1.CreateFont(
			18,                        // nHeight
			0,                         // nWidth
			0,                         // nEscapement
			0,                         // nOrientation
			FW_BOLD,                 // nWeight
			FALSE,                     // bItalic
			FALSE,                     // bUnderline
			0,                         // cStrikeOut
			ANSI_CHARSET,              // nCharSet
			OUT_DEFAULT_PRECIS,        // nOutPrecision
			CLIP_DEFAULT_PRECIS,       // nClipPrecision
			DEFAULT_QUALITY,           // nQuality
			DEFAULT_PITCH | FF_SWISS,  // nPitchAndFamily
			"MS Sans Serif");

	m_font2.CreateFont(
			16,                        // nHeight
			0,                         // nWidth
			0,                         // nEscapement
			0,                         // nOrientation
			FW_BOLD,                 // nWeight
			FALSE,                     // bItalic
			FALSE,                     // bUnderline
			0,                         // cStrikeOut
			ANSI_CHARSET,              // nCharSet
			OUT_DEFAULT_PRECIS,        // nOutPrecision
			CLIP_DEFAULT_PRECIS,       // nClipPrecision
			DEFAULT_QUALITY,           // nQuality
			DEFAULT_PITCH | FF_SWISS,  // nPitchAndFamily
			"MS Sans Serif");

	m_font3.CreateFont(
			14,                        // nHeight
			0,                         // nWidth
			0,                         // nEscapement
			0,                         // nOrientation
			FW_BOLD,                 // nWeight
			FALSE,                     // bItalic
			FALSE,                     // bUnderline
			0,                         // cStrikeOut
			ANSI_CHARSET,              // nCharSet
			OUT_DEFAULT_PRECIS,        // nOutPrecision
			CLIP_DEFAULT_PRECIS,       // nClipPrecision
			DEFAULT_QUALITY,           // nQuality
			DEFAULT_PITCH | FF_SWISS,  // nPitchAndFamily
			"MS Sans Serif");

	// asociar fuente al texto que la va a usar
	GetDlgItem(IDC_TEXTO1)->SetFont(&m_font1, TRUE);
	
	// configurar botones  
	VERIFY(m_rescatar.AutoLoad(IDC_EXTRACT, this));
	VERIFY(m_ocultar.AutoLoad(IDC_EMBED, this));

	return TRUE; 
}

void CStegMedDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

void CStegMedDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CStegMedDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

// Abre el di�logo del proceso de ocultaci�n
void CStegMedDlg::OnEmbed() 
{
	// abrir Dialogo2A
	CDialogo2A dlg2A(this);
	dlg2A.DoModal ();

}

// Abre el di�logo del proceso de extracci�n
void CStegMedDlg::OnExtract() 
{
	// abrir Dialogo2B
	CDialogo2B dlg2B(this);
	dlg2B.DoModal ();
}

// Abre ABOUT del MENU
void CStegMedDlg::OnAcerca() 
{
	CAboutDlg dlgAcerca;
	dlgAcerca.DoModal ();
}

// Ejecuta CONTENIDO del MENU y abra la ayuda
void CStegMedDlg::OnMcontenido() 
{
	// buscar y setear directorio donde est� el ejecutable 
	char  szAppPath[MAX_PATH] = "";
	::GetModuleFileName(0, szAppPath, sizeof(szAppPath) - 1);
	m_appdir = szAppPath; // m_appdir es global
	m_appdir = m_appdir.Left(m_appdir.ReverseFind('\\')) + "\\"; // extraer directorio
	// abro la Ayuda
	ShellExecute(0, "open", m_appdir + "stegmed.hlp",  NULL, 0, SW_SHOW) ; 
}


// Ejecuta SALIR del MENU
void CStegMedDlg::OnSalir() 
{
	CString m_cover = m_appdir + m_name;
	CString m_plain = m_appdir + "info_sm.txt";

	// borro el passphrase guardado
	m_passphrase = "";

	// borrar archivos temporales
	DeleteFile(m_cover); 
	DeleteFile(m_plain);

	// cerrar sesi�n de StegMed
	DestroyWindow();
}


BOOL CAboutDlg::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	// configurar bot�n  
	VERIFY(m_aceptar.AutoLoad(IDOK, this));
	
	// asociar fuente al texto que la va a usar
//	GetDlgItem(IDC_TEXTO00)->SetFont(&m_font1, TRUE);

	return TRUE; 
}

// Elimina tecla ESC del ABOUT
void CAboutDlg::OnCancel() 
{
//	CDialog::OnCancel();
}
