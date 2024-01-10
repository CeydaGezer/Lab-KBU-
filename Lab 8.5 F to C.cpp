#include <stdio.h>
#include <stdlib.h>

/* Convert temperature from fahrenheit to celcius */

int main(int argc, char *argv[]) {
	int temp,celcius;
	
	printf("Enter the temp as fahrenheit:");
	scanf("%d",&temp);
	
	celcius=(temp-32)*(5/9);
	printf("%d", celcius);
	
	return 0;
}
