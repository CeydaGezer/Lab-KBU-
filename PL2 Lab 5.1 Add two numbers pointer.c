#include <stdio.h>
#include <stdlib.h>

/* Write a program in C to add two numbers using pointers */

int main(int argc, char *argv[]) {
	
	int num1,num2,sum;
	int *ptr1,*ptr2;
	
	printf("Please enter the first number:");
	scanf("%d",&num1);
	
	printf("Please enter your second number:");
	scanf("%d",&num2);
	
	ptr1=&num1;       // or sum=a+b     *p=&sum
	ptr2=&num2;
	
	sum=*ptr1+*ptr2;
	
	printf("Sum of %d and %d is %d\n",*ptr1,*ptr2,sum);

	
	
	return 0;
}
