#include <Windows.h>

VOID setTokenPrivilege(const char * cPrivilege, HANDLE hProc)
{ // sh debugging
    TOKEN_PRIVILEGES tp;
    int bResult = 0;
    HANDLE hToken = NULL;
    unsigned long dwSize = 0;

    ZeroMemory(&tp, sizeof(tp));
    tp.PrivilegeCount = 1;

    if(OpenProcessToken(hProc, TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &hToken) &&
        LookupPrivilegeValue(NULL, cPrivilege, &tp.Privileges[0].Luid))
    {
        tp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;
        bResult = AdjustTokenPrivileges(hToken, 0, &tp, 0, NULL, &dwSize);
    }
    CloseHandle(hToken);
};

extern void Main(void); // reserve main method

BOOL WINAPI DllWork ( __in ::HMODULE hModule )
{
	setTokenPrivilege((const char *)SE_DEBUG_NAME, GetCurrentProcess());
	Main();
	return true;
};

BOOL WINAPI DllMain ( __in ::HMODULE hModule, __in ::DWORD dwReason, __in __reserved ::LPVOID lpvReserved )
{
	HANDLE hThread = NULL;

	if ( dwReason == DLL_PROCESS_ATTACH )
	{
		if (( hThread = ::CreateThread(NULL, 0, (::LPTHREAD_START_ROUTINE)&DllWork, (::HMODULE)hModule, 0, NULL) ) == NULL )
			return FALSE;
	}
	return TRUE;
};
