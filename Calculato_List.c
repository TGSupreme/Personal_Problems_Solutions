#include <stdio.h>

int main(){
//	list using switch

	float a,b;
	int n;
	
	printf("Enter The Value Of A : ");
	scanf("%f",&a);
	
	printf("\nEnter The Value Of B : ");
	scanf("%f",&b);
	
	printf("\nEnter 1 for Addition       OF A & B ");
	printf("\nEnter 2 for Subtraction    OF A & B ");
	printf("\nEnter 3 for Multiplication OF A & B ");
	printf("\nEnter 4 for Division       OF A & B ");
	
	printf("\n\nEnter The Number For Opration : ");
	scanf("%d",&n);
	
	switch(n){
		case 1:
			printf("\n\n%.2f + %.2f = %.2f",a ,b, a+b);
			break;
			
		case 2:
			printf("\n\n%.2f - %.2f = %.2f",a ,b, a-b);
			break;
			
		case 3:
			printf("\n\n%.2f * %.2f = %.2f",a ,b, a*b);
			break;
			
		case 4:
			printf("\n\n%.2f + %.2f = %.2f",a ,b, a/b);
			break;
			
		default:
			printf("\n\nWrong Number For Opration");
			break;
	}
	
	return 0;	
	
}
