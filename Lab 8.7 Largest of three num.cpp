#include <stdio.h>
#include <stdlib.h>

/* Write C code to find the largest of three numbers A,B and C */

int main(int argc, char *argv[]) {
	int A,B,C;
	
	printf("please enter A:");
	scanf("%d",&A);
	
	printf("please enter B:");
	scanf("%d",&B);
	
	printf("please enter C:");
	scanf("%d",&C);
	
	
	if(A>=B && A>=C){
		printf("%d",A);
	}
	

	else if(B>=A && B>=C){
		printf("%d",B);
	}
	
	else printf("%d",C);
	
	
	
	
	
	
	return 0;
}
