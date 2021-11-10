#include <SpreadSheet.h>

auto mycellp = make_unique<SpreadSheet>();

mycellp->setValue(3.7);
cout << "cell 1:" << mycellp->getValue() << " " << mycellp->getString() << endl;

//use of smart pointers so as dewallocation happens automatically