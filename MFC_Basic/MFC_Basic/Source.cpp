#include<afxwin.h>

class MyFrameWnd :public CFrameWnd //it cerates main window(CFrameWnd displays the window)
{
public:
	MyFrameWnd()
	{
		Create(0, "Tilte Name Here");
	}
};

class MyApp :public CWinApp// it manages main window (CWinApp derived from cWinThread class)
{
public:
	BOOL InitInstance()
	{
		MyFrameWnd* pFrame = new MyFrameWnd;
		m_pMainWnd = pFrame;
		pFrame->ShowWindow(1);

		return TRUE;
	}
};
MyApp myapp;
