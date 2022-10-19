#if !defined(AFX_DIALOGO4A6_H__90AB756F_9F43_11D7_8BDB_00E07D8670F0__INCLUDED_)
#define AFX_DIALOGO4A6_H__90AB756F_9F43_11D7_8BDB_00E07D8670F0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Dialogo4A6.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDialogo4A6 dialog

class CDialogo4A6 : public CDialog
{
// Construction
public:
	CBitmapButton m_seguir;
	CBitmapButton m_atras;
	CDialogo4A6(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDialogo4A6)
	enum { IDD = IDD_DLG4A6 };
	CString	m_Informacion;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialogo4A6)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDialogo4A6)
	virtual BOOL OnInitDialog();
	afx_msg void OnSeguir4a6();
	afx_msg void OnAtras4a6();
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGO4A6_H__90AB756F_9F43_11D7_8BDB_00E07D8670F0__INCLUDED_)
