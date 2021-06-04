#include <stdio.h>
// GREATEST COMMON DIVISOR & LEAST COMMON MULTIPLE
int gcd(int,int);
int lcm(int,int);

int main(){
	int a,b;
	int gc,lc;
	printf("Enter 2 number : ");
	scanf("%d%d",&a,&b);
	gc=gcd(a,b);
	lc=lcm(a,b);
	printf("The Greatest Common Divisor = %d\n",gc);
	printf("The Least Common Multiple =%d\n",lc);
	getchar();
	return 0;
}

int gcd(int a,int b){
	int res=0;
	// Loading ...
	while(a!=b){
		if(a>b) a-=b;
		else b-=a;
	}
	res=a;
	return res;
}

int lcm(int a,int b){
	int res=(a*b)/gcd(a,b);
}
