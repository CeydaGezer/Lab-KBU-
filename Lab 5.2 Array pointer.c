#include <stdio.h>
#include <stdlib.h>

/* Write a program in C to store n elements in an array and print the elements using pointer*/

int main(int argc, char *argv[]) {
	
	int element,i,a[250];
	
	printf("Please enter the number of elements to store in the array:");
	scanf("%d",&element);
	

	printf("Please enter the elements of your array:");
	for(i=0;i<element;i++){
		
		scanf("%d",&a[i]);		
	}
	
int *ptr=a;
  printf("Elements stored in array are:\n");
  
  for (i=0;i<element;i++){
  	printf("element %d:%d\n",i,*ptr);
  	ptr++;
  }
	return 0;
}
