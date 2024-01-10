#include <stdio.h>
#include <stdlib.h>

/* Two numbers are entered from the keyboard with integer variables A and B.Write the program with C language, which changes the values of the A and B variables between them. */

int main(int argc, char *argv[]) {
	int A,B,C;
	
	printf("Enter A:");
	scanf("%d",&A);
	
	printf("Enter B:");
	scanf("%d",&B);
	
	C=A;
	A=B;
	B=C;
	
	printf("A=%d",A);
	printf("\n");
	printf("B=%d",B);
	
		return 0;
}
