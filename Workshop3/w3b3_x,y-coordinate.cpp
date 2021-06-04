#include <stdio.h>
#include <math.h>

// 	Program with (x,y-coordinate(0,0))
//  R is the Radius of the circle 0,0
//  x,y is the point need to check 
//  the distance between 2 point in space is : d^2=x^2 + y^2 -- 2 point from (0,0) to this point !!
// d>r: distance > radius of circle (0,0) --> OUT 
// d<r: distance < radius of circle (0,0) --> IN
// d=r: distance = radius of circle (0,0) --> ON (0,0) origin coordinate 

int getRelPos(double,double,double);
int main(){
	double x,y,r=0;
	int res;
	printf("Enter x-coordinate :");
	scanf("%lf",&x);
	printf("Enter y-coordinate :");
	scanf("%lf",&y);
	do{
		printf("Enter the radius of the circle (non-negative):");
		scanf("%lf",&r);
	}while (r<0);
	res=getRelPos(x,y,r);
	if(res==1){
		printf("The point is IN the circle !!");		
	}else if(res<1){
		printf("The point is OUT of the circle !!");
	}else printf("The point is ON the circle !!\n");
	
	
	
	getchar();
	return 0;
}


int getRelPos(double x,double y,double r){
	int res =1;
	double d = sqrt(x*x + y*y);
//	double R=r;
	if(d<r) res= 1;
	else if(d>r) res=-1;
	else res=0 ;
	return res;
}
