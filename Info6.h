#if !defined(AFX_INFO6_H__90AB7561_9F43_11D7_8BDB_00E07D8670F0__INCLUDED_)
#define AFX_INFO6_H__90AB7561_9F43_11D7_8BDB_00E07D8670F0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Info6.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CInfo6 dialog

class CInfo6 : public CDialog
{
// Construction
public:
	CBitmapButton m_aceptar;
	CInfo6(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CInfo6)
	enum { IDD = IDD_INFO6 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CInfo6)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CInfo6)
	virtual void OnCancel();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INFO6_H__90AB7561_9F43_11D7_8BDB_00E07D8670F0__INCLUDED_)
