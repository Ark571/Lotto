
// LOTTODlg.cpp: 구현 파일
//

#include "pch.h"
#include "framework.h"
#include "LOTTO.h"
#include "LOTTODlg.h"
#include "afxdialogex.h"
#include <random>
#include <ctime>
#include <algorithm>
#include <set>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// 응용 프로그램 정보에 사용되는 CAboutDlg 대화 상자입니다.

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();
	void CheckLimit();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

// 구현입니다.
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CLOTTODlg 대화 상자



CLOTTODlg::CLOTTODlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_LOTTO_DIALOG, pParent)
	, m_A(_T(""))
	, m_B(_T(""))
	, m_C(_T(""))
	, m_D(_T(""))
	, m_E(_T(""))
	, m_F(_T(""))
	, m_G(_T(""))
	, m_H(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CLOTTODlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_LBString(pDX, IDC_LIST1, m_A);
	DDX_LBString(pDX, IDC_LIST2, m_B);
	DDX_LBString(pDX, IDC_LIST3, m_C);
	DDX_LBString(pDX, IDC_LIST4, m_D);
	DDX_LBString(pDX, IDC_LIST5, m_E);
	DDX_LBString(pDX, IDC_LIST6, m_F);
	DDX_LBString(pDX, IDC_LIST7, m_G);
	DDX_LBString(pDX, IDC_LIST8, m_H);
}

BEGIN_MESSAGE_MAP(CLOTTODlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTT_EXIT_LOTTO, &CLOTTODlg::OnBnClickedButtExitLotto)
	ON_BN_CLICKED(IDC_CHECK1, &CLOTTODlg::OnBnClickedCheck1)
	ON_BN_CLICKED(IDC_CHECK2, &CLOTTODlg::OnBnClickedCheck2)
	ON_BN_CLICKED(IDC_CHECK3, &CLOTTODlg::OnBnClickedCheck3)
	ON_BN_CLICKED(IDC_CHECK4, &CLOTTODlg::OnBnClickedCheck4)
	ON_BN_CLICKED(IDC_CHECK5, &CLOTTODlg::OnBnClickedCheck5)
	ON_BN_CLICKED(IDC_CHECK6, &CLOTTODlg::OnBnClickedCheck6)
	ON_BN_CLICKED(IDC_CHECK7, &CLOTTODlg::OnBnClickedCheck7)
	ON_BN_CLICKED(IDC_CHECK8, &CLOTTODlg::OnBnClickedCheck8)
	ON_BN_CLICKED(IDC_CHECK9, &CLOTTODlg::OnBnClickedCheck9)
	ON_BN_CLICKED(IDC_CHECK10, &CLOTTODlg::OnBnClickedCheck10)
	ON_BN_CLICKED(IDC_CHECK11, &CLOTTODlg::OnBnClickedCheck11)
	ON_BN_CLICKED(IDC_CHECK12, &CLOTTODlg::OnBnClickedCheck12)
	ON_BN_CLICKED(IDC_CHECK13, &CLOTTODlg::OnBnClickedCheck13)
	ON_BN_CLICKED(IDC_CHECK14, &CLOTTODlg::OnBnClickedCheck14)
	ON_BN_CLICKED(IDC_CHECK15, &CLOTTODlg::OnBnClickedCheck15)
	ON_BN_CLICKED(IDC_CHECK16, &CLOTTODlg::OnBnClickedCheck16)
	ON_BN_CLICKED(IDC_CHECK17, &CLOTTODlg::OnBnClickedCheck17)
	ON_BN_CLICKED(IDC_CHECK18, &CLOTTODlg::OnBnClickedCheck18)
	ON_BN_CLICKED(IDC_CHECK19, &CLOTTODlg::OnBnClickedCheck19)
	ON_BN_CLICKED(IDC_CHECK20, &CLOTTODlg::OnBnClickedCheck20)
	ON_BN_CLICKED(IDC_CHECK21, &CLOTTODlg::OnBnClickedCheck21)
	ON_BN_CLICKED(IDC_CHECK22, &CLOTTODlg::OnBnClickedCheck22)
	ON_BN_CLICKED(IDC_CHECK23, &CLOTTODlg::OnBnClickedCheck23)
	ON_BN_CLICKED(IDC_CHECK24, &CLOTTODlg::OnBnClickedCheck24)
	ON_BN_CLICKED(IDC_CHECK25, &CLOTTODlg::OnBnClickedCheck25)
	ON_BN_CLICKED(IDC_CHECK26, &CLOTTODlg::OnBnClickedCheck26)
	ON_BN_CLICKED(IDC_CHECK27, &CLOTTODlg::OnBnClickedCheck27)
	ON_BN_CLICKED(IDC_CHECK28, &CLOTTODlg::OnBnClickedCheck28)
	ON_BN_CLICKED(IDC_CHECK29, &CLOTTODlg::OnBnClickedCheck29)
	ON_BN_CLICKED(IDC_CHECK30, &CLOTTODlg::OnBnClickedCheck30)
	ON_BN_CLICKED(IDC_CHECK31, &CLOTTODlg::OnBnClickedCheck31)
	ON_BN_CLICKED(IDC_CHECK32, &CLOTTODlg::OnBnClickedCheck32)
	ON_BN_CLICKED(IDC_CHECK33, &CLOTTODlg::OnBnClickedCheck33)
	ON_BN_CLICKED(IDC_CHECK34, &CLOTTODlg::OnBnClickedCheck34)
	ON_BN_CLICKED(IDC_CHECK35, &CLOTTODlg::OnBnClickedCheck35)
	ON_BN_CLICKED(IDC_CHECK36, &CLOTTODlg::OnBnClickedCheck36)
	ON_BN_CLICKED(IDC_CHECK37, &CLOTTODlg::OnBnClickedCheck37)
	ON_BN_CLICKED(IDC_CHECK38, &CLOTTODlg::OnBnClickedCheck38)
	ON_BN_CLICKED(IDC_CHECK39, &CLOTTODlg::OnBnClickedCheck39)
	ON_BN_CLICKED(IDC_CHECK40, &CLOTTODlg::OnBnClickedCheck40)
	ON_BN_CLICKED(IDC_CHECK41, &CLOTTODlg::OnBnClickedCheck41)
	ON_BN_CLICKED(IDC_CHECK42, &CLOTTODlg::OnBnClickedCheck42)
	ON_BN_CLICKED(IDC_CHECK43, &CLOTTODlg::OnBnClickedCheck43)
	ON_BN_CLICKED(IDC_CHECK44, &CLOTTODlg::OnBnClickedCheck44)
	ON_BN_CLICKED(IDC_CHECK45, &CLOTTODlg::OnBnClickedCheck45)
	ON_BN_CLICKED(IDC_BUTT_PRINT_LOTTO, &CLOTTODlg::OnBnClickedButtPrintLotto)
	ON_BN_CLICKED(IDC_BUTT_ZERO_LOTTO, &CLOTTODlg::OnBnClickedButtZeroLotto)
	ON_BN_CLICKED(IDC_BUTT_ON, &CLOTTODlg::OnBnClickedButtOn)
	ON_BN_CLICKED(IDC_BUTT_OFF, &CLOTTODlg::OnBnClickedButtOff)
END_MESSAGE_MAP()


// CLOTTODlg 메시지 처리기

BOOL CLOTTODlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 시스템 메뉴에 "정보..." 메뉴 항목을 추가합니다.

	// IDM_ABOUTBOX는 시스템 명령 범위에 있어야 합니다.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 이 대화 상자의 아이콘을 설정합니다.  응용 프로그램의 주 창이 대화 상자가 아닐 경우에는
	//  프레임워크가 이 작업을 자동으로 수행합니다.
	SetIcon(m_hIcon, TRUE);			// 큰 아이콘을 설정합니다.
	SetIcon(m_hIcon, FALSE);		// 작은 아이콘을 설정합니다.

	// TODO: 여기에 추가 초기화 작업을 추가합니다.

	return TRUE;  // 포커스를 컨트롤에 설정하지 않으면 TRUE를 반환합니다.
}

void CLOTTODlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 대화 상자에 최소화 단추를 추가할 경우 아이콘을 그리려면
//  아래 코드가 필요합니다.  문서/뷰 모델을 사용하는 MFC 애플리케이션의 경우에는
//  프레임워크에서 이 작업을 자동으로 수행합니다.

void CLOTTODlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 그리기를 위한 디바이스 컨텍스트입니다.

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 클라이언트 사각형에서 아이콘을 가운데에 맞춥니다.
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 아이콘을 그립니다.
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// 사용자가 최소화된 창을 끄는 동안에 커서가 표시되도록 시스템에서
//  이 함수를 호출합니다.
HCURSOR CLOTTODlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CLOTTODlg::OnBnClickedButtExitLotto()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	OnOK();
}


void CLOTTODlg::OnBnClickedCheck1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck3()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck4()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck5()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck6()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck7()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck8()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck9()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck10()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck11()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck12()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck13()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck14()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck15()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck16()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck17()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck18()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck19()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck20()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck21()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck22()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck23()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck24()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck25()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck26()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck27()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck28()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck29()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck30()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck31()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck32()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck33()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck34()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck35()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck36()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck37()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck38()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck39()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck40()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck41()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck42()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck43()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck44()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}


void CLOTTODlg::OnBnClickedCheck45()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CheckLimit();
}

void CLOTTODlg::CheckLimit()
{
	int CheckedCount = 0; // 체크된 개수 초기화
	int firstCheckedID = -1; // 첫 번째 체크된 ID 초기화

	// 체크된 체크박스의 수를 세고 첫 번째 체크된 ID를 저장
	for (int i = 0; i < 45; i++)
	{
		if (IsDlgButtonChecked(IDC_CHECK1 + i) == BST_CHECKED)
		{
			CheckedCount++;
			if (firstCheckedID == -1)
			{
				firstCheckedID = IDC_CHECK1 + i; // 첫 번째 체크된 ID 저장
			}
		}
	}

	// 체크된 개수가 6을 초과하면
	if (CheckedCount > 6)
	{
		AfxMessageBox(TEXT("최대 6개 숫자만 선택할 수 있습니다."));

		// 체크 상태를 취소한 체크박스의 ID를 가져온다
		int currentID = GetFocus()->GetDlgCtrlID(); // 현재 포커스된 체크박스의 ID 가져오기

		// 체크된 개수를 세고, 현재 체크박스가 체크된 상태가 아니면 해제
		if (IsDlgButtonChecked(currentID) == BST_CHECKED)
		{
			CheckDlgButton(currentID, BST_UNCHECKED); // 현재 체크박스 해제
		}
		else
		{
			CheckDlgButton(firstCheckedID, BST_UNCHECKED); // 첫 번째 체크된 체크박스 해제
		}
	}
}


void CLOTTODlg::OnBnClickedButtPrintLotto()
{
	// 리스트 박스 포인터 배열
	CListBox* pListBoxes[8];
	for (int i = 0; i < 8; ++i)
	{
		pListBoxes[i] = (CListBox*)GetDlgItem(IDC_LIST1 + i);
		pListBoxes[i]->ResetContent();
	}

	std::random_device rd; //random 함수의 상위 버전?
	std::mt19937 gen(rd());//ctime보다 더 복잡한 난수 발생?
	std::uniform_int_distribution<> dis(1, 45);

	// 체크된 숫자 저장
	std::set<int> checkedNumbers;
	for (int i = 0; i < 45; ++i)
	{
		if (IsDlgButtonChecked(IDC_CHECK1 + i) == BST_CHECKED)
		{
			checkedNumbers.insert(i + 1);
		}
	}

	// 각 리스트 박스에 대해 중복되지 않는 5개의 경우 생성
	for (int boxIndex = 0; boxIndex < 8; ++boxIndex)
	{
		std::set<int> uniqueNumbers = checkedNumbers; // 현재 박스에 체크된 숫자 포함
		std::set<int> usedNumbers; // 중복 방지를 위한 집합

		while (uniqueNumbers.size() < 6) // 6개가 될 때까지 랜덤 추가
		{
			int randomNumber = dis(gen);

			// 중복되지 않고, 체크된 숫자가 아닌 경우에만 추가
			if (usedNumbers.find(randomNumber) == usedNumbers.end() &&
				uniqueNumbers.find(randomNumber) == uniqueNumbers.end())
			{
				uniqueNumbers.insert(randomNumber);
				usedNumbers.insert(randomNumber); // 사용한 숫자 기록
			}
		}

		// 결과 출력
		CString outputStr;
		for (const int& num : uniqueNumbers)
		{
			CString str;
			str.Format(TEXT("%d"), num);
			outputStr += str + TEXT(", ");
			
		}

		// 마지막 쉼표 제거
		if (!outputStr.IsEmpty())
		{
			outputStr.TrimRight(TEXT(", "));
			
		}

		// 해당 리스트 박스에 출력
		pListBoxes[boxIndex]->AddString(outputStr);
	}
}





void CLOTTODlg::OnBnClickedButtZeroLotto()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	CListBox* pListBoxes[8];
	for (int i = 0; i < 8; ++i)
	{
		pListBoxes[i] = (CListBox*)GetDlgItem(IDC_LIST1 + i);
		if (pListBoxes[i])
		{
			pListBoxes[i]->ResetContent();
		}
	}
	m_A = TEXT("");
	m_B = TEXT("");
	m_C = TEXT("");
	m_D = TEXT("");
	m_E = TEXT("");
	m_F = TEXT("");
	m_G = TEXT("");
	m_H = TEXT("");

	UpdateData(FALSE);
}


void CLOTTODlg::OnBnClickedButtOn()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	for (int i = 0; i < 45; ++i)
	{
		GetDlgItem(IDC_CHECK1 + i)->ModifyStyle(WS_DISABLED, 0);
	}

}


void CLOTTODlg::OnBnClickedButtOff()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	for (int i = 0; i < 45; ++i)
	{
		GetDlgItem(IDC_CHECK1 + i)->ModifyStyle(0, WS_DISABLED); // 체크박스 비활성화
	}
}
