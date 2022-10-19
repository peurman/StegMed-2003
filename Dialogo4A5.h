#if !defined(AFX_DIALOGO4A5_H__90AB756E_9F43_11D7_8BDB_00E07D8670F0__INCLUDED_)
#define AFX_DIALOGO4A5_H__90AB756E_9F43_11D7_8BDB_00E07D8670F0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Dialogo4A5.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDialogo4A5 dialog

class CDialogo4A5 : public CDialog
{
// Construction
public:
	CBitmapButton m_atras;
	CBitmapButton m_seguir;
	CDialogo4A5(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDialogo4A5)
	enum { IDD = IDD_DLG4A5 };
	CString	m_Conclusion;
	CString	m_Doctor;
	CString	m_Edad;
	CString	m_Fecha;
	CString	m_Informe;
	CString	m_Nombre;
	CString	m_Region;
	CString	m_Tecnica;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialogo4A5)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDialogo4A5)
	virtual BOOL OnInitDialog();
	afx_msg void OnSeguir4a5();
	afx_msg void OnAtras4a5();
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGO4A5_H__90AB756E_9F43_11D7_8BDB_00E07D8670F0__INCLUDED_)
