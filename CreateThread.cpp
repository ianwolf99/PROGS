DWORD WINAPI DoWork(PVOID) {
	printf("Thread Id running DoWork: %u\n", ::GetCurrentThreadId());
	//stimulates hard wrk
	::Sleep(3000);
	//return a result
	return 42;
}

int main(){
	Handle hThread = ::CreateThread(nullptr,0,DoWork, nullptr, 0,nullptr);
	if(!hThread){
		printf("Failed to create thread(error=%d)\n", ::GetLastError());
		return 1;
	}

	//printf ID of the  main thread
	printf("Main thread ID: %u\n", ::GetCurrentThreadId());
    
    //wait for thread t finish
    ::waitforSingleObject(hThread, IFNITE);

    DWORD result;
    ::GetExitCodeThread(hThread, &result);
    printf("Thread done. Result: %u\n", result);

    ::CloseHandle(hThread);
    return 0;

}
