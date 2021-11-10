#include "SpreadSheetCell.h"
using namespace std;

void SpreadSheetCell::setValue(double inValue)
{
	mValue = inValue;
}

double SpreadSheetCell::getValue() const;
{
	return mValue;
}

void SpreadSheetCell::setString(string_view inString)
{
	mValue = stringToDouble(inString);
}

string SpreadSheetCell::getString() const;
{
	return doubleToString(mValue);
}

string SpreadSheetCell::doubleToString(double inValue) const;
{
	return to_string(inValue);
}

double SpreadSheetCell::stringToDouble(string_view inString) const;
{
	return strtod(inString.data(), nullptr);
}




















