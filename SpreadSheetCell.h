#include <string>
#include <string_view>
using namespace std;

class SpreadSheetCell
{
public:
	SpreadSheetCell();
	~SpreadSheetCell();
	
	void setValue(double inValue);
	double getValue() const;

	void setString(std::string_view inString);
	std::string getString() const;


private:
	double mValue;
	std::string doubleToString(double inValue) const;
	double stringToDouble(std::string_view inString) const;	
};