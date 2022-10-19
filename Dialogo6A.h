#if !defined(AFX_DIALOGO6A_H__9C003FF9_2A5F_4D36_B6F4_6B8244F0D237__INCLUDED_)
#define AFX_DIALOGO6A_H__9C003FF9_2A5F_4D36_B6F4_6B8244F0D237__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// Dialogo6A.h : header file
//

#define VAR2CTRL FALSE
#define CTRL2VAR TRUE

/////////////////////////////////////////////////////////////////////////////
// CDialogo6A dialog

class CDialogo6A : public CDialog
{
// Construction
public:
	CBitmapButton m_atras;
	CBitmapButton m_seguir;
	CDialogo6A(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDialogo6A)
	enum { IDD = IDD_DLG6A1 };
	CString	m_passphrase1a;
	CString	m_passphrase2a;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialogo6A)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDialogo6A)
	afx_msg void OnAtras6a();
	afx_msg void OnSeguir6a();
	afx_msg void OnUpdateEditpassa1();
	afx_msg void OnUpdateEditpassa2();
	virtual void OnCancel();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};
//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGO6A_H__9C003FF9_2A5F_4D36_B6F4_6B8244F0D237__INCLUDED_)
