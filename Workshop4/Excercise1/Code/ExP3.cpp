#include <stdio.h>

int main(){
	char c1='A',c2='F';
	char *p1 = &c1;
	char *p2 = &c2;
	*p1 +=3;
	*p2 -=5;
	printf("Value c1 = %d\n",c1);
	printf("Value c2 = %d\n",c2);
	printf("SUB = %d",c1-c2);
	getchar();
	return 0;
}
