#include <stdio.h>
#include <stdlib.h>

/* The radius information and the operation type of a circle are entered from the keyboard.
If the operation type is 1, the perimeter of the circle is calculated and printed,and the opretaion type is 2, the area calculatedand printed.
"Wrong Input" will be written on the screen for input values other than these.Write the C code according to these requests */ 

int main(int argc, char *argv[]) {
	int radius,operation,perimeter,area;
	
	printf("Enter operation:");
	scanf("%d",&operation);
	
	printf("Enter radius:");
	scanf("%d",&radius);
	
	
	if (operation==1){
		perimeter=2*3*radius;
		printf("%d",perimeter);
	}
	
	
	else if (operation==2){
		area=3*radius*radius;
		printf("%d",area);
	}
	
	
	else 
		printf("Wrong Input");
	
		return 0;
}
