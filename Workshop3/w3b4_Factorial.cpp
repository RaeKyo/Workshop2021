#include <stdio.h>
// FACTORIAL
int fac(int);

int main(){
	int n;
	do{
		printf("Enter the positive number N = ");
		scanf("%d",&n);
	}while(n<0);
	printf("Factorial of N = %4d",fac(n));
	
	
	getchar();
	return 0;
}

int fac(int n){
	int p=1;
	for(int i=1;i<=n;i++) p*=i;
	return p;
}
