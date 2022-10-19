#if !defined(AFX_INFO2_H__31649C08_12D4_409A_ADC0_D2D1ACB1299A__INCLUDED_)
#define AFX_INFO2_H__31649C08_12D4_409A_ADC0_D2D1ACB1299A__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// Info2.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CInfo2 dialog

class CInfo2 : public CDialog
{
// Construction
public:
	CBitmapButton m_aceptar;
	CInfo2(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(CInfo2)
	enum { IDD = IDD_INFO2 };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CInfo2)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(CInfo2)
	virtual void OnCancel();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_INFO2_H__31649C08_12D4_409A_ADC0_D2D1ACB1299A__INCLUDED_)
