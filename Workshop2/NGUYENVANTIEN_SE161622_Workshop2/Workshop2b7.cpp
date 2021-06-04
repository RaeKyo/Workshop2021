#include <stdio.h>
// fflush(stdin);   : flush  : xoa (buffer)
// stdin  : standard input 
//Enter cung tinh la char input

int main(){
	char c1,c2,t;
	int nums;
	printf("\tEnter first character : ");
	scanf("%c",&c1);
	// delete Enter key input
	fflush(stdin);
	printf("\tEnter second character : ");
	scanf("%c",&c2);

	printf("\nSTART : %c \t END : %c",c1,c2);
	//swap c1<-->c2
	if(c1>c2){
		t=c1;
		c1=c2;
		c2=t;		
	}
	//how much value from c1 --> c2
	nums= c2-c1;
	printf("\nValue : %d\n",nums);

	printf("\t Char  Decimal  Octal  Hexa\n");
	printf("\t ====  =======  =====  ====\n");
	
	for (int i=c1;i<=c2;i++){
		printf("\t| %c %6d %8o %6x |\n",i,i,i,i);
	}
	printf("\t ==========================");
	getchar();
	return 0;
}
