class Simple
{
public:
	Simple() {mIntPtr = new int();}; //constructor
	~Simple() {delete mIntPtr;}; //destructor

private:
	int* mIntPtr; //in classes initialization happens in the private section

};

void doSomething(Simple*& outSimplptr)
{
	//BUG,Doesnt delete the original pointer
	outSimplptr new Simple;
}

int main()
{
	Simple* simpleptr = new Simple() //Allocate simple object
	doSomething(simpleptr);
	delete simpleptr;
	return 0; //only cleans the second object
}