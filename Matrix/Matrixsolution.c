#include <stdio.h>

int main(){
	
//s1,s2,s3 calculator
	
	int s1,s2,s3,a1,a2,a3,b1,b2,b3,c1,c2,c3;
	
	printf("ENter Your 3X3 Matrix\n");
	scanf("%d %d %d",&a1,&a2,&a3);
	scanf("%d %d %d",&b1,&b2,&b3);
	scanf("%d %d %d",&c1,&c2,&c3);
	
	printf("\n\nYour Materix Is ");
	printf("\n%d | %d | %d",a1,a2,a3);
	printf("\n%d | %d | %d",b1,b2,b3);
	printf("\n%d | %d | %d",c1,c2,c3);
	
	s1=a1+b2+c3;
	s2=( ( (b2*c3) - (b3*c2) ) + ( (a1*c3) - (c1*a3) ) + ( (a1*b2) - (a2*b1) ));
	s3=(a1*((b2*c3)-(b3*c2))) + (-a2*((b1*c3)-(b3*c1)) + (a3*((b1*c2)-(c1*b2))));
	
	printf("\n\nS1 = %d",s1);
	printf("\nS2 = %d",s2);
	printf("\nS3 = %d",s3);
	
	return 0;
}
