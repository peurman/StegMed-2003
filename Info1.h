#if !defined(AFX_INFO1_H__E584BB4D_3B42_4C39_98EA_5A95BA2C2F97__INCLUDED_)
#define AFX_INFO1_H__E584BB4D_3B42_4C39_98EA_5A95BA2C2F97__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// Info1.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CInfo1 dialog

class CInfo1 : public CDialog
{
// Construction
public:
	CBitmapButton m_aceptar;
	CInfo1(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CInfo1)
	enum { IDD = IDD_INFO1 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CInfo1)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CInfo1)
	virtual void OnOK();
	virtual void OnCancel();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INFO1_H__E584BB4D_3B42_4C39_98EA_5A95BA2C2F97__INCLUDED_)
