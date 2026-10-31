//Node creation and freeing sample program
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

int main(){
	Node_t* Node1=Createnode(42);
	printf("Node1->Data:%d, next:%p\n",Node1->value,(void*)Node1->next);

	Node_t* Node2=Createnode(99);
	Node1->next=Node2;
	printf("Node1->Data:%d, next:%p\n",Node1->value,(void*)Node1->next);
	printf("Node2->Data:%d, next:%p",Node2->value,(void*)Node2->next);

	free(Node2);
	free(Node1);
}
*/

//Sample Program Insertion at head,tail,after a given position
/*
#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	int value;
	struct Node *next;
}node_t;

node_t* createnode(int value){
	node_t* newnode=malloc(sizeof(node_t));
	newnode->value=value;
	newnode->next=NULL;
	return newnode;
}
void printlist(node_t* head){
	node_t* current=head;
	while(current!=NULL){
		printf("%d ",current->value);
		current=current->next;
	}
}
void insertAtHead(node_t **head,int value){
	node_t* newnode=createnode(value);
	newnode->next=*head;
	*head=newnode;
}
void insertAtTail(node_t **head,int value){
	node_t* newnode=createnode(value);

	if(*head==NULL){
		*head=newnode;
	}
	node_t *cur=*head;
	while(cur->next!=NULL){
		cur=cur->next;
	}
	cur->next=newnode;
}
void insertAtPosition(node_t *head,int position,int value){
	node_t* cur=head;
	for(int i=0;i<position&&cur!=NULL;i++){
		cur=cur->next;
	}
	node_t* newnode=createnode(value);
	newnode->next=cur->next;
	cur->next=newnode;

}
int main(){
	node_t *head=NULL;
	insertAtHead(&head,10);
	insertAtHead(&head,20);
	insertAtTail(&head,30);
	printf("After Inserting: ");
	printlist(head);
	insertAtPosition(head,0,40);
	printf("\n");
	printf("After inserting at postition 0: ");
	printlist(head);
}
*/

//Reversal
/*
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int         data;
    struct Node *next;
} Node_t;

Node_t* createNode(int value) {
    Node_t *n = malloc(sizeof(Node_t));
    n->data = value;
    n->next = NULL;
    return n;
}

void insertAtTail(Node_t **head, int value) {
    Node_t *newNode = createNode(value);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node_t *cur = *head;
    while (cur->next != NULL) {
        cur = cur->next;
    }
    cur->next = newNode;
}

void printList(Node_t *head) {
    Node_t *cur = head;
    while (cur != NULL) {
        printf("%d -> ", cur->data);
        cur = cur->next;
    }
    printf("NULL\n");
}

void freeList(Node_t *head) {
    while (head != NULL) {
        Node_t *t = head->next;
        free(head);
        head = t;
    }
}

Node_t* reverselist(Node_t* head){
	Node_t* current=head;
	Node_t* previous=NULL;

	while(current!=NULL){
		Node_t* next=current->next;
		current->next=previous;
		previous=current;
		current=next;
	}
	return previous;
}

int main(void) {
    Node_t *head = NULL;


    insertAtTail(&head, 10);
    insertAtTail(&head, 20);
    insertAtTail(&head, 30);
    insertAtTail(&head, 40);

    printf("Before reversal: ");
    printList(head);

    head = reverselist(head);

    printf("After reversal:  ");
    printList(head);

    freeList(head);
    return 0;
}
*/

//Problem 1:Build and Print a List
/*
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int value;
	struct node *next;
}node_t;

node_t* createnode(int value){
	node_t *newnode=malloc(sizeof(node_t));
	newnode->value=value;
	newnode->next=NULL;
	return newnode;
}

void printlist(node_t *head){
	node_t *current=head;
	while(current!=NULL){
		printf("%d ",current->value);
		current=current->next;
	}
}

int main(){
	node_t *head=NULL;

	node_t *n1=createnode(72);
	node_t *n2=createnode(85);
	node_t *n3=createnode(91);

	head=n1;
	n1->next=n2;
	n2->next=n3;
	printlist(head);
	free(n1);
	free(n2);
	free(n3);
	return 0;
}
*/

//Problem 2:Insert at Head and Tail
/*
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int value;
	struct node *next;
}node_t;

node_t* createnode(int value){
	node_t *newnode=malloc(sizeof(node_t));
	newnode->value=value;
	newnode->next=NULL;
	return newnode;
}

void insertAtHead(node_t **head,int value){
	node_t *newnode=createnode(value);

	newnode->next=*head;
	*head=newnode;
}

void insertAtTail(node_t **head,int value){
	node_t *newnode=createnode(value);
    node_t *current=*head;
    if(current==NULL){
    	*head=newnode;
    	return;
    }
    while(current->next!=NULL){
    	current=current->next;
    }
    current->next=newnode;
}
void printlist(node_t *head){
	node_t *cur=head;
	while(cur!=NULL){
		printf("%d ",cur->value);
		cur=cur->next;
	}
}

int main(){
	node_t *head=NULL;

	insertAtTail(&head,2);
	insertAtHead(&head,1);
	insertAtTail(&head,3);
	printlist(head);
	return 0;
}
*/

//Problem 3:Search for Value
/*

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int value;
	struct node *next;
}node_t;

node_t* createnode(int value){
	node_t *newnode=malloc(sizeof(node_t));
	newnode->value=value;
	newnode->next=NULL;
	return newnode;
}

void insertAtHead(node_t **head,int value){
	node_t *newnode=createnode(value);
	newnode->next=*head;
	*head=newnode;
}

void printlist(node_t *head){
	node_t *current=head;
	while(current!=NULL){
		printf("%d ",current->value);
		current=current->next;
	}
}

int search(node_t *head,int target){
	int position=0;
	node_t *current=head;
	while(current!=NULL){
		if(current->value==target){
			return position;
		}
		position++;
		current=current->next;

	}
	printf("Not found");

}

int main(){
	node_t *head=NULL;
	insertAtHead(&head,30);
	insertAtHead(&head,20);
	insertAtHead(&head,10);

	int pos=search(head,20);
	printf("%d ",pos);
	search(head,99);
	return 0;
}
*/
