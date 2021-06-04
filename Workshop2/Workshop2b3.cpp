#include <stdio.h>
int main(){
	int sum,n;
	do{
		printf("Enter the number  :");
		scanf("%d",&n);
		if(n!=0){
		sum+=n;
		printf("Sum  = %d\n",sum);
	}
		
	}while (n!=0);
	
	printf("\nProgram end !");
	
	getchar();
	return 0;
}
