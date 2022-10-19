// StegMedDlg.h : header file
//

#if !defined(AFX_STEGMEDDLG_H__6418878F_3438_42A3_97D7_E95332F177A3__INCLUDED_)
#define AFX_STEGMEDDLG_H__6418878F_3438_42A3_97D7_E95332F177A3__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000


/////////////////////////////////////////////////////////////////////////////
// CStegMedDlg dialog

class CStegMedDlg : public CDialog
{
// Construction
public:
	CBitmapButton m_ocultar;
	CBitmapButton m_rescatar;
	CStegMedDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CStegMedDlg)
	enum { IDD = IDD_DLG1 };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CStegMedDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation

	HICON m_hIcon;
protected:
	// Generated message map functions
	//{{AFX_MSG(CStegMedDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnEmbed();
	afx_msg void OnExtract();
	afx_msg void OnAcerca();
	afx_msg void OnSalir();
	afx_msg void OnMcontenido();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STEGMEDDLG_H__6418878F_3438_42A3_97D7_E95332F177A3__INCLUDED_)
