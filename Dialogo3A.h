#if !defined(AFX_DIALOGO3A_H__8B3BF5EF_9AAC_49A7_B65A_50BE8F250BC8__INCLUDED_)
#define AFX_DIALOGO3A_H__8B3BF5EF_9AAC_49A7_B65A_50BE8F250BC8__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// Dialogo3A.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDialogo3A dialog

class CDialogo3A : public CDialog
{
// Construction
public:
	CBitmapButton m_atras;
	CBitmapButton m_seguir;
	CDialogo3A(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDialogo3A)
	enum { IDD = IDD_DLG3A };
	int		m_tipoinfo;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialogo3A)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDialogo3A)
	afx_msg void OnAtras3a();
	afx_msg void OnSeguir3a();
	virtual void OnCancel();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGO3A_H__8B3BF5EF_9AAC_49A7_B65A_50BE8F250BC8__INCLUDED_)
