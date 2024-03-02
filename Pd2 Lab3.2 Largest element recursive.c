#include <stdio.h>
#include <stdlib.h>

/* Write a recursion program that finds the largest element in the entered array in C language  */

int findMax(int a[], int size) {
	
    if (size==1){
        return a[0];
    }
    
    int maxOfRest=findMax(a,size-1);
    
    if (a[size-1]>maxOfRest) {
        return a[size-1];
        
        
    } else {
        return maxOfRest;
    }
}

int main() {
    int a[5],i,result;

    printf("Please enter an array of 5 integers:\n");
    for (i=0; i<5; i++) {
        scanf("%d",&a[i]);
    }

    result=findMax(a,5);
    printf("The largest element in the array is: %d\n", result);

    return 0;
}


