#include <stdio.h>

int getInterface();
// CHECK DAY IS VALID OR NOT
void getDay();
int checkDay(int,int,int);
//PRINT OUT THE FIBONACCI SEQUENCE
void getFibo();
int Fibo(int); 


int main(){
	int c;
	do{
		c=getInterface();							// open Interface
		switch(c){
			case 1: getDay(); break;				// go to getDay() function
			case 2: getFibo(); break;				// go to getFibo() function
			default: printf("Thanks ");
		}
	}while (c>0 && c <3);
	
	
	getchar();
	return 0;
}

int getInterface(){
	printf("\n\n1-CheckDay");
	printf("\n2-Fibonacci sequence");
	printf("\nOther - Quit");
	
	int choice;
	printf("\n--> Choice : "); 
	scanf("%d",&choice);
	printf("\n");
	
	return choice;										// return choice to main function
}


void getDay(){
	int d,m,y;
	printf("Enter the day : DD/MM/YY : ");
	scanf("%d%d%d",&d,&m,&y);							//GET DAY MONTH YEAR --> d,n,y
	if(checkDay(d,m,y))  printf("Day is Valid \n");		//(checkDay(d,m,y) return value 0 or 1 --> false or true)
	else printf("Day is NOT Valid\n");
}


int checkDay(int d,int m, int y){
	int maxd=31;										//limit day = 31
	if(d>31 || d<1 || m>12 || m<1) return 0;			//common test
	
	//Check Feb month
	if(m==2){											// month 2 have leap year 
		// Leap or not ? 
		if ( ((y % 4 == 0) 
		&& (y % 100 != 0)) 
		|| (y % 400 == 0)) 
		maxd=29;										// if it is leap year --> day =29
    	else 
		maxd=28;										// if it not leap year --> day common = 28
	}
	
	// Check month have 30 days
	if(m==4 || m==6 || m==9 || m==11)					//moth 4,6,9,11 yearly have 30 day 
		maxd=30;
	
	
	return (d<=maxd);
}

void getFibo(){
	int n;
	printf("Enter the number : ");
	scanf("%d",&n);									// initiate n and push value to n
	Fibo(n);										// Fibo funtion n value
}



int Fibo(int n){
	int t1=1,t2=1;									// first 2 digit to get sequence FIbo 1 1
	int t3,count=1;									// t3 to get next digit , count to check limit
		for(count=1;count<=n;count++){				// count 1 to n
		if(count<3){								// give the first 2 digit is 1 1
			printf("%5d",t1);
		}else {
		t3=t1+t2;									// Algorithm t3=t1+t2 --> swap t1=t2 ; t2=t3
		t1=t2;
		t2=t3;
		printf("%5d",t3);
		}
	} 
		
}



