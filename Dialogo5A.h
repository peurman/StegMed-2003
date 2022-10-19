#if !defined(AFX_DIALOGO5A_H__055BF20B_4F24_4755_A0BA_530F747DB8A3__INCLUDED_)
#define AFX_DIALOGO5A_H__055BF20B_4F24_4755_A0BA_530F747DB8A3__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// Dialogo5A.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDialogo5A dialog

class CDialogo5A : public CDialog
{
// Construction
public:
	CBitmapButton m_corregir;
	CBitmapButton m_seguir;
	CDialogo5A(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDialogo5A)
	enum { IDD = IDD_DLG5A };
	CString	m_Info;
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialogo5A)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDialogo5A)
	afx_msg void OnCorregir5a();
	afx_msg void OnSeguir5a();
	virtual void OnCancel();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGO5A_H__055BF20B_4F24_4755_A0BA_530F747DB8A3__INCLUDED_)
