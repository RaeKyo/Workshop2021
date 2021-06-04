#include<stdio.h>
// CHECK NUMBER IS FIBONACCI ELEMENT
int checkFibo(int);

int main(){
	int n=0,s=0;
	do{
		printf("Enter positive number (non-zero) :");
		scanf("%d",&n);
		s=checkFibo(n);
		if (s==1){
			printf("%d is a Fibonacci element !!\n",n);	
		}else printf("%d is Not a Fibonacci element !!\n",n);
	
	}while (n<0);
	
	
	getchar();
	return 0;
}


int checkFibo(int n){
	int flag=1;
	int t1=1,t2=1,f=1;
	while(f<n){
		f=t1+t2;
		t1=t2;
		t2=f;
		
	}
	if(n==1) flag=1;
	if(n==f) flag=1;
		else flag =0;
	return flag;
}
