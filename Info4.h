#if !defined(AFX_INFO4_H__DA25483A_D201_4243_BB0D_99906B0A05FF__INCLUDED_)
#define AFX_INFO4_H__DA25483A_D201_4243_BB0D_99906B0A05FF__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// Info4.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CInfo4 dialog

class CInfo4 : public CDialog
{
// Construction
public:
	CBitmapButton m_aceptar;
	CInfo4(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CInfo4)
	enum { IDD = IDD_INFO4 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CInfo4)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CInfo4)
	virtual void OnCancel();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INFO4_H__DA25483A_D201_4243_BB0D_99906B0A05FF__INCLUDED_)
