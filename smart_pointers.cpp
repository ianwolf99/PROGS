void safe_notleaky()
{
	auto SimpleSmartPointer = make_unique<simple>();
	SimpleSmartPointer->go(); //the arrow is for dereferencing the pointer
}

//deallocation is handleed in a smart way
//use make_unique() to create a unique pointer

auto myVariableSizedArray = make_unique<int[]>(50);
// smart pointers with an array
