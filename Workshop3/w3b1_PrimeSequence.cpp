#include <stdio.h>
#include <math.h>
// PRIME NUMBER SEQUENCE
int checkPrime(int);
void printPrime(int);

int main(){
	int n;
	printf("Enter the number  : ");
	scanf("%d",&n);
	printPrime(n);
	
	getchar();
	return 0;
}


int checkPrime(int v){
	int res =1;
	for (int i=2;i<=sqrt(v);i++){
		if (v%i==0) res=0;
	}
	return res;
}

void printPrime(int n){
	int count=1;
	int value =2; // initial value from 2
	while(count<=n){
		if(checkPrime(value)==1){
			printf("%4d",value);
			count++;
		}
		value++;
	}
}
