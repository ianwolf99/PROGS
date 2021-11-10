#include <stdio.h>

struct date
{
	int day;
	int month;
	int year;
};

int main(){
	struct date dob;
	void printDate(struct date);

	dob.day = 08;
	dob.month = 06;
	dob.year = 1999;

	printDate(dob);
}

void printDate(struct date d){
	printf("%d/%d/%d\n", d.day, d.month, d.year);
}