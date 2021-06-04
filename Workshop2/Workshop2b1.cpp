#include <stdio.h>
int main(){
	double n1,n2,res;
	char op;
	
	printf("Enter the Expression (n{op}m): ");
	scanf("%lf%c%lf",&n1,&op,&n2);
	switch(op){
		case '+':
			res =n1+n2;
			printf("Result  = %.2lf",res);
			break;
		case '-':
			res =n1-n2;
			printf("Result  = %.2lf",res);
			break;
		case '*':
			res =n1*n2;
			printf("Result  = %.2lf",res);
			break;
		case '/':
			if(n2==0){
				printf("Can't devided by zero !!\n");
			}else{
				res =n1/n2;
			printf("Result  = %.2lf",res);	
			}
			break;
		default : printf("Operation is not supported !");				
	}
	
	getchar();
	return 0;
}
