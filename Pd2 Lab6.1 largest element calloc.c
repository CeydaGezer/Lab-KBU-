#include <stdio.h>
#include <stdlib.h>

/* By taking the total number of elements from the user, take the necessary place by using the calloc function from memory.
The number of elements in this memory area you allocate is taken from the user. 
Then find the largest value entered using the pointer variable you have defined and print it on the screen.  */

int main(int argc, char *argv[]) {
	
	int *ptr;
	int size,i,j,temp;
	
	
	ptr=(int*)calloc(size,sizeof(int)); // Memory allocation
	
	if (ptr==NULL){
        printf("Memory allocation failed.\n");
        return 1;
    }
	
	printf("PLease enter the number of elements:");
	scanf("%d",&size);
	
	
	
	 printf("Please enter %d elements:\n", size);
    	for (i=0;i<size;i++){
        scanf("%d",&ptr[i]); 
    }
	
	for (i=0;i<size;i++){
		for(j=0;j<size-1-i;j++){
			if(ptr[j]>ptr[j+1]){
				temp=ptr[j];
				ptr[j]=ptr[j+1];
				ptr[j+1]=temp;
			}	
		}	
	}
	printf("Largest value entered: %d\n", ptr[size-1]); // Printing the largest value
	
	
	 // Free dynamically allocated memory
     free(ptr);

	
	
	return 0;
}
