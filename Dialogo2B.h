#if !defined(AFX_DIALOGO2B_H__52254EEC_4AE9_4076_BDBF_3751D612E164__INCLUDED_)
#define AFX_DIALOGO2B_H__52254EEC_4AE9_4076_BDBF_3751D612E164__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// Dialogo2B.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDialogo2B dialog

class CDialogo2B : public CDialog
{
// Construction
public:
	CBitmapButton m_examinar;
	CBitmapButton m_atras;
	CBitmapButton m_seguir;
	CDialogo2B(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDialogo2B)
	enum { IDD = IDD_DLG2B };
	CString	m_pathfile2;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialogo2B)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDialogo2B)
	afx_msg void OnAtras2b();
	afx_msg void OnExaminarB();
	afx_msg void OnSeguir2b();
	afx_msg void OnUpdateEditpath2();
	virtual void OnCancel();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGO2B_H__52254EEC_4AE9_4076_BDBF_3751D612E164__INCLUDED_)
