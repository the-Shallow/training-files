#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Store Student Record

typedef struct date {
	int day;
	int month;
	int year;
} Date;

typedef struct student {
	char name[100];
	int rollno;
	Date* date;
}Student;

typedef struct node {
	Student* student;
	struct node* next;
}Node;

Date* get_date(int day , int month , int year){
	
	Date* date = (Date*)malloc(sizeof(Date));
	date->day = day;
	date->month = month;
	date->year = year;

	return date;
}

Student* get_student(char* name , int rollno ,int day,int month,int year){

	Student* student = (Student*)malloc(sizeof(Student));
	strcpy(student->name,name);
	student->rollno = rollno;
	Date* date = get_date(day,month,year);
	student->date = date;
	
	return student;
}

Node* get_node(Student* student){

	Node* node = (Node*)malloc(sizeof(Node));
	node->student = student;
	node->next = NULL;

	return node;
}

void display(Node* head){
	Node* temp = head;
	while(temp != NULL){
		Student* curr = temp->student;

		printf("\nThe name of the student is %s\n",curr->name);
		printf("\nThe rollno of the student is %d\n",curr->rollno);
		printf("\nThe Date of Birth of the student is %d-%d-%d\n",curr->date->day,curr->date->month,curr->date->year);
		temp = temp->next;		
	}
}


void display_student(Node* head){
		Student* curr = head->student;

		printf("\nThe name of the student is %s\n",curr->name);
		printf("\nThe rollno of the student is %d\n",curr->rollno);
		printf("\nThe Date of Birth of the student is %d-%d-%d\n",curr->date->day,curr->date->month,curr->date->year);
}

void save(Node* head){

	FILE* ptr = fopen("student_record.txt","w");

	Node* temp = head;

	if(ptr == NULL){
		printf("\nFile Could not be opened\n");
		exit(1);
	}

	while(temp != NULL){
		char* name = temp->student->name;
		int rollno = temp->student->rollno;
		int day = temp->student->date->day;
		int month = temp->student->date->month;
		int year = temp->student->date->year;

		fprintf(ptr,"%s\t%d\t%d\t%d\t%d\n",name,rollno,day,month,year);
		temp = temp->next;
	}

	fclose(ptr);
}

Node* load(Node* head){

	FILE* ptr = fopen("student_record.txt","r");

	Node* temp = head;

	if(ptr == NULL){
		printf("\nFile Could not be opened\n");
		exit(1);
	}

	char name[1000];
	char rollno[100];
	char day[100];
	char month[100];
	char year[100];
	

	while(fscanf(ptr,"%s %s %s %s %s\n",name,rollno,day,month,year) != EOF){
		
		Student* student = get_student(name,atoi(rollno),atoi(day),atoi(month),atoi(year));

		Node* curr = get_node(student);
		
		if(head == NULL) {
			head = curr;
			temp = head;
		}else {
			temp->next = curr;
			temp = temp->next;
		}
	}

	fclose(ptr);
	return head;
}


Node* add_student(Node* head){

	char name[100];
	int rollno;
	int day;
	int month;
	int year;

	printf("\nEnter the name of the Student\n");
	scanf(" %s",name);
	printf("\nEnter the roll no of the Student\n");
	scanf("%d",&rollno);
	printf("\nEnter the day student was born\n");
	scanf("%d",&day);
	printf("\nEnter the month student was born\n");
	scanf("%d",&month);
	printf("\nEnter the year student was born\n");
	scanf("%d",&year);


	Student* student = get_student(name,rollno,day,month,year);

	Node* curr = get_node(student);

	Node* temp = head;

	if(temp == NULL) return curr;

	while(temp->next != NULL) temp = temp->next;

	temp->next = curr;
	return head;
}

Node* search_student(Node* head,int rollno){

	Node* temp = head;
	
	while(temp != NULL){
		if( temp->student->rollno == rollno ) return temp;
		temp = temp->next;
	}

	return NULL;
}

Node* delete_student(Node* head , int rollno){

	Node* prev = NULL;
	Node* temp = head;

	if(head == NULL) return NULL;


	while(temp->student->rollno != rollno){
		prev = temp;
		temp = temp->next;
	}

	if(temp == NULL) return head;

	if(prev == NULL) return temp->next;
	else {
		prev->next = temp->next;
	}

	free(temp);
	return head;
}


void main(){

	int choice;

	Node* head = NULL;

	while(1){

		printf("\n1.Add a Student\n");
		printf("\n2.Search a Student\n");
		printf("\n3.Delete a student\n");
		printf("\n4.Load the student record\n");
		printf("\n5.Save the student record\n");
		printf("\n6.Display Student Record\n");

		printf("\nEnter your choice:\n");
		scanf("%d",&choice);
		
		switch(choice){
			case 1:{
				head = add_student(head);
				break;
			}

			case 2:{
				int rollno;
				printf("\nEnter the rollno of the student you want to search:\n");
				scanf("%d",&rollno);
				Node* curr =  search_student(head,rollno);
				if(curr == NULL) printf("\nNo Student with the given data\n");
				else display_student(curr);
				break;
			}

			case 3:{
				int rollno;
				printf("\nEnter the rollno of the student you want to delete:\n");
				scanf("%d",&rollno);
				Node* curr =  search_student(head,rollno);
				if(curr == NULL) printf("\nNo Student with the given data\n");
				else {
					head = delete_student(head,rollno);
					printf("\nDeleted Successfully\n");
				}
				break;
			}

			case 4:{
				head = load(head);
				printf("\nLoaded Successfully\n");
				break;
			}

			case 5:{
				save(head);
				printf("\nSaved Successfully\n");
				break;
			}

			case 6:{
				display(head);
				break;
			}	
		}		
	
		printf("\nDo you want to continue?\n");
		char ch;
		scanf(" %c",&ch);
		if(ch == 'n') break;
	}

}
