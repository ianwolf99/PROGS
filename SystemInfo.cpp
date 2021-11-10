SYSTEM_INFO si;
::GetSystemInfo(&si);
DisplaySystemInfo(&si, "System Infrmation");

BOOL isWow = FALSE;
if(sizeof(void*) == 4 && ::isWow64Process(::GetCurrentProcess(), &isWow) &&isWow){
	::GetNativeSystemInfo(&si);
		printf("\n");
		DisplaySystemInfo(&si, "Native System Infrmation")
}