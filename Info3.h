#if !defined(AFX_INFO3_H__CD5CB9CD_1ADA_47E4_83A0_E9087FEBD195__INCLUDED_)
#define AFX_INFO3_H__CD5CB9CD_1ADA_47E4_83A0_E9087FEBD195__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// Info3.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CInfo3 dialog

class CInfo3 : public CDialog
{
// Construction
public:
	CBitmapButton m_aceptar;
	CInfo3(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CInfo3)
	enum { IDD = IDD_INFO3 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CInfo3)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CInfo3)
	virtual void OnCancel();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INFO3_H__CD5CB9CD_1ADA_47E4_83A0_E9087FEBD195__INCLUDED_)
