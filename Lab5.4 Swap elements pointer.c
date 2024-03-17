#include <stdio.h>
#include <stdlib.h>

//Write a program in C to swap elements using call by reference.

void swap(int *a,int *b) {
    
    int temp;
    
	temp=*a;
    *a=*b;
    *b=temp;
}

int main() {
    int element, arr[250], i;

    printf("Please enter the number of elements:");
    scanf("%d", &element);

    printf("Please enter your array:");
    for (i=0;i<element;i++){
        scanf("%d",&arr[i]);
    }

    printf("Array before swapping:");
    for (i=0;i<element;i++){
        printf("%d ",arr[i]);
    }

    swap(&arr[0],&arr[element-1]);

    printf("Array after swapping:");
    for (i=0;i<element;i++) {
        printf("%d ",arr[i]);
    }

    return 0;
}
