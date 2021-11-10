#include "SpreadSheet.h"

SpreadSheet* mycellp = new SpreadSheet();
mycellp->setValue(3.7);
cout << "cell 1:" << mycellp->getValue() << "" << mycellp->getString() << endl;
delete mycellp;
mycellp = nullptr;