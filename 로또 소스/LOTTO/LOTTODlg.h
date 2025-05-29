
// LOTTODlg.h: 헤더 파일
//

#pragma once


// CLOTTODlg 대화 상자
class CLOTTODlg : public CDialogEx
{
// 생성입니다.
public:
	CLOTTODlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_LOTTO_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButtExitLotto();
	afx_msg void OnBnClickedCheck1();
	afx_msg void OnBnClickedCheck2();
	afx_msg void OnBnClickedCheck3();
	afx_msg void OnBnClickedCheck4();
	afx_msg void OnBnClickedCheck5();
	afx_msg void OnBnClickedCheck6();
	afx_msg void OnBnClickedCheck7();
	afx_msg void OnBnClickedCheck8();
	afx_msg void OnBnClickedCheck9();
	afx_msg void OnBnClickedCheck10();
	afx_msg void OnBnClickedCheck11();
	afx_msg void OnBnClickedCheck12();
	afx_msg void OnBnClickedCheck13();
	afx_msg void OnBnClickedCheck14();
	afx_msg void OnBnClickedCheck15();
	afx_msg void OnBnClickedCheck16();
	afx_msg void OnBnClickedCheck17();
	afx_msg void OnBnClickedCheck18();
	afx_msg void OnBnClickedCheck19();
	afx_msg void OnBnClickedCheck20();
	afx_msg void OnBnClickedCheck21();
	afx_msg void OnBnClickedCheck22();
	afx_msg void OnBnClickedCheck23();
	afx_msg void OnBnClickedCheck24();
	afx_msg void OnBnClickedCheck25();
	afx_msg void OnBnClickedCheck26();
	afx_msg void OnBnClickedCheck27();
	afx_msg void OnBnClickedCheck28();
	afx_msg void OnBnClickedCheck29();
	afx_msg void OnBnClickedCheck30();
	afx_msg void OnBnClickedCheck31();
	afx_msg void OnBnClickedCheck32();
	afx_msg void OnBnClickedCheck33();
	afx_msg void OnBnClickedCheck34();
	afx_msg void OnBnClickedCheck35();
	afx_msg void OnBnClickedCheck36();
	afx_msg void OnBnClickedCheck37();
	afx_msg void OnBnClickedCheck38();
	afx_msg void OnBnClickedCheck39();
	afx_msg void OnBnClickedCheck40();
	afx_msg void OnBnClickedCheck41();
	afx_msg void OnBnClickedCheck42();
	afx_msg void OnBnClickedCheck43();
	afx_msg void OnBnClickedCheck44();
	afx_msg void OnBnClickedCheck45();
	void CheckLimit();
	afx_msg void OnBnClickedButtPrintLotto();
	afx_msg void OnLbnSelchangeList6();
	CString m_A;
	CString m_B;
	CString m_C;
	CString m_D;
	CString m_E;
	CString m_F;
	CString m_G;
	CString m_H;
	afx_msg void OnBnClickedButtZeroLotto();
	afx_msg void OnBnClickedButtOn();
	afx_msg void OnBnClickedButtOff();
};
