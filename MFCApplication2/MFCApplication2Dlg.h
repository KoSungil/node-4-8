
// MFCApplication2Dlg.h : ��� ����
//

#pragma once
#include "afxwin.h"


// CMFCApplication2Dlg ��ȭ ����
class CMFCApplication2Dlg : public CDialogEx
{
// �����Դϴ�.
public:
	CMFCApplication2Dlg(CWnd* pParent = NULL);	// ǥ�� �������Դϴ�.

// ��ȭ ���� �������Դϴ�.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFCAPPLICATION2_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV �����Դϴ�.


// �����Դϴ�.
protected:
	HICON m_hIcon;

	// ������ �޽��� �� �Լ�
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedBtnCreate();
	afx_msg void OnEnChangeEditNum();
	CEdit m_Edit2;
};
