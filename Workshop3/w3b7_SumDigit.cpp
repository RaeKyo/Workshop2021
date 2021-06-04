#include<stdio.h>
// SUM DIGIT OF INPUT

int sumDigit(int);
int main(){
	int n=0,s=0;
	do{
		printf("Enter n (-n to end) :");
		scanf("%d",&n);	
		s=sumDigit(n);	
		printf("Result  = %d\n",s);
	}while(n>=0);
	printf("Program end !");
	
	getchar();
	return 0;
}

int sumDigit(int n){
	int re=0,m=0,sum=0;
	do{
		re=n%10;
		n/=10;
		sum+=re;
		
	}while(n>0);
	return sum;
	
}
