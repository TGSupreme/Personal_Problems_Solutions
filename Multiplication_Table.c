#include <stdio.h>

int main(){
	//multiplication table of given number
	int i,n,sum;
	
	printf("Enter The Value OF N : ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++){
		printf("\n%d * %d = %d", n, i, n*i);
		sum += (n*i);
	}
	
	
	
	return 0;
}
