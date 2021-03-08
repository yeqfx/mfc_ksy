
// ExamMFC.cpp : Defines the class behaviors for the application.
//

#include "pch.h"
#include "framework.h"
#include "ExamMFC.h"
#include "ExamMFCDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CExamMFCApp

BEGIN_MESSAGE_MAP(CExamMFCApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CExamMFCApp construction

CExamMFCApp::CExamMFCApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only CExamMFCApp object

CExamMFCApp theApp;


// CExamMFCApp initialization

BOOL CExamMFCApp::InitInstance()
{
	CWinApp::InitInstance();


	CExamMFCDlg dlg;
	m_pMainWnd = &dlg;
	dlg.DoModal();

	return FALSE;
}

