#include <stdio.h>

void getNumber(int *n){
	scanf("%d",n);
}

void printResult(int n){
	int i;

	for(i=1;i<=9;i++){
		printf("%d * %d = %d\n",n,i,n*i);
	}
}

int main(void){
	int n;

	getNumber(&n);
	// get number from user

	printResult(n);
	// print result of "n*1" to "n*9"

	return 0;
}
