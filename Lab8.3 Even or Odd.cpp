#include <stdio.h>
#include <stdlib.h>

/* Determine the output whether number N is even or odd */

int main(int argc, char *argv[]) {
	
	int	N;
	
	printf("Enter the N:");
	scanf("%d",&N);
	
	if (N>=0){
		if (N%2==0){
			printf("N is even");
			}
			else if (N%2!=0){
				printf("N is odd");
				}
	}
	
	
	
		
	
		
		
	return 0;
}
