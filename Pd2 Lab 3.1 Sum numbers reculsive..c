#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int func(int num){
	if(num==0){
		
		return 0;
	}
	
	else{
		return num+func(num-1);
	}
	
	
}


int main(int argc, char *argv[]) {
	int num,result;
	
	printf("Please enter a number:");
	scanf("%d",&num);
	
	result=func(num);
	printf("Result:%d",result);
	
	
	return 0;
}
