#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Create a student struct with student number,name and surname. Write a function for given operations.
a) Create a linked list of students
b)Add a new student.
c)Search student with student number and return its index
d)Sort the list according to student number.*/

struct student {
    int num;
    char name[50];
    char surname[50];
    struct student *next; 
};

typedef struct student node;
node *head = NULL; // Global head tanýmlanýyor

node* createList() {
    int i,n;
    node *p;
    printf("Enter number of students:");
    scanf("%d",&n);
    for(i = 0; i < n; i++) {
        if(i == 0) {
            head = (node*) malloc(sizeof(node));
            p = head;
        }
        else {
            p->next = (node*) malloc(sizeof(node));
            p = p->next;
        }
        printf("Enter %d. Student number:", i + 1);
        scanf("%d", &p->num);
        printf("Enter %d. Student name:", i + 1);
        scanf("%s", p->name);
        printf("Enter %d. Student surname:", i + 1);
        scanf("%s", p->surname);	
    }
    p->next = NULL;
    return head;
}

void traverseList(node* head) {
    int counter = 1;
    node *p = head;
    while(p != NULL) {
        printf("%d- %d %s %s \n", counter, p->num, p->name, p->surname);
        p = p->next;
        counter++;
    }
}

node* addNode(node* head) {
    int stdNo;
    node *p, *q, *newNode;
    newNode = (node*) malloc(sizeof(node));
    printf("Enter new student number:");
    scanf("%d", &newNode->num);
    printf("Enter new student name:");
    scanf("%s", newNode->name);
    printf("Enter new student surname:");
    scanf("%s", newNode->surname);
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

int search(int wantedNum) {
    int index = 0;
    node *p = head;
    while (p != NULL) {
        if (p->num == wantedNum) {
            return index;
        }
        p = p->next;
        index++;
    }
    return index;
}

void selectionSort() {
    node *ptr1,*ptr2;
    node temp;

    ptr1=head;

    while (ptr1!= NULL) {
        ptr2=ptr1->next;

        while (ptr2!= NULL) {
            // Öðrenci numaralarý karþýlaþtýrýlýr
            if (ptr1->num < ptr2->num) { // Burada ters sýralama yapmak için iþaretçilerin yeri deðiþtirilir
                // Öðrenci bilgileri geçici bir deðiþkene kopyalanýr
                temp = *ptr1;
                *ptr1 = *ptr2;
                *ptr2 = temp;
            }
            ptr2 = ptr2->next;
        }
        ptr1=ptr1->next;
    }
}


int main(void) {
    int selection = 0;
    printf("1. Create List 2. Add a new student 3. Search 4. Sort 5. Exit");
    while(1) {
        printf("Selection [1-5]?");
        scanf("%d", &selection);
        switch(selection) {
            case 1:
                head = createList();
                traverseList(head);
                break;
            case 2:
                head = addNode(head);
                traverseList(head);
                break;
            case 3: {
                int wantedNum;
                printf("Enter student number to search:");
                scanf("%d", &wantedNum);
                int index = search(wantedNum);
                if (index != -1) {
                    printf("Student found at index: %d\n", index);
                } 
                else {
                    printf("Student not found.\n");
                } 
                break;
            }
            case 4:
                selectionSort();
                traverseList(head);
                break;
            case 5:
                exit(0);
        }	
    }	
    return 0;
}



























