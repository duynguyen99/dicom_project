
#pragma once

#ifndef __AFXWIN_H__

#endif

#include "resource.h"    


class Cdcmtest1App : public CWinApp
{
public:
	Cdcmtest1App();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern Cdcmtest1App theApp;
