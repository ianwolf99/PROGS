char* copystring(const char* str)
{
	char* result = new Char[strlen(str) + 1]; //+ 1 fixes the bug off by one..fixed
	strcpy(result, str);
	return result;
}

char* appendStrings(const char* str1, const char* str2, const char* str3)
{
	char* result = new char[strlen(str1) + strlen(str2) + strlen(str3) + 1];
	strcpy(result, str1);
	strcat(result, str2);
	strcat(result, str3);
	return result;
}

