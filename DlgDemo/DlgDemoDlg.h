
// DlgDemoDlg.h : header file
//

#pragma once


// CDlgDemoDlg dialog
class CDlgDemoDlg : public CDialogEx
{
public:
	CRect m_RectSample;
	enum { INT_DARK, INT_LIGHT };

// Construction
public:
	CDlgDemoDlg(CWnd* pParent = nullptr);	// standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLGDEMO_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	BOOL m_Red;
	BOOL m_Green;
	BOOL m_Blue;
	int m_Intensity;
	afx_msg void OnClickedGreen();
	afx_msg void OnClickedRed();
	afx_msg void OnClickedDark();
	afx_msg void OnClickedBlue();
	afx_msg void OnLight();
};
