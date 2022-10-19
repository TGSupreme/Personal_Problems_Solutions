#include <stdio.h>

int main(){
//	basic calculator using switch case::::
	float a,b;
	char c;
	
	printf("Enter Your Equation : ");
	scanf("%f %c %f",&a,&c,&b);
	
	printf("\n\n");
	switch(c){
		case '+':
			printf("Answer : %.2f",a+b);
			break;
		case '-':
			printf("Answer : %.2f",a-b);
			break;
		case '*':
			printf("Answer : %.2f",a*b);
			break;
		case '/':
			printf("Answer : %.2f",a/b);
			break;
		default:
			printf("oprator error");
	}
	printf("\n\n");
	return 0;
}
