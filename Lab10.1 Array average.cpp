#include <stdio.h>
#include <stdlib.h>

/* Enter a value from the keyboard to the 8-element float array. Calculate the average of the entered values and print it on the screen */

int main(int argc, char *argv[]) {
	int i;
	float a[8],sum,avg;
	i=0;
	sum=0;
	
	

	printf("Enter %f array elements:");
	
	
	for(i=0;i<8;i++)
		scanf("%f",&a[i]);
		
		
	for(i=0; i<8;i++)	
		sum=sum+a[i];
		
	avg=sum/8;	
	printf("%f",avg);
	return 0;
	
}
