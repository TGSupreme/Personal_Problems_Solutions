#include <stdio.h>

int main(){
	//write a programme to calculate the sum of the numbers occuring 
	//in the multiplication table of 8
	int i,n,sum=0;
	
	printf("Enter The Value OF N : ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++){
		printf("\n%d * %d = %d", n, i, n*i);
		sum += (n*i);
	}
	
	printf("\n\nSum of the numbers aocuring in this table is : %d",sum);
	
	return 0;
}
