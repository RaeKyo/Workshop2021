#include <stdio.h>

int func(int*,int*);

int main(){
	int  a=3,b=4,c;
	c=func(&a,&b);
	printf("Value = %d",c);	
	getchar();
	return 0;
}

int func(int *p,int *q){
	int res;
	int t=(*p) + (*q) ? 5:6;
	res=2*t%5;
	return res;
}
