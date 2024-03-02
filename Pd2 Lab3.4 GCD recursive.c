#include <stdio.h>
#include <stdlib.h>

/* Using the two positive numbers given in the main function,find the largest common divisor of these numbers using a recursive function. */

int func(int num1,int num2){
	
	if(num1==num2){
		return num1;
	}
	
	
	else if(num1>num2){
		return func(num1-num2,num2);
	}
	
	
	else{
		return func(num1,num2-num1);
	}
	
	
}




int main(int argc, char *argv[]) {
	int num1,num2,result;
	
	printf("Please enter your first number:");
	scanf("%d",&num1);
	
	printf("Please enter your second number:");
	scanf("%d",&num2);
	
	result=func(num1,num2);
	printf("%d",result);
	return 0;
}
