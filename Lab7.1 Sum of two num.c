#include <stdio.h>
#include <stdlib.h>

/* Wrte the program with the C language, which computes the sum of the two numbers entered on the keyboard  */

int main(int argc, char *argv[]) {
	int num1,num2,sum;
	
	printf("enter num1 :");
	scanf("%d",&num1);
	
	printf("enter num2 :");
	scanf("%d",&num2);
	
	sum=num1+num2;
	printf("%d",sum);
		
	return 0;
	
}
