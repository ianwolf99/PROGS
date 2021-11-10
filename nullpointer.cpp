void func(char* str) {cout << "char* version" << endl;}
void func(int i) {cout << "int version" << endl;}

int main()
{
	func(nullptr); //NULL this can cause problems
	return 0;
}

//smart pointers automatically frees memory after return shi or exceptions being thrown
auto anEmployee = make_unique<Employee>();
//do not need to call delete as it is deallocated just like that
if (anEmployee) {
	cout << "Salary:" << anEmployee->salary << endl;	
}

//for classes initializations happen the private
