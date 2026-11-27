//Problem 4:Circular Singly- Delete a node
/*
#include <stdio.h>
#include <stdlib.h>

typedef struct CDNode {
    int data;
    struct CDNode *prev;
    struct CDNode *next;
} CDNode_t;

CDNode_t *createCDNode(int value) {
    CDNode_t *n = malloc(sizeof(CDNode_t));
    n->data = value;
    n->prev = n;
    n->next = n;
    return n;
}

void insertAfter(CDNode_t *after, int value) {
    CDNode_t *newNode = createCDNode(value);
    CDNode_t *successor = after->next;
    newNode->next = successor;
    newNode->prev = after;
    after->next = newNode;
    successor->prev = newNode;
}

void printCDForward(CDNode_t *head) {
    CDNode_t *cur = head;
    do {
        printf("%d", cur->data);
        cur = cur->next;
        if (cur != head) printf(" <-> ");
    } while (cur != head);
    printf(" (circular)\n");
}

void printCDBackward(CDNode_t *head) {
    CDNode_t *cur = head;
    do {
        printf("%d", cur->data);
        cur = cur->prev;
        if (cur != head) printf(" <-> ");
    } while (cur != head);
    printf(" (circular)\n");
}

void freeCDList(CDNode_t *head) {
    if (head == NULL) return;
    CDNode_t *tail = head->prev;
    tail->next = NULL;
    head->prev = NULL;
    CDNode_t *cur = head;
    while (cur != NULL) {
        CDNode_t *next = cur->next;
        free(cur);
        cur = next;
    }
}

int main(void) {
    CDNode_t *head = createCDNode(100);
    insertAfter(head, 200);
    insertAfter(head->next, 300);
    insertAfter(head, 150);

    printf("Forward:  ");
    printCDForward(head);
    printf("Backward: ");
    printCDBackward(head);

    freeCDList(head);
    return 0;
}
*/

//Problem 5: Circular Doubly- Insert and traverse
/*
#include <stdio.h>
#include <stdlib.h>

typedef struct CDNode {
    int data;
    struct CDNode *prev;
    struct CDNode *next;
} CDNode_t;

CDNode_t *createCDNode(int value) {
    CDNode_t *n = malloc(sizeof(CDNode_t));
    n->data = value;
    n->prev = n;
    n->next = n;
    return n;
}

void insertAfter(CDNode_t *after, int value) {
    CDNode_t *newNode = createCDNode(value);
    CDNode_t *successor = after->next;
    newNode->next = successor;
    newNode->prev = after;
    after->next = newNode;
    successor->prev = newNode;
}

void printCDForward(CDNode_t *head) {
    CDNode_t *cur = head;
    do {
        printf("%d", cur->data);
        cur = cur->next;
        if (cur != head) printf(" <-> ");
    } while (cur != head);
    printf(" (circular)\n");
}

void printCDBackward(CDNode_t *head) {
    CDNode_t *cur = head;
    do {
        printf("%d", cur->data);
        cur = cur->prev;
        if (cur != head) printf(" <-> ");
    } while (cur != head);
    printf(" (circular)\n");
}

void freeCDList(CDNode_t *head) {
    if (head == NULL) return;
    CDNode_t *tail = head->prev;
    tail->next = NULL;
    head->prev = NULL;
    CDNode_t *cur = head;
    while (cur != NULL) {
        CDNode_t *next = cur->next;
        free(cur);
        cur = next;
    }
}

int main(void) {
    CDNode_t *head = createCDNode(100);
    insertAfter(head, 200);
    insertAfter(head->next, 300);
    insertAfter(head, 150);

    printf("Forward:  ");
    printCDForward(head);
    printf("Backward: ");
    printCDBackward(head);

    freeCDList(head);
    return 0;
}
*/

//Problem 6:Josephus Problem on a Circular Singly list

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

void solveJosephus(CNode_t *tail, int k) {
    if (tail == NULL) return;

    CNode_t *prev = tail;
    CNode_t *cur = tail->next;

    while (cur->next != cur) {
        for (int i = 0; i < k - 1; i++) {
            prev = cur;
            cur = cur->next;
        }
        prev->next = cur->next;
        printf("Eliminated: %d\n", cur->data);
        free(cur);
        cur = prev->next;
    }

    printf("Survivor: %d\n", cur->data);
    free(cur);
}

int main(void) {
    CNode_t *tail = createCNode(1);
    tail = insertAtTailCircular(tail, 2);
    tail = insertAtTailCircular(tail, 3);
    tail = insertAtTailCircular(tail, 4);
    tail = insertAtTailCircular(tail, 5);
    tail = insertAtTailCircular(tail, 6);
    tail=insertAtTailCircular(tail,7);
    tail=insertAtTailCircular(tail,8);

    solveJosephus(tail, 2);

    return 0;
}
