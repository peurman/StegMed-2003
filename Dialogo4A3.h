#if !defined(AFX_DIALOGO4A3_H__90AB756C_9F43_11D7_8BDB_00E07D8670F0__INCLUDED_)
#define AFX_DIALOGO4A3_H__90AB756C_9F43_11D7_8BDB_00E07D8670F0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Dialogo4A3.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDialogo4A3 dialog

class CDialogo4A3 : public CDialog
{
// Construction
public:
	CBitmapButton m_atras;
	CBitmapButton m_seguir;
	CDialogo4A3(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDialogo4A3)
	enum { IDD = IDD_DLG4A3 };
	CString	m_Conclusion;
	CString	m_Descripcion;
	CString	m_Doctor;
	CString	m_Edad;
	CString	m_Fecha;
	CString	m_Informe;
	CString	m_Nombre;
	CString	m_Region;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialogo4A3)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDialogo4A3)
	virtual BOOL OnInitDialog();
	virtual void OnCancel();
	afx_msg void OnAtras4a3();
	afx_msg void OnSeguir4a3();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGO4A3_H__90AB756C_9F43_11D7_8BDB_00E07D8670F0__INCLUDED_)
