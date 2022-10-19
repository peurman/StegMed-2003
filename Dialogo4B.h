#if !defined(AFX_DIALOGO4B_H__47135792_3B0C_4F9D_B3A9_6C7B1A9A8BD3__INCLUDED_)
#define AFX_DIALOGO4B_H__47135792_3B0C_4F9D_B3A9_6C7B1A9A8BD3__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// Dialogo4B.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDialogo4B dialog

class CDialogo4B : public CDialog
{
// Construction
public:
	int existe_file (char *filename);
	CBitmapButton m_comezar;
	CBitmapButton m_cancelar;
	CBitmapButton m_seguir;
	CDialogo4B(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDialogo4B)
	enum { IDD = IDD_DLG4B };
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialogo4B)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDialogo4B)
	afx_msg void OnCancelarb();
	afx_msg void OnSeguir4b();
	afx_msg void OnExtract();
	virtual void OnCancel();
	virtual BOOL OnInitDialog();
	afx_msg void OnTimer(UINT nIDEvent);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGO4B_H__47135792_3B0C_4F9D_B3A9_6C7B1A9A8BD3__INCLUDED_)
