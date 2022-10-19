// Info13.cpp : implementation file
//

#include "stdafx.h"
#include "StegMed.h"
#include "Info13.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CInfo13 dialog


CInfo13::CInfo13(CWnd* pParent /*=NULL*/)
	: CDialog(CInfo13::IDD, pParent)
{
	//{{AFX_DATA_INIT(CInfo13)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}


void CInfo13::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CInfo13)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CInfo13, CDialog)
	//{{AFX_MSG_MAP(CInfo13)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CInfo13 message handlers
