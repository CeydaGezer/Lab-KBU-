#include <stdio.h>
#include <stdlib.h>

/* Write a C program to sort a given array using Selection Sort.*/



void selectionSort(int arr[], int n) {
    int i, j, min_idx;
    for (i = 0; i < n-1; i++) {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        // Swap the found minimum element with the first element
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}
	
int main(int argc, char *argv[]) {
	
	int i=0;
    int array[5]={32,56,43,78,98};
    
	selectionSort(array,5);
	
	
	printf("The sorted array:");
	
	for(i=0;i<5;i++){
	printf("%d ",array[i]);	
	}
	
	
	return 0;
}
