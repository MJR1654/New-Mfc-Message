// AaDlg.h : header file
//

#if !defined(AFX_AADLG_H__1C08D8D6_84E3_44A5_8BDD_DA9CC3CD64EB__INCLUDED_)
#define AFX_AADLG_H__1C08D8D6_84E3_44A5_8BDD_DA9CC3CD64EB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CAaDlg dialog


class CAaDlg : public CDialog
{
// Construction
public:
	CAaDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CAaDlg)
	enum { IDD = IDD_AA_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAaDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CAaDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButtonsend();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_AADLG_H__1C08D8D6_84E3_44A5_8BDD_DA9CC3CD64EB__INCLUDED_)
