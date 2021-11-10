HANDLE hFile = ::CreateFile(LR"c:\temp\mydata.txt",GENERIC_WRITE,0,nullptr,CREATE_NEW,0,nullptr);
if(hFile != INVALID_HANDLE_VALUE){
	char text[] = "Hello frm windows!";
	DWORD bytes;
	::WriteFile(hFile, text, ::strlen(text), &bytes, nullptr);
	::CloseHandle(hFile);
}

