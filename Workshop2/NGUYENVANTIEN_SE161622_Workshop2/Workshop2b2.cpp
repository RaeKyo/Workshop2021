#include <stdio.h>

int main(){
	double income,taxFree,taxIncome,tax;
	int n; //dependent
	const int  pa=9000000; // pa : personal amount
	const int  pd=3600000; // pd : D_ependent
	printf("Income per year : ");
	scanf("%lf",&income);
	printf("Number of dependent : ");
	scanf("%d",&n);
	
	//tax-free per year  : 
	taxFree = 12*(pa+n*pd);
	taxIncome = income - taxFree;
	if(taxIncome <=0 ){
		taxIncome=0;
		tax=0;
	}else if(taxIncome <=5000000){
		tax=taxIncome*0.05;
	}else if(taxIncome <=10000000){
		tax=taxIncome*0.1;
	}else if(taxIncome <=18000000){
		tax=taxIncome*0.15;
	}else {
		tax=taxIncome*0.2;
	}
		
	
//	printf("Income per moth : %.2lf\n",income/12);	
	printf("\nTax-free income : %.2lf$\n",taxFree);
	printf("Taxable income : %.2lf$\n",taxIncome);
	printf("Income tax : %.2lf$\n",tax);
	
	
	getchar();	
	return 0;
}
