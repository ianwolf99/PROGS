#include <stdio.h>
int main(){
	int n1, n2;
	int max(int,int);
	printf("Enter two hole numbers:");
	scanf("%d %d, &n1, &n2");
	while (n1 != 0 || n2 != 0){
		printf("the bigger is %d\n", max(n1,n2));
		printf("Enter to whole numbers: ");
		scanf("%d %d,&n1, n2");
	}

	int max(int a, int b){
		if(a>b) return a;
		return b;
	}

}