//Problem 4:Delete by value
/*
#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int value;
	struct Node* next;
}Node_t;

Node_t* Createnode(int value){
	Node_t* newnode=malloc(sizeof(Node_t));
	newnode->value=value;
	newnode->next=NULL;
	return newnode;
}

void printlist(Node_t* head){
	Node_t* current=head;
	while(current!=NULL){
		printf("%d ",current->value);
		current=current->next;
	}
}
void deleteByValue(Node_t **head,int target){
	Node_t *current=*head;
	Node_t *previous=NULL;

	while(current!=NULL&&current->value!=target){
		previous=current;
		current=current->next;
	}
	if(current==NULL){
			printf("Not found\n");
			return;
	}
	if(previous==NULL){
		*head=current->next;
	}

	else{
		previous->next=current->next;
	}
	free(current);
}

int main(){
	Node_t *head=NULL;
	Node_t *n1=Createnode(5);
	Node_t *n2=Createnode(10);
	Node_t *n3=Createnode(15);
	Node_t *n4=Createnode(20);

	head=n1;
	n1->next=n2;
	n2->next=n3;
	n3->next=n4;
	printf("Before Deleting: ");
	printlist(head);
	deleteByValue(&head,15);
	printf("\n");
	printf("After Deleting: " );
	printlist(head);
	free(n1);
	free(n2);
	free(n3);
	free(n4);
}
*/

//Problem 5:Reversing a list
/*
#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int value;
	struct Node* next;
}Node_t;

Node_t* Createnode(int value){
	Node_t* newnode=malloc(sizeof(Node_t));
	newnode->value=value;
	newnode->next=NULL;
	return newnode;
}

void printlist(Node_t* head){
	Node_t* current=head;
	while(current!=NULL){
		printf("%d ",current->value);
		current=current->next;
	}
}
Node_t* reverselist(Node_t *head){
	Node_t *current=head;
	Node_t *previous=NULL;

	while(current!=NULL){
		Node_t *next=current->next;
		current->next=previous;
		previous=current;
		current=next;
	}
	return previous;
}
int main(){
	Node_t *head=NULL;
		Node_t *n1=Createnode(100);
		Node_t *n2=Createnode(200);
		Node_t *n3=Createnode(300);

		head=n1;
		n1->next=n2;
		n2->next=n3;

		printf("Before reversing: ");
		printlist(head);
		printf("\n");
		head=reverselist(head);
		printf("After reversing: ");
		printlist(head);
}
*/

//Problem 6:Insert at a given position
/*
#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int value;
	struct Node* next;
}Node_t;

Node_t* Createnode(int value){
	Node_t* newnode=malloc(sizeof(Node_t));
	newnode->value=value;
	newnode->next=NULL;
	return newnode;
}

void printlist(Node_t* head){
	Node_t* current=head;
	while(current!=NULL){
		printf("%d ",current->value);
		current=current->next;
	}
}
Node_t* insertAtPosition(Node_t *head,int position,int value){
	Node_t *current=head;
	int i;
	for( i=0;i<position&&current!=NULL;i++){
		current=current->next;
}
	if(current==NULL){
		printf("Not found");
	}
	Node_t *newnode=Createnode(value);
	newnode->next=current->next;
	current->next=newnode;
	return newnode;
}
int main(){
	Node_t *head=NULL;
	Node_t *n1=Createnode(1);
	Node_t *n2=Createnode(2);
	Node_t *n3=Createnode(4);

	head=n1;
	n1->next=n2;
	n2->next=n3;
	printlist(head);
	printf("\n");
	insertAtPosition(head,1,3);
	printlist(head);
}
*/
