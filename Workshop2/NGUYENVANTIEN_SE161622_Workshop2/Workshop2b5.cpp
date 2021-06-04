#include <stdio.h>
#include <ctype.h>// 
//vowels : nguyen am  : u -e -o -a - i :))
//consonants : phu am  : con lai

int main(){
	char ch;
	int noVowels=0 ,noCons=0;
	
		printf("Enter the string  : ");
	do{
		ch=getchar();
		
		//Conver the string to UPPER CASE  -->in libary	<ctype.h>	
		ch = toupper(ch);
		if(ch >= 'A' && ch <='Z'){
			switch(ch){
				case 'A' : case 'E' : case 'I' : case 'O' : case 'U': 
				noVowels ++;
				break;
				default : 
				noCons ++;
			}
		}
	}while(ch!=10);
	
	
	printf("\nNumber of Vowel  : %d",noVowels);
	printf("\nNumber of Consonant : %d",noCons);	
	getchar();
	return 0;
}

