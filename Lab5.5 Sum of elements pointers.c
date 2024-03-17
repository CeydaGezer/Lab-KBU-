#include <stdio.h>
#include <stdlib.h>

/* Write a program in C to compute the sum of all elements in an array using pointers. */

int main(int argc, char *argv[]) {
	
	int i,element,arr[10],sum=0,*ptr;
	
	printf("Input the number of elements to store in the array (max 10):");
	scanf("%d",&element);
	
	for(i=0;i<element;i++){
		printf("element - %d:",i+1);
		scanf("%d",&arr[i]);	
	}
	
	ptr=arr;
	
	for(i=0;i<element;i++){
		sum=sum+*ptr;
		*ptr++;  // Move the pointer to the next element
	}
	printf("%d",sum);
	
	return 0;
}
