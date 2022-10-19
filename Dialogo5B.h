#if !defined(AFX_DIALOGO5B_H__E121F65A_E441_4E28_BBA9_0488871F9E2F__INCLUDED_)
#define AFX_DIALOGO5B_H__E121F65A_E441_4E28_BBA9_0488871F9E2F__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// Dialogo5B.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDialogo5B dialog

class CDialogo5B : public CDialog
{
// Construction
public:
	CBitmapButton m_terminar;
	CDialogo5B(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDialogo5B)
	enum { IDD = IDD_DLG5B };
	CString	m_info;
	CString	m_plainfilepath;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialogo5B)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDialogo5B)
	afx_msg void OnTerminarb();
	virtual BOOL OnInitDialog();
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGO5B_H__E121F65A_E441_4E28_BBA9_0488871F9E2F__INCLUDED_)
