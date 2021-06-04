#include <stdio.h>
// MAKE DOUBLE FROM 2 INT 

double makeD(int, int );
int main(){
	int n1,n2;
	double m;
	printf("Enter 2 number to MakeDouble :");
	scanf("%d%d",&n1,&n2);
	printf("Integral part = %d\n",n1);
	printf("Fraction part = %d\n",n2);
	m=makeD(n1,n2);
	printf("The Double was created  = %lf",m);
	getchar();
	return 0;
}

double makeD(int n1,int n2){
	double res;
	double f=n2,inte=n1;
	// transform n2 --> fraction
		while(f>=1) {
		f/=10;		
		}
		if(inte<0) res=inte-f;
		else res=inte+f;
			
	return res;
}
