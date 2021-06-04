#include <stdio.h>
// MAXIMUN AND MINIMUM _ DIGIT OF INPUT : 

void find_mM(int n){
	int re,min,max;
	re = n%10; // last digit
	n/=10; // -1 digit
	min = max = re; // min = max = digit (****(re))
	while (n>0){
		if(max < re) max =re; // digit+1 >re -->max=re
		if(min > re) min =re; // digit+1 <re -->min=re
		n=n/10;	// -1 digit 
		re=n%10;
		
	}
	printf("The Maximun digits = %d\n",max);
	printf("The Minimun digits = %d\n",min);
	
}


int main(){
	int n;
	do{
		printf("Enter n = ");
		scanf("%d",&n);
	}while (n<=0);
	find_mM(n);
	
	getchar();
	return 0;
}
