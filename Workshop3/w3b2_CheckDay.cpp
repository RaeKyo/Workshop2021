#include <stdio.h>
// CHECK DAY IS VALID OR NOT

const int maxYR= 9999;
const int minYR= 1800;
 
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
	int flag =1;
	
	if(y>maxYR || y <minYR)
		flag=0;
	if(m<1 || m>12 || d<1 || d>31)
		flag =0;
	
	// Check 2th month 29 ~ 28 days
	if(m==2){
		/*Leap year*/
		if ( ((y % 4 == 0) 
		&& (y % 100 != 0)) 
		|| (y % 400 == 0)) 
		return (d<=29 && flag==1);
    	else 
		return (d<=28 && flag==1);
	}
	
	// Check month have 30 days
	if(m==4 || m==6 || m==9 || m==11)
		return (d<=30 && flag ==1);
		
	flag=1;
		
	
	return flag;
}

