#include <stdio.h>
#include <stdlib.h>

/* Write a "main" function that takes the number of students (less or equal to 100) and the passing grade from the keyboard and 
sends this information to the "calculate" function. The "calculate" function will read grades of each student from the keyboard and
 record them in an array with 100 elements.According to the passing grade, find out how many students failed and return it from function,
 and print the class average on the function.Accordingly, write "main" and "calculate" function in the following fields.*/

int calculate(int grade[], int student_no,int passing_grade){
	
	
    int failed_students=0;
    int sum=0;
    
    printf("Please enter students' grades:\n");
    
    for (int i=0;i<student_no;i++){
    	
        scanf("%d",&grade[i]);
        
        sum+=grade[i];
        
        if(grade[i]<passing_grade){
            failed_students++;
        }
    }
    
    int avg=sum/student_no;
    printf("Class average:%d\n",avg);
    
    return failed_students;
}

int main(int argc,char *argv[]){
    int student_no, passing_grade;
    int grade[100];

    printf("Please enter the number of students (less than or equal to 100):");
    scanf("%d",&student_no);
    

    printf("Please enter the passing grade:");
    scanf("%d",&passing_grade);

    int failed_students=calculate(grade,student_no,passing_grade);
    printf("Number of students failed: %d\n", failed_students);

    return 0;
}
