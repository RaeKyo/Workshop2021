#include <stdio.h>
#include <math.h>
// PRIME NUMBER SEQUENCE FROM 2 TO N
int checkPrime(int);
void printPrime(int);

int main(){
	int n;
	do{
		printf("Enter the number  : ");
		scanf("%d",&n);
	}while(n<2);
	printPrime(n);
	
	getchar();
	return 0;
}


int checkPrime(int n){
	int res =1;
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0) res=0;
	}
	return res;
}

void printPrime(int n){
	int count=1;
	int value =2; // initial value from 2
	while(count<n){
		if(checkPrime(value)==1){
			printf("%4d",value);
			count++;
		}
		value++;
	}
}
