#include <stdio.h>

int main(){
	//multiplication table in reverse way
	
	int i,n;
	
	printf("Enter The Value of N : ");
	scanf("%d",&n);
	
	for(i=10;i;i--){
		printf("\n%d * %d = %d",n, i, n*i);
	}
	
	
	return 0;
}
