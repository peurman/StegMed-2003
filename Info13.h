#if !defined(AFX_INFO13_H__90AB7568_9F43_11D7_8BDB_00E07D8670F0__INCLUDED_)
#define AFX_INFO13_H__90AB7568_9F43_11D7_8BDB_00E07D8670F0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Info13.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CInfo13 dialog

class CInfo13 : public CDialog
{
// Construction
public:
	CInfo13(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CInfo13)
	enum { IDD = IDD_INFO13 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CInfo13)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CInfo13)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INFO13_H__90AB7568_9F43_11D7_8BDB_00E07D8670F0__INCLUDED_)
