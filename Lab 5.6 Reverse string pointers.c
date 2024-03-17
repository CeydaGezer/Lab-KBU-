#include <stdio.h>
#include <stdlib.h>

/* Write a program in C to print a string in reverse using a pointer.*/

int main(int argc, char *argv[]) {
	
	char str[250],*ptr;
	int size=0,i;
	
	printf("Please enter your string:");
	gets(str);
	
	ptr=str;
	
	for(i=0;str[i]!='\0';i++){
		size++;
	}
	
	for(i=size-1;i>=0;i--){
		printf("%c",*(ptr+i)); 
	}
	
	return 0;
}
