#include <stdio.h>
#include <stdlib.h>

/* Student ID,visa and final information are entered from the keyboard for a student.
Write the program in C language, which calculates the passing grade by taking 40% of the students midterm and 60% of the final grade */

int main(int argc, char *argv[]) {
	int midterm,final,note,StuNum;
	
	printf("Enter StuNum:");
	scanf("%d",&StuNum);
	
	printf("Enter midterm:");
	scanf("%d",&midterm);
	
	printf("Enter final:");
	scanf("%d",&final);
	
	note=(midterm*0.4+final*0.6);
	printf("note=%d", note);
	printf("\n");
	printf("StuNum=%d",StuNum);
	return 0;
}
