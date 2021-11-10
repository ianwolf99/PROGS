using namespace std
//GetEnviromentVariable returns the number of characters or length
std::wstring ReadEnviromentVariable(PCWSTR nmame){
	DWORD count = ::GetEnviromentVariable(name, nullptr,0);
	if(count > 0){
		std::wstring value;
		value.resize(count);
		::GetEnviromentVariable(name, const_cast<PWSTR>(value.data()), count);
		return value;
	}
	return L"";
}