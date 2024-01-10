#include <stdio.h>
#include <stdlib.h>

/* Write C code to convert the length in feet to centimeter*/

int main(int argc, char *argv[]) {
	int cm,feet;
	
	printf("Please enter the length as feet:");
	scanf("%d",&feet);
	
	cm=30.48*feet;
	printf("%d",cm);
	
	
	return 0;
}
