#include <stdio.h>
#include <stdlib.h>

/* Write a function named bodyIndex that computes body mass index by taking height and weight information. 
Write a program that calls the function in the main.  */

int bodyIndex(int height,int weight){
	int BMI;
	
	BMI=weight/(height*height);
	
	if(BMI>0 && BMI<=18){
		printf("Weak/n");
		return 1;
	}
	
	else if (BMI>19 && BMI<=25){
		printf("Normal/n");	
		return 2;
	}
	
	else if (BMI>26 && BMI<=30){
		printf("Fat/n");
		return 3;
	}
	
	else {
		printf("Obese/n");
		return 4;
	}
	
}
int main(int argc, char *argv[]) {
	
	int weight,height,result;
	
	printf("Please enter your weight:");
	scanf("%d",&weight);
	
	printf("Please enter your height:");
	scanf("%d",&height);
	
	result=bodyIndex(height,weight);
	printf("%d",result);
	
	return 0;
}
