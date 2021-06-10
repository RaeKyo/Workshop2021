#include <stdio.h>
void getNum();
int min_max(int);
int sumDigit(int);
int main(){
	getNum();
	getchar();
	return 0;
}


void getNum(){
	int n,res;
	printf("Enter the number :");
	scanf("%d",&n);
//	res=sumDigit(n);
	res=min_max(n);
	printf("SUM of digit =  %d",res);
	printf("\n");
}

int min_max(int n){
	int sum=0,re=0;
	do{
		re=n%10;
		n/=10;
		sum+=re;
	}while(n>0);
	
	return sum;
}



int sumDigit(int n){
	int re=0,sum=0;
	do{
		re=n%10;
		n/=10;
		sum+=re;
	}while(n>0);
	return sum;
	
}
