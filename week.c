#include <stdio.h>
int main(){
	int n;
	void printday(int);
	printf("Enter a day from 1 to 7:");
	scanf("%d",&n);
	printday(n)
}
void printday(int d){
	
	if(d == 1) printf("sunday\n");
	else if(d == 2)printf("monday\n");
	else if(d == 3)printf("tuesday\n");
	else if(d == 4)printf("wednesday\n");
	else if(d == 5)printf("thursday\n");
	else if(d == 6)printf("friday\n");
	else if(d == 7)printf("saturday");
	else printf("Invalid day");
}