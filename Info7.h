#if !defined(AFX_INFO7_H__90AB7562_9F43_11D7_8BDB_00E07D8670F0__INCLUDED_)
#define AFX_INFO7_H__90AB7562_9F43_11D7_8BDB_00E07D8670F0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Info7.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CInfo7 dialog

class CInfo7 : public CDialog
{
// Construction
public:
	CBitmapButton m_aceptar;
	CInfo7(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CInfo7)
	enum { IDD = IDD_INFO7 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CInfo7)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CInfo7)
	virtual BOOL OnInitDialog();
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INFO7_H__90AB7562_9F43_11D7_8BDB_00E07D8670F0__INCLUDED_)
