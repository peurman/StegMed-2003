#if !defined(AFX_INFO9_H__90AB7564_9F43_11D7_8BDB_00E07D8670F0__INCLUDED_)
#define AFX_INFO9_H__90AB7564_9F43_11D7_8BDB_00E07D8670F0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Info9.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CInfo9 dialog

class CInfo9 : public CDialog
{
// Construction
public:
	CBitmapButton m_aceptar;
	CInfo9(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CInfo9)
	enum { IDD = IDD_INFO9 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CInfo9)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CInfo9)
	virtual BOOL OnInitDialog();
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INFO9_H__90AB7564_9F43_11D7_8BDB_00E07D8670F0__INCLUDED_)
