#include <stdio.h>
int main(){
	int n1,n2; //temporary memory to swap 
	do{
		
	printf("\nEnter 2 number(0 to exit) : ");
	scanf("%d%d",&n1,&n2);
	int t=n1;
		n1=n2;
		n2=t;
	printf("\nnum1 :%d\tnum2 :%d",n1,n2);
	}while(n1!=0 && n2!=0);
	printf("\nProgram end !");
	getchar();
	return 0;
}
