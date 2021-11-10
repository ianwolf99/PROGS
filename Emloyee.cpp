#include <iostream>
#include "employeestruct.h"

using namespace  std;

int main()
{
	Employee anEmloyee;
	anEmloyee.firstInitial = 'I';
	anEmloyee.lastInitial = 'D';
	anEmloyee.employeeNumber = 810;
	anEmployee.salary = 900000;
	//outut the values of an employee
	cout << "Employee: " << anEmloyee.firstInitial <<
							anEmloyee.lastInitial << endl;
	cout << "Number: " <<anEmployee.employeeNumber << endl;
	cout << "salary: " << anEmployee.salary << endl;
	return 0;						
}