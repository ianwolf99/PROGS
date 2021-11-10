#define MaxRegularHours 40
#define OvertimeFactor 1.5

double calcNetpay(double hours, double rate){
	if(hours <= MaxRegularHours) return hours * rate;
	return MaxRegularHours * rate + (hours - MaxRegularHours) * rate * OvertimeFactor
}