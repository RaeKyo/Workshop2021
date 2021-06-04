#include<stdio.h>
// FIBONACCI SEQUENCDE
void fibo(int);

int main(){
	int n;
	do{
		printf("Enter positive number :");
		scanf("%d",&n);
	}while (n<0);
	fibo(n);
	
	
	getchar();
	return 0;
}

void fibo(int n){
	int count,t3=1;
	int t1=1,t2=1; //initial value of [0][1]
	for(count=1;count<=n;count++){
		if(count<3){
			printf("%5d",t1);
		}else{
		t3=t1+t2;
		t1=t2;
		t2=t3;
		printf("%5d",t3);
		}
		
	}
}
