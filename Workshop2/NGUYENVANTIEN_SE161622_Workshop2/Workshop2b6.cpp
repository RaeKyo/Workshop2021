//ACSII 0 _ 256
#include <stdio.h>

int main(){
	int code=0;
	printf("\t\tACSII TABLE :\n");
	printf("\t Char Decimal Octal Hexa\n");
	printf("\t ===  ======= ===== ====");
	for(int code=0 ;code<=256 ; code++){
		printf("\t| %c %4d %6o %7x |\n",code,code,code,code);
		if (code !=0 && code %20==0) {
			printf("\t===  ======= ===== ====");
			getchar();
		}		
	}
	printf("\t ===  ======= ===== ====");
	
	
	getchar();
	return 0;
}
