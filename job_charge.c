#include <stdio.h>
#define ChargePerHour 100
#define MinJobCost 150

double calcJobcost(double hours, double parts){
	double jobCharge;
	jobCharge = hours * ChargePerHour + parts;
	if(jobCharge < MinJobCost) return MinJobCost;
}