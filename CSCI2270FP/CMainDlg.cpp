// CMainDlg.cpp : implementation file
//
#include <afxwin.h>
#include "CMainDlg.h"
#include "afxdialogex.h"
#include "mainFrame.h"
#include "stdafx.h"
#include "Contacts.h"


// CMainDlg dialog

CMainDlg::CMainDlg(CWnd* pParent) : CDialog(IDD_DIALOG_MAIN, pParent) {
}


CMainDlg::~CMainDlg() {
}

BOOL CMainDlg::OnInitDialog() {
	CDialog::OnInitDialog();
	return TRUE;
}

void CMainDlg::DoDataExchange(CDataExchange* pDX) {
	CDialog::DoDataExchange(pDX);
	//Sends messages to parent
	DDX_Control(pDX, IDC_MAIN_DISPLAY, m_MainDisplay);	//Main Display
	DDX_Control(pDX, IDC_USEREDIT_SEARCH, m_UserEdit);	//UserEdit
	DDX_Control(pDX, IDC_FIRSTNAMEEDIT, m_FirstName);	//First Name
	DDX_Control(pDX, IDC_LASTNAMEEDIT, m_LastName);		//Last Name
	DDX_Control(pDX, IDC_PhoneEdit, m_PhoneNum);		//Phone Number
	DDX_Control(pDX, IDC_BIRTHDATEPICK, m_Birthdate);	//Birth Date
	DDX_Control(pDX, IDC_ADDRESSEDIT, m_Address);		//Address
	DDX_Control(pDX, IDC_EMAILEDIT, m_Email);			//Email
	DDX_Control(pDX, IDC_NUMBEREDIT, m_Number);			//Number (User input)
}

IMPLEMENT_DYNAMIC(CMainDlg, CDialog)
BEGIN_MESSAGE_MAP(CMainDlg, CDialog)
END_MESSAGE_MAP()