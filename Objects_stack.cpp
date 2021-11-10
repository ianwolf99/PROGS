#include "SpreadSheet.h"

SpreadSheet mycell, anotherCell;
mycell.setValue(6);
anotherCell.setString("3.2");
cout << "cell 1:" << mycell.getValue() << endl;
cout << "cell 2:" << anotherCell.getValue() << endl;
