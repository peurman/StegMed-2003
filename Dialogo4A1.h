#if !defined(AFX_DIALOGO4A1_H__F4720FD3_F9F8_4334_AF6D_0E5365987C29__INCLUDED_)
#define AFX_DIALOGO4A1_H__F4720FD3_F9F8_4334_AF6D_0E5365987C29__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// Dialogo4A1.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDialogo4A1 dialog

class CDialogo4A1 : public CDialog
{
// Construction
public:
	CBitmapButton m_atras;
	CBitmapButton m_seguir;
	CDialogo4A1(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDialogo4A1)
	enum { IDD = IDD_DLG4A1 };
	CString	m_Altura;
	CString	m_Apellido;
	CString	m_Domicilio;
	CString	m_Edad;
	CString	m_Mutual;
	CString	m_NacAnio;
	CString	m_NacDia;
	CString	m_NacMes;
	CString	m_Nombre;
	CString	m_NroSocio;
	CString	m_Obs;
	CString	m_Peso;
	CString	m_NroDoc;
	CString	m_Telefono;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialogo4A1)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDialogo4A1)
	afx_msg void OnAtras4a1();
	afx_msg void OnSeguir4a1();
	virtual void OnCancel();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGO4A1_H__F4720FD3_F9F8_4334_AF6D_0E5365987C29__INCLUDED_)
