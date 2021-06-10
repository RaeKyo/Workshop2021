#include <stdio.h>
#include <math.h>
int getInterface();

int Prime(int);
void getPrime();

void min_max(int);
void getNum();

int main(){
	int c;
	do{
		c=getInterface();
		switch(c){
			case 1:  getPrime(); break;
			case 2:  getNum();   break;
			default: printf("Program end !!!");
		}
	}while (c>0 && c<3);
	
	getchar();
	return 0;
}
// menu
int getInterface(){
	int choice;
	printf("\n MENU : ");
	printf("\n1 - Process primes ");
	printf("\n2 - Min_Max digit ");
	printf("\nOther - Quit ");
	
	printf("\n---> Choice  : ");
	scanf("%d",&choice);
	
	return choice;
}



//Interface Prime 
void getPrime(){
	int n;
	printf("\nEnter the number to check Prime : ");
	scanf("%d",&n);
	int res=Prime(n);
	
	if(res==1) printf("\n%d is a Prime number ",n);
	else printf("\n%d is Not a Prime number ",n);
	printf("\n");
}

//Check Prime
int Prime(int n){
	int flag=1;
	for(int i=2;i<=n/2;i++){
		if(n%i==0) flag=0;
	}
	return flag;
}



void getNum(){
	int n,res;
	printf("Enter the number :");
	scanf("%d",&n);
	min_max(n);
	printf("\n");
}

void min_max(int n){
	int re=0,min=0,max=0;
	re=n%10;
	n/=10;
	min=max=re;
	while(n>0){
		if(min>re) min=re;
		if(max<re) max=re;
		n/=10;
		re=n%10;
	}
	printf("Max digit = %d\n",max);
	printf("Min digit = %d\n",min);
	
}







