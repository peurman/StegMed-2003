#if !defined(AFX_INFO5_H__09EF4C88_0881_11D7_8BD6_00E07D8670F0__INCLUDED_)
#define AFX_INFO5_H__09EF4C88_0881_11D7_8BD6_00E07D8670F0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Info5.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CInfo5 dialog

class CInfo5 : public CDialog
{
// Construction
public:
	CBitmapButton m_aceptar;
	CInfo5(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CInfo5)
	enum { IDD = IDD_INFO5 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CInfo5)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CInfo5)
	virtual void OnCancel();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INFO5_H__09EF4C88_0881_11D7_8BD6_00E07D8670F0__INCLUDED_)
