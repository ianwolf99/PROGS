int* myIntergerPointer;
int* myIntergerPointer = nullptr;
//use new operator to allocate memory
myIntergerPointer = new int;
*myIntergerPointer  = 8;
//deallocate memory
delete myIntergerPointer;
myIntergerPointer = nullptr;
//to prevent the pointer being used sfter being deallocated set to nullptr;
//pointers dont always point to heap memory but also the stack
int i = 8;
int* myIntergerPointer = &i;
//c++ has a sspecial way of dealing with pointers to strucures
//the arrow performs both dereferencing and field access in one step
Employee* anEmployee = getEmployee();
cout << anEmployee->salary << endl;
bool isValidSalary = (anEmployee != nullptr && anEmployee->salary > 0);
//anEmployee is only dereferenced to get salary if pointer is valid,if nullptr no derefence
//The heap can be used tto dynamically allocate arrays
int arraySize = 8;
int* myVariableSizedArray = new int[arraySize];
//the new [] operator allocates memory for an array
//now that memory is allocated work wit it as a regular stack array
myVariableSizedArray[3] = 2;
//deallocating the array brackets must be used to indicate an arrays
delete[] myVariableSizedArray;
myVariableSizedArray = nullptr;