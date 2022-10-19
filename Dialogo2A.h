#if !defined(AFX_DIALOGO2A_H__99975E50_4E57_4D3C_8465_5F6B0EAC12D9__INCLUDED_)
#define AFX_DIALOGO2A_H__99975E50_4E57_4D3C_8465_5F6B0EAC12D9__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// Dialogo2A.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDialogo2A dialog

class CDialogo2A : public CDialog
{
// Construction
public:
	CBitmapButton m_examinar;
	CBitmapButton m_atras;
	CBitmapButton m_seguir;
	CDialogo2A(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDialogo2A)
	enum { IDD = IDD_DLG2A };
	CString	m_pathfile;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialogo2A)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDialogo2A)
	afx_msg void OnAtras2a();
	afx_msg void OnSeguir2a();
	afx_msg void OnExaminarA();
	afx_msg void OnUpdateEditpath1();
	virtual void OnCancel();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGO2A_H__99975E50_4E57_4D3C_8465_5F6B0EAC12D9__INCLUDED_)
