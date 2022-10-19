#if !defined(AFX_SPLASHDIALOG_H__B4A334E1_6E9B_11D7_8BDB_00E07D8670F0__INCLUDED_)
#define AFX_SPLASHDIALOG_H__B4A334E1_6E9B_11D7_8BDB_00E07D8670F0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SplashDialog.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CSplashDialog dialog

class CSplashDialog : public CDialog
{
// Construction
public:
	CBrush m_brush;
	CSplashDialog(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CSplashDialog)
	enum { IDD = IDD_SPLASH };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSplashDialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CSplashDialog)
	afx_msg void OnTimer(UINT nIDEvent);
	virtual BOOL OnInitDialog();
	afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SPLASHDIALOG_H__B4A334E1_6E9B_11D7_8BDB_00E07D8670F0__INCLUDED_)
