WCHAR name[] = L"notepad";
STARTUPINFO si = { sizeof(si)};
PROCESS_INFORMATION pi;

BOOL success = ::CreateProcess(nullptr, name, nullptr, nullptr, FALSE,0,nullptr, nullptr, &si, &pi);
if(!success){
	printf("Error creating process: %d\n", ::GetLastError());
}
else{
	printf("process created:PID=%d\n",pi.dwProcessId );
	::CloseHandle(pi.hProcess);
	::CloseHandle(pi.hThread);
}

WCHAR path[MAX_PATH];
::GetFullPathName(L"c:mydata.txt", MAX_PATH, path, nullptr);