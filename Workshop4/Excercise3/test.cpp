#include <stdio.h>

void swap(int,int);

int main(){
	int a=5,b=10;
	printf("a = %d     b=%d\n",a,b);
	int t;
	int *pa=&a;
	int *pb=&b;
	t=*pa;
	*pa=*pb;
	*pb=t;
	printf("a = %d     b=%d",a,b);
	
	
	getchar();
	return 0;
}

	

