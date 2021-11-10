#include "SpreadSheet.h"
using namespace std;

void SpreadSheet::setValue(double inValue)
{
	mValue = inValue;
}

double SpreadSheet::getValue() const;
{
	return mValue;
}

void SpreadSheet::setString(string_view inString)
{
	mValue = stringToDouble(inString);
}

string SpreadSheet::getString() const;
{
	return doubleToString(mValue);
}

string SpreadSheet::doubleToString(double inValue) const;
{
	return to_string(inValue);
}

double SpreadSheet::stringToDouble(string_view inString) const;
{
	return strtod(inString.data(), nullptr);
}




















