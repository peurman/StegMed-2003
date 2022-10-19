#if !defined(AFX_DIALOGO3B_H__C54CD04F_F945_488A_9954_0EAD027CB9C2__INCLUDED_)
#define AFX_DIALOGO3B_H__C54CD04F_F945_488A_9954_0EAD027CB9C2__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// Dialogo3B.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDialogo3B dialog

class CDialogo3B : public CDialog
{
// Construction
public:
	CBitmapButton m_atras;
	CBitmapButton m_seguir;
	CDialogo3B(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDialogo3B)
	enum { IDD = IDD_DLG3B };
	CString	m_passphrase1b;
	CString	m_passphrase2b;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialogo3B)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDialogo3B)
	afx_msg void OnAtras3b();
	afx_msg void OnSeguir3b();
	afx_msg void OnUpdateEditpassb1();
	afx_msg void OnUpdateEditpassb2();
	virtual void OnCancel();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGO3B_H__C54CD04F_F945_488A_9954_0EAD027CB9C2__INCLUDED_)
