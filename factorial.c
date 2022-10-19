#include <stdio.h>


int main(){
	//factorial
	int i=1,n,fact=1;
	
	printf("Enter the value of n : ");
	scanf("%d",&n);
	
//	for(i=1;i<=n;i++){
//		fact *= i;
//	}

	while(i<=n){
		fact *= i;
		i++;
	}
	printf("\n\nFactorial Of %d is : %d",n,fact);
}
