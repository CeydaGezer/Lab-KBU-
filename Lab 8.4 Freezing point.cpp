#include <stdio.h>
#include <stdlib.h>

/* Determine whether a temperature is below or above the freezing point */

int main(int argc, char *argv[]) {
	int temp;
	
	printf("Please enter the temp:");
	scanf("%d",&temp);
	
	
	
	 
	if (temp>0){
			printf("temp is above");
	}
	
	
	else if(temp<0){
			printf("temp is below");
	}
		
	
	return 0;
}
