#include <stdio.h>

FILE * in;
if((in = fopen("fuck.txt", "r")) == NULL){
	printf("File cannot be found\n");
	exit(1);
}