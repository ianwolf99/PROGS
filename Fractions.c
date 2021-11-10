#include <stdio.h>

typedef struct 
{
	int numerator;
	int denemurator;
} Fraction;

int main(){
	void PrintFraction(Fraction);
	Fraction f;

	printf("Enter the Numerator:");
	scanf("%d", &f.numerator);

	printf("Enter the denominator:")
	scanf("%d", &f.denemurator);

	PrintFraction(f);
}

void PrintFraction(Fraction f){
	printf("%d/%d", f.numerator, f.denemurator);
}