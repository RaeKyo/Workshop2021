#include <stdio.h>

void T(int*,int*);

int main(){
	int a=7 , b=6;
	
	printf("Swap 2 number : \n");
	printf("a = %d   &&   b = %d\n",a,b);
	printf("\nAfter swap ...\n");
	T(&a,&b);
	printf("a = %d   &&   b = %d",a,b);
	getchar();
	return 0 ;	
}


void T(int *p,int *q){
	int t;
	t=*p;
	*p=*q;
	*q=t;
}
