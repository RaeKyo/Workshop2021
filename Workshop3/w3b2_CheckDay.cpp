#include <stdio.h>
// CHECK DAY IS VALID OR NOT


int checkD(int,int,int);

int main(){
	int d,m,y;
	printf("Enter DAY/MONTH/YEAR :");
	scanf("%d%d%d",&d,&m,&y);
	int c= checkD(d,m,y);
	if(c==1) printf("YES");
	else printf("NO");
	
	getchar();
	return 0;
}


int checkD(int d,int m, int y){
	int maxD=31;// set limitDay
	
	if(m<1 || m>12 || d<1 || d>31)
		return 0;
	
	// Check 2th month 29 ~ 28 days
	if(m==2){
		/*Leap year*/
		if ( ((y % 4 == 0) 
		&& (y % 100 != 0)) 
		|| (y % 400 == 0)) 
		maxD=29;
    	else 
		maxD=28;
	}
	
	// Check month have 30 days
	if(m==4 || m==6 || m==9 || m==11)
		maxD=30;
			
	return (d<=maxD);
}

