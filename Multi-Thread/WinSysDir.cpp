#include <stdio.h>
#include <tchar.h>
#include <Windows.h>

#define DIR_LEN MAX_PATH+1

int _tmain(int argc, TCHAR* argv[])
{
	TCHAR sysDIR[DIR_LEN];
	TCHAR winDIR[DIR_LEN];

	GetSystemDirectory(sysDIR, DIR_LEN);

	GetWindowsDirectory(winDIR, DIR_LEN);

	_tprintf(_T("System Dir: %s \n"), sysDIR);
	_tprintf(_T("Windows Dir: %s \n"), winDIR);

	return 0;
}