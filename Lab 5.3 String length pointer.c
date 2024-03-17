#include <stdio.h>
#include <stdlib.h>

/* Write a program in C to calculate the length of the string using a pointer */

int main(int argc, char *argv[]) {
	
	char str[250],i,length=0;
	
	printf("Please enter your string:");
	gets(str);
	
	char *ptr=str;
	
	for( ;*ptr!='\0';*ptr++){
		length++;
	}
	
	printf("Length of the string: %d\n",length);
	return 0;
}
