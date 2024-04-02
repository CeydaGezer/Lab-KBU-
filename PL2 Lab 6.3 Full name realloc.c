#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*First, allocate the minimum memory space required for your name with malloc. Then expand this 
memory area with realloc to include your last name.*/

int main(int argc, char *argv[]) {
	
	char *name,*surname;
	
	
	name=(char*)malloc(6*sizeof(char));// 5 characters for Ceyda + for null
	
	if(name==NULL){
		printf("Memory allocation failed");
		return 1;
		
	}
	
	strcpy(name,"Ceyda ");


	surname= (char*)realloc(name,12*sizeof(char));
	
		if(surname==NULL){
		printf("Memory allocation failed");
		free(name);
		return 1;
		
	}
	
	strcat(surname,"Gezer");
	
	printf("Full name:%s",surname);
	
	
	free(surname);
	
	
	return 0;
}
