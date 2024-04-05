#include <stdio.h>
#include <stdlib.h>

/* Write a C program to sort a given array using Insertion Sort.  */

void InsertionSort(int array[],int n){
	
	int i,j,index,min;
	
	for(i=0;i<n-1;i++){
		min=array[n-1];
		index=n-1;
		for(j=i;j<n-1;j++){
			if(array[j]<min){
				min=array[j];
				index=j;
			}
		}
		array[index]=array[i];
		array[i]=min;
	}		
}

int main(int argc, char *argv[]) {
	
	int array[5]={12,34,56,23,89};
	int n=5,i;
	
	InsertionSort(array,n);
	
	printf("The sorted array:");
	
	for(i=0;i<5;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
