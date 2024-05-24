#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Write a C program that can perform various opretaions on the number,name,midterm grade and final grade information of students in class.
The features of the program are given below:
a)Program will have a main menu with options below:
1-Add new record
2-List records
3-Update record
4-Calculate class average
5-Show best student record according to average
b)Your program should consume as mininmum memory space as it can. To achieve this, perform dynamic memory management.
c)Listing records can be according to upper or lower limits applied to midterm or final grades.
d)Updating records will be carried out according to student number. */

struct student{
	int num;
	char name[50];
	int midterm;
	int final;
	struct student *next;
};
	typedef struct student node;
	node *head,*newNode;
	
node* createList(){
	int i,n;
	node *head,*p;
	
	printf("How many students are there?");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){  
	
		if(i==0){
			head=(node*)malloc(sizeof(node));
			p=head;
		}
		
		else{
			p->next=(node*)malloc(sizeof(node));
			p=p->next;
		}
		printf("Enter %d. student number:",i+1);
		scanf("%d",&p->num);
		printf("Enter %d. student name:",i+1);
		scanf("%s",p->name);
		printf("Enter %d. student midterm grade:",i+1);
		scanf("%d",&p->midterm);
		printf("Enter %d. student final grade:",i+1);
		scanf("%d",&p->final);
}
	p->next=NULL;
    return head;
}

void traverseList(node* head){
	int counter=1;
	node *p;
	
	p=head;

	while(p!=NULL){
		printf("%d- %d %s %d %d",counter,p->num,p->name,p->midterm,p->final);
		p=p->next;
		counter++;
	}	
}


void listing(){
	double note=0;
	node *p;
	p=head;
	while(p!=NULL){
		printf("Student number:%f\n",p->num);
		printf("Student name:%s\n",p->name);
		printf("Student midterm grade:%f\n",p->midterm);
		printf("Student final grade:%f\n",p->final);
		note=p->midterm*0.4+p->final*0.6;
		printf("Final note:\n",note);
		p=p->next;
	}
}

node* addNew(node* head) {
    int stdNo;
    node *p, *q, *newNode;
    
    newNode = (node*) malloc(sizeof(node));
    
    printf("Enter new student number:");
    scanf("%d", &newNode->num);
    
    printf("Enter new student name:");
    scanf("%s", newNode->name);
    
    printf("Enter new student midterm:");
    scanf("%d",&newNode->midterm);
    
    printf("Enter new student final:");
    scanf("%d",&newNode->final);
    
    printf("Enter student number that new record will be added before:\n");
    printf("Press 0 to add to the end of list:");
    
    scanf("%d", &stdNo);
    
    
    p = head;
    if(p->num == stdNo) {
        newNode->next = p;
        head = newNode;
    }
    else {
        while(p->next != NULL && p->num != stdNo) {
            q = p;
            p = p->next;
        }
        if(p->num == stdNo) {
            q->next = newNode;
            newNode->next = p;
        }
        else if(p->next == NULL) {
            p->next = newNode;
            newNode->next = NULL;
        }
    }
    return head;
}

node* deleteNode(node* head){
	int stdNo;
	node *p,*q;
	
	printf("Enter student number that will be deleted?");
	scanf("%d",&stdNo);
	
	p=head;
	if(p->num==stdNo){
		head=p->next;
		free(p);	
	}
	else{
		while(p->next != NULL && p->num != stdNo){
			q=p;
			p=p->next;
		}
		
		
		if(p->num==stdNo){
			q->next=p->next;
			free(p);
		}
		else if(p->next==NULL){
			printf("No node found to delete");
		}
	}
	return head;
}




double yearend(int midterm,int final){
	return (0.4*midterm)+(0.6*final);
}



void bestStudent() {

    node *p = head;
    node *best = head;

    while (p->next != NULL) {
        p = p->next;
        if (yearend(p->midterm, p->final) > yearend(best->midterm, best->final)) {
            best = p;
        }
    }        
    printf("The best student: %d\n", best->num);
    printf("Num: %d - Name: %s - Year end grade: %f\n", best->num, best->name, yearend(best->midterm, best->final)); // Doðru çaðrý yapýldý.
}




void avg(){
	double avg=0;
	double sum=0;
	int counter=0;
	node *p;
	p=head;
	if(p==NULL){
		printf("No record found!");
	}
	else{ 
		do{
			sum+=yearend(p->midterm,p->final);
			p=p->next;
			counter++;
		}
		while(p!=NULL);
			avg=sum/counter;
			printf("Class average:%f",avg);
		
	}
}
	
	
	
int main(int argc, char *argv[]) {
	
	int selection=0;
	printf("\n 1-Create List \n 2-Listing \n 3-Add new student \n 4-Delete new student \n 5-Average \n 6-Highestnote \n 7-Exit" );
	
	while(1){
		printf("Selection:[1-6]?");
		scanf("%d",&selection);
	
		switch(selection){
			case 1:createList();
				   traverseList(head);
				   break;
				   
			case 2:listing();
				traverseList(head);
				break;
			
			
			case 3:addNew(head);
					traverseList(head);
					break;
					
			case 4:deleteNode(head);
					traverseList(head);
					break;
					
			case 5:bestStudent();
					traverseList(head);
					break;
					
			case 6:avg();
					traverseList(head);
					break;
					
			case 7: exit(0);
		}
		
	}
	return 0;
}

