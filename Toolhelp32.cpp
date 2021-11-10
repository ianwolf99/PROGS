#include <tlhelp32.h>

HANDLE hSnapshot = ::CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
if(hSnapshot == INVALID_HANDLE_VALUE){
	//handle error
}

PROCESSENTRY32 pe;
pe.dwSize = sizeof(pe);

if(!::Process32First(hSnapshot, &pe)){
	//handle error
}

do{
	printf("PID:%6D (PPID:%6D): %ws (Threads=%d) (Priority=%d)\n",pe.th32ProcessID, pe.th32ParentProcessID, pe.szExeFile, pe.cntThreads, pe.pcPriClassBase);
}while (::Process32Next(hSnapshot, &pe));

::CloseHandle(hSnapshot);