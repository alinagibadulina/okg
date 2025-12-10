#pragma once

#include "resource.h"

// CBladeParamsDlg dialog

class CBladeParamsDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CBladeParamsDlg)

public:
	CBladeParamsDlg(CWnd* pParent = nullptr);   // standard constructor

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_BLADE_PARAMS };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()

public:
	int m_bladeCount;
	double m_rotationSpeed;  //   ( / )
	BOOL m_clockwise;
};

