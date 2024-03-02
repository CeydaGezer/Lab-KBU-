#include <stdio.h>
#include <stdlib.h>

/* Write a recursion fuction to sum the digits of the number given in the main function */

int func(int num){
	int sum=0;
	
	
	if (num<10){
		return num;	
	}
	
	
	else if(num>10){
		
		return num%10+func(num/10);
		
	}
}




int main(int argc, char *argv[]) {
	
	int num,result;
	
	printf("Please enter a number:");
	scanf("%d",&num);
	
	result=func(num);
	
	printf("%d",result);
	
	return 0;
}
