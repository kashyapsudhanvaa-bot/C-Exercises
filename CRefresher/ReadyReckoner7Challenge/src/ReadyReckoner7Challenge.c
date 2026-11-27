//Problem 7:Detect a Cycle
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

int hasCycle(Node_t *head){
	Node_t *slow=head;
	Node_t *fast=head;
	while(fast!=NULL&&fast->next!=NULL){
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast){
			return 1;
		}

	}
	return 0;

}

int main(){

	Node_t *n1=Createnode(1);
	Node_t *n2=Createnode(2);
	Node_t *n3=Createnode(3);

	n1->next=n2;
	n2->next=n3;

	int c=hasCycle(n1);
	if(c==0){
		printf("Before introducing a variable:No cycle\n");
	}
	else{
		printf("After introducing a variable:cycle detected\n");
	}
	n3->next=n2;
	int c1=hasCycle(n1);
	if(c1==0){
			printf("Before introducing a variable:No cycle\n");
		}
		else{
			printf("After introducing a variable:cycle detected\n");
		}
}
*/

//Problem 8:Merge Two Sorted Linked lists

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
void insertAtTail(Node_t **head, int value) {
	Node_t *newNode = Createnode(value);
	if (*head == NULL) {
		*head = newNode;
		return;
	}
	Node_t *cur = *head;
	while (cur->next != NULL){
		cur = cur->next;
	}
	cur->next = newNode;
}

Node_t* mergeSortedLists(Node_t *a,Node_t *b){
	Node_t dummy;
	Node_t *tail=&dummy;
	dummy.next=NULL;

	while(a!=NULL&&b!=NULL){
		if(a->value<=b->value){
			tail->next=a;
			a=a->next;
		}
		else{
			tail->next=b;
			b=b->next;
		}
		tail=tail->next;
	}
	if(a==NULL){
		tail->next=b;
	}
	else{
		tail->next=a;
	}
	return dummy.next;
}
int main(){
	Node_t *a=NULL;
	insertAtTail(&a,10);
	insertAtTail(&a,30);
	insertAtTail(&a,50);
	printlist(a);
	printf("\n");

	Node_t *b=NULL;
	insertAtTail(&b,5);
	insertAtTail(&b,20);
	insertAtTail(&b,25);
	insertAtTail(&b,60);
	printlist(b);
	printf("\n");

	Node_t *c=mergeSortedLists(a,b);
    printlist(c);
}
