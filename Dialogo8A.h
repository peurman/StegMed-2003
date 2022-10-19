#if !defined(AFX_DIALOGO8A_H__3CB078FE_0658_475F_9D8C_5127FC8477C0__INCLUDED_)
#define AFX_DIALOGO8A_H__3CB078FE_0658_475F_9D8C_5127FC8477C0__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// Dialogo8A.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDialogo8A dialog

class CDialogo8A : public CDialog
{
// Construction
public:
	CBitmapButton m_mostrar;
	CBitmapButton m_terminar;
	CDialogo8A(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDialogo8A)
	enum { IDD = IDD_DLG8A };
	CString	m_stegofilepath;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialogo8A)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDialogo8A)
	afx_msg void OnTerminara();
	virtual void OnCancel();
	afx_msg void OnMostrar();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGO8A_H__3CB078FE_0658_475F_9D8C_5127FC8477C0__INCLUDED_)
