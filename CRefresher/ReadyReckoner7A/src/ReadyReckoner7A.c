//Doubly linked list
/*
#include <stdio.h>
#include <stdlib.h>

typedef struct DNode {
    int          data;
    struct DNode *prev;
    struct DNode *next;
} DNode_t;

DNode_t* createDNode(int value) {
    DNode_t *n = malloc(sizeof(DNode_t));
    if (n == NULL) {
        return NULL;
    }
    n->data = value;
    n->prev = NULL;
    n->next = NULL;
    return n;
}

void printForward(DNode_t *head) {
    DNode_t *cur = head;
    while (cur != NULL) {
        printf("%d ", cur->data);
        if (cur->next != NULL) {
            printf("<-> ");
        }
        cur = cur->next;
    }
    printf("-> NULL\n");
}

void printBackward(DNode_t *head) {
    if (head == NULL) {
        printf("NULL\n");
        return;
    }
    DNode_t *cur = head;
    while (cur->next != NULL) {
        cur = cur->next;
    }
    while (cur != NULL) {
        printf("%d ", cur->data);
        if (cur->prev != NULL) {
            printf("<-> ");
        }
        cur = cur->prev;
    }
    printf("-> NULL\n");
}

void freeDList(DNode_t *head) {
    DNode_t *cur = head;
    while (cur != NULL) {
        DNode_t *next = cur->next;
        free(cur);
        cur = next;
    }
}

void insertAtHead(DNode_t **head, int value) {
    DNode_t *newNode = createDNode(value);
    newNode->next = *head;
    if (*head != NULL)
        (*head)->prev = newNode;
    *head = newNode;
}


int main(void) {
    DNode_t *a = createDNode(10);
    DNode_t *b = createDNode(20);
    DNode_t *c = createDNode(30);

    a->next = b;  b->prev = a;
    b->next = c;  c->prev = b;

    DNode_t *head = a;

    printf("Forward:  "); printForward(head);
    printf("Backward: "); printBackward(head);
    insertAtHead(&head, 5);
    printf("After insert 5 at head:\n");
    printf("Forward:  "); printForward(head);
    printf("Backward: "); printBackward(head);
    freeDList(head);
    return 0;
}
*/

//Circular Doubly Linked List
/*
#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int value;
	struct node *next;
	struct node *prev;
}node_t;

node_t* createnode(int value){
	node_t *newnode=malloc(sizeof(node_t));
	newnode->value=value;
	newnode->next=NULL;
	newnode->prev=NULL;
	return newnode;
}

void insertafter(node_t *after,int value){
	node_t *newnode=createnode(value);
	node_t *successor=after->next;

	newnode->next=successor;
	newnode->prev=after;
	after->next=newnode;
	successor->prev=newnode;
}

void deletenode(node_t *node){
	node->prev->next=node->next;
	node->next->prev=node->prev;
	free(node);
}
void printforward(node_t *head){
	node_t *cur=head;
	do{
		printf("%d ",cur->value);
		cur=cur->next;
		if(cur!=head)
			printf("<->");

	}
	while(cur!=head);
	printf("CIRCULAR\n");
}

void printbackward(node_t *head){
	node_t *cur=head;
	do{
		printf("%d ",cur->value);
		cur=cur->prev;
		if(cur!=head)
			printf("<->");
    }
	while(cur!=head);
	printf("CIRCULAR\n");

}

void freelist(node_t *head){
	if(head==NULL)
		return;
	node_t *tail=head->prev;
	tail->next=NULL;
	head->prev=NULL;
	node_t *cur=head;
	while(cur!=NULL){
		node_t *next=cur->next;
		free(cur);
		cur=next;
	}
}
int main(void){
	node_t *head=createnode(10);
	insertafter(head,20);
	insertafter(head->next,30);
	printf("Forward: ");
	printforward(head);
	printf("Backward: ");
	printbackward(head);
	node_t *middle=head->next;
	deletenode(middle);
	printf("Forward: ");
	printforward(head);
	printf("Backward: ");
	printbackward(head);

	freelist(head);
}
*/

//Problem Doubly Linked List-Build,print,insert at tail
/*
#include <stdio.h>
#include <stdlib.h>

typedef struct DNode {
    int data;
    struct DNode *prev;
    struct DNode *next;
} DNode_t;

DNode_t *createDNode(int value) {
    DNode_t *n = malloc(sizeof(DNode_t));
    n->data = value;
    n->prev = NULL;
    n->next = NULL;
    return n;
}

void insertAtTail(DNode_t **head, int value) {
    DNode_t *newNode = createDNode(value);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    DNode_t *cur = *head;
    while (cur->next != NULL) {
        cur = cur->next;
    }
    cur->next = newNode;
    newNode->prev = cur;
}

void printForward(DNode_t *head) {
    printf("Forward:  ");
    DNode_t *cur = head;
    while (cur != NULL) {
        printf("%d", cur->data);
        if (cur->next)
        printf(" <-> ");
        cur = cur->next;
    }
    printf(" -> NULL\n");
}

void printBackward(DNode_t *head) {
    printf("Backward: ");
    if (head == NULL) {
        printf("NULL\n");
        return;
    }
    DNode_t *cur = head;
    while (cur->next != NULL) {
        cur = cur->next;
    }
    while (cur != NULL) {
        printf("%d", cur->data);
        if (cur->prev)
        printf(" <-> ");
        cur = cur->prev;
    }
    printf(" -> NULL\n");
}

void freeDList(DNode_t *head) {
    DNode_t *cur = head;
    while (cur != NULL) {
        DNode_t *next = cur->next;
        free(cur);
        cur = next;
    }
}

int main(void) {
    DNode_t *head = NULL;

    insertAtTail(&head, 5);
    insertAtTail(&head, 10);
    insertAtTail(&head, 15);
    insertAtTail(&head, 20);

    printForward(head);
    printBackward(head);

    freeDList(head);
    return 0;
}
*/

//Problem 2:Doubly linked list- delete by value
/*
#include <stdio.h>
#include <stdlib.h>

typedef struct DNode {
    int data;
    struct DNode *prev;
    struct DNode *next;
} DNode_t;

DNode_t *createDNode(int value) {
    DNode_t *n = malloc(sizeof(DNode_t));
    n->data = value;
    n->prev = NULL;
    n->next = NULL;
    return n;
}

void insertAtTail(DNode_t **head, int value) {
    DNode_t *newNode = createDNode(value);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    DNode_t *cur = *head;
    while (cur->next != NULL) {
        cur = cur->next;
    }
    cur->next = newNode;
    newNode->prev = cur;
}

void deleteByValue(DNode_t **head, int value) {
    if (*head == NULL) return;

    DNode_t *cur = *head;
    while (cur != NULL && cur->data != value) {
        cur = cur->next;
    }

    if (cur == NULL) return;

    if (cur == *head) {
        *head = cur->next;
    } else {
        cur->prev->next = cur->next;
    }

    if (cur->next != NULL) {
        cur->next->prev = cur->prev;
    }

    free(cur);
}

void printForward(DNode_t *head) {
    DNode_t *cur = head;
    while (cur != NULL) {
        printf("%d", cur->data);
        if (cur->next!=NULL)
        printf(" <-> ");
        cur = cur->next;
    }
    printf(" -> NULL\n");
}

void printBackward(DNode_t *head) {
    if (head == NULL) {
        printf("NULL\n");
        return;
    }
    DNode_t *cur = head;
    while (cur->next != NULL) {
        cur = cur->next;
    }
    while (cur != NULL) {
        printf("%d", cur->data);
        if (cur->prev) printf(" <-> ");
        cur = cur->prev;
    }
    printf(" -> NULL\n");
}

void freeDList(DNode_t *head) {
    DNode_t *cur = head;
    while (cur != NULL) {
        DNode_t *next = cur->next;
        free(cur);
        cur = next;
    }
}

int main(void) {
    DNode_t *head = NULL;

    insertAtTail(&head, 5);
    insertAtTail(&head, 10);
    insertAtTail(&head, 15);
    insertAtTail(&head, 20);

    printf("Before: Forward: ");
    printForward(head);

    deleteByValue(&head, 10);

    printf("After:  Forward: ");
    printForward(head);
    printf("After:  Backward: ");
    printBackward(head);

    freeDList(head);
    return 0;
}
*/

//Problem 3:Circular Singly- Build and Count nodes
/*
#include <stdio.h>
#include <stdlib.h>

typedef struct CNode {
    int data;
    struct CNode *next;
} CNode_t;

CNode_t *createCNode(int value) {
    CNode_t *n = malloc(sizeof(CNode_t));
    n->data = value;
    n->next = n;
    return n;
}

CNode_t *insertAtTailCircular(CNode_t *tail, int value) {
    CNode_t *newNode = createCNode(value);
    if (tail == NULL) {
        return newNode;
    }
    newNode->next = tail->next;
    tail->next = newNode;
    return newNode;
}

int countNodes(CNode_t *tail) {
    if (tail == NULL) return 0;

    int count = 0;
    CNode_t *head = tail->next;
    CNode_t *cur = head;

    do {
        count++;
        cur = cur->next;
    } while (cur != head);

    return count;
}

void printCircular(CNode_t *tail) {
    if (tail == NULL) {
        printf("(empty)\n");
        return;
    }
    CNode_t *head = tail->next;
    CNode_t *cur = head;
    do {
        printf("%d -> ", cur->data);
        cur = cur->next;
    } while (cur != head);
    printf("(back to head)\n");
}

void freeCircular(CNode_t *tail) {
    if (tail == NULL) return;
    CNode_t *head = tail->next;
    tail->next = NULL;
    CNode_t *cur = head;
    while (cur != NULL) {
        CNode_t *next = cur->next;
        free(cur);
        cur = next;
    }
}

int main(void) {
    CNode_t *tail = createCNode(1);
    tail = insertAtTailCircular(tail, 2);
    tail = insertAtTailCircular(tail, 3);
    tail = insertAtTailCircular(tail, 4);

    printf("Ring: ");
    printCircular(tail);

    int count = countNodes(tail);
    printf("Node count: %d\n", count);

    freeCircular(tail);
    return 0;
}
*/

