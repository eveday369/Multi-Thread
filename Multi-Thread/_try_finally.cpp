#include <stdio.h>
#include <tchar.h>
#include <Windows.h>

int _tmain(int argc, TCHAR* argv[])
{
	int a, b;

	_try
	{
		_tprintf_s(_T("input divide string [ a / b ] : "));
		//_tscanf(_T("%d %d"), &a, &b);
		_tscanf_s(_T("%d %d"), &a, &b);
		
		if (b == 0)
			return -1;
	}
	_finally
	{
		_tprintf(_T("_finally block!\n"));
	}

	_tprintf(_T("result: %d\n"), a / b);
	return 0;
}