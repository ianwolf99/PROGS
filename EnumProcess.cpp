const int MaxCount = 1024;
DWORD pids[MaxCount];
DWORD actualsize;
if(::EnumProcesses(pids, sizeof(pids), &actualsize)){
	//assume actualsize > sizeof(pids)
	int count = actualsize / sizeof(DWORD);
	for(int i = 0; i < count; i++){
		//do something with pids[1i]
	}
}