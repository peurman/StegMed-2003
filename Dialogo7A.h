#if !defined(AFX_DIALOGO7A_H__151C584E_4ADB_4DC7_8522_9E00A3A1B41F__INCLUDED_)
#define AFX_DIALOGO7A_H__151C584E_4ADB_4DC7_8522_9E00A3A1B41F__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// Dialogo7A.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDialogo7A dialog

class CDialogo7A : public CDialog
{
// Construction
public:
	int existe_file (char *filename);
	CBitmapButton m_comezar;
	CBitmapButton m_cancelar;
	CBitmapButton m_seguir;
	CDialogo7A(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CDialogo7A)
	enum { IDD = IDD_DLG7A };
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDialogo7A)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CDialogo7A)
	afx_msg void OnCancelara();
	afx_msg void OnSeguir7a();
	afx_msg void OnEmbed();
	virtual void OnCancel();
	virtual BOOL OnInitDialog();
	afx_msg void OnTimer(UINT nIDEvent);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGO7A_H__151C584E_4ADB_4DC7_8522_9E00A3A1B41F__INCLUDED_)
