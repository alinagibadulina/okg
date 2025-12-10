#include "stdafx.h"
#include "Lab03.h"
#include "BladeParamsDlg.h"
#include "afxdialogex.h"

// CBladeParamsDlg dialog

IMPLEMENT_DYNAMIC(CBladeParamsDlg, CDialogEx)

CBladeParamsDlg::CBladeParamsDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_BLADE_PARAMS, pParent)
	, m_bladeCount(4)
	, m_rotationSpeed(8.0)  //  8  /  
	, m_clockwise(FALSE)
{
}

void CBladeParamsDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_BLADE_COUNT, m_bladeCount);
	DDV_MinMaxInt(pDX, m_bladeCount, 2, 20);
	DDX_Text(pDX, IDC_ROTATION_SPEED, m_rotationSpeed);
	DDV_MinMaxDouble(pDX, m_rotationSpeed, 0.1, 100.0);
	DDX_Check(pDX, IDC_ROTATION_DIRECTION, m_clockwise);
}

BEGIN_MESSAGE_MAP(CBladeParamsDlg, CDialogEx)
END_MESSAGE_MAP()

