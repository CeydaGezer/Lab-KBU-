#include <stdio.h>
#include <stdlib.h>

/*Linked list */
struct patient{
		char name[50];
		char mail[50];
		int id;
		int age;
		struct patient *next;
	};
	
	typedef struct patient node;
	node *head;
	
	node* createList(){
		int i;
		node *head,*p;
		
	
	for(i=0;i<5;i++){
		
		if(i==0){
			head=(node*)malloc(sizeof(node));
			p=head;
		}
		else{
			p->next=((node*)malloc(sizeof(node)));
			p=p->next;
		}
		printf("Enter %d. patient name:",i+1);
		scanf("%s", p->name);
		
		printf("Enter %d. patient mail adress:",i+1);
		scanf("%s", p->mail);
		
		printf("Enter %d. patient id:",i+1);
		scanf("%d", &p->id);
		
		printf("Enter %d. patient age:",i+1);
		scanf("%d", &p->age);
		}
		p->next=NULL;
		return head;
		
	}
	
	void traverseList(node* head){
		int counter=1;
		node *p;
		p=head;
		while (p!=NULL){
			printf("%d %s- %s %d %d \n",counter,p->name,p->mail,p->id,p->age);
			p=p->next;
			counter++;
		}
	}

int main(int argc, char *argv[]) {
	
	node *head;
	int selection=0;
	
	printf("1. Create List 2. Traverse List 3. Exit\n");
	
	while(1){ //Mantýksal doðru anlamýna geldiði için program sürekli devam eder.
		printf("Selection [1-3]?\n");
		scanf("%d",&selection);
		
		switch(selection){
		case 1: head=createList();
			printf("Adress:%x\n",head);
			traverseList(head);
			break;
			
		case 2:traverseList(head);
			break;
			
		case 3:exit(0);
		}
		
	}
	
}
