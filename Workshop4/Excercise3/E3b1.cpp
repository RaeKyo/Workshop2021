#include <stdio.h>

int t(int,int,int);
int main(){
	int a=7,b=6,c=5;
	int L=t(b,a,c);
	printf("Result = %d",L);
	
	getchar();
	return 0;
}

int t(int x, int y, int z){
	int k=2*x + 3*y +5*z;
	int res = k%13;
	return res;
}
