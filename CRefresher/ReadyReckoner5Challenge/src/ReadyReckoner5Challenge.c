//Problem 7:Callback Implementation
/*
#include<stdio.h>

typedef void (*SensorCallback_t)(float);

void readSensor(SensorCallback_t callback, float value){
	printf("Sensor produced a reading...\n");
	callback(value);
}

void printReading(float val){
	printf("[DISPLAY] Reading: %.1f\n",val);
}
void logReading(float val){
	printf("[LOG] Recording reading: %.1f\n",val);
}
 int main(void){
	 readSensor(printReading,23.5);
	 readSensor(logReading,98.6);
	 return 0;
 }
*/

//Problem 8:Building a Singly Linked List
/*
#include<stdio.h>
#include<stdlib.h>

struct Node{
	int value;
	struct Node *next;
};
int size;
struct Node* createNode(int value){
	struct Node *newnode=malloc(sizeof(struct Node));
	newnode->value=value;
	newnode->next=NULL;
	return newnode;
}

void pushFront(struct Node **head,int value){
	struct Node *newnode=createNode(value);
	newnode->next=*head;
	*head=newnode;
	//printf("%d ",newnode->value);
}

void printList(struct Node *head){
	struct Node *current=head;
	while(current!=NULL){
		printf("%d ",current->value);
		current=current->next;
	}
	//printf("NULL");
}
void freeList(struct Node *temp){
	while(temp!=NULL){
	struct Node *next=temp->next;
	free(temp);
	temp=next;
	}
}


int main(void){
	struct Node *head=NULL;
size=sizeof(struct Node);
printf("%d\n",size);
	pushFront(&head,30);
	pushFront(&head,20);
	pushFront(&head,10);
	printf("Linked List:");
    printList(head);
	freeList(head);

}
*/
