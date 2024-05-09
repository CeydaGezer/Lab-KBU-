#include <stdio.h>
#include <stdlib.h>

/*Define a struct named 'student' for course attendance list of students. 
This struct consists of 'number', 'name', 'surname', and 'midtermGrade' fields. 
Using this struct you defined, create a struct array for 10 students and get the information of 3 students from the keyboard. 
Then, print the information of the students whose information was entered.*/


struct student{
	int number;
	char name[50];
	char surname[50];
	int midtermGrade;
		
};
	


int main(int argc, char *argv[]) {
	
		struct student stu_info[10];
		int i;
		
		// Get information for 3 students from the keyboard
		for(i=0;i<3;i++){
			printf("%d.ogrencinin ismini giriniz:",i+1);
			scanf("%s",&stu_info[i].name);
			
			printf("%d.ogrencinin soyismini giriniz:",i+1);
			scanf("%s",stu_info[i].surname);
			
			printf("%d.ogrencinin numarasini giriniz:",i+1);
			scanf("%d",&stu_info[i].number);
			
			printf("%d.ogrencinin notunu giriniz:",i+1);
			scanf("%d",&stu_info[i].midtermGrade);
				
		}
	
		for(i=0;i<3;i++){
			
			printf("%d. ogrencinin ismi:%s\n",i+1,stu_info[i].name);
			
			printf("%d. ogrencinin soyismi:%s\n",i+1,stu_info[i].surname);
			
			printf("%d. ogrencinin numarasi:%d\n",i+1,stu_info[i].number);
			
			printf("%d. ogrencinin notu:%d\n",i+1,stu_info[i].midtermGrade);
			
		}
    	
	
	
	return 0;
}
