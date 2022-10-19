#if !defined(AFX_DIALOGO4A2_H__90AB756B_9F43_11D7_8BDB_00E07D8670F0__INCLUDED_)
#define AFX_DIALOGO4A2_H__90AB756B_9F43_11D7_8BDB_00E07D8670F0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Dialogo4A2.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDialogo4A2 dialog

class CDialogo4A2 : public CDialog
{
// Construction
public:
	CBitmapButton m_seguir;
	CBitmapButton m_atras;
	CDialogo4A2(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDialogo4A2)
	enum { IDD = IDD_DLG4A2 };
	CString	m_Conclusion;
	CString	m_Doctor;
	CString	m_Edad;
	CString	m_Fecha;
	CString	m_Informe;
	CString	m_Nombre;
	CString	m_Region;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialogo4A2)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDialogo4A2)
	virtual BOOL OnInitDialog();
	virtual void OnCancel();
	afx_msg void OnAtras4a2();
	afx_msg void OnSeguir4a2();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGO4A2_H__90AB756B_9F43_11D7_8BDB_00E07D8670F0__INCLUDED_)
