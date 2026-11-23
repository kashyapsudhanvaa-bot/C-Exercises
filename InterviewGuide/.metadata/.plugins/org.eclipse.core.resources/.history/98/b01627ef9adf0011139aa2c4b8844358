//Problem 1
/*
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node_t;

Node_t *createNode(int value) {
    Node_t *n = (Node_t *)malloc(sizeof(Node_t));
    n->data = value;
    n->next = NULL;
    return n;
}

int hasCycle(Node_t *head) {
    Node_t *slow = head;
    Node_t *fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return 1;
    }
    return 0;
}

Node_t *safeReverse(Node_t *head) {
    if (hasCycle(head)) {
        printf("Cycle detected! Reversal aborted.\n");
        return head;
    }
    Node_t *prev = NULL;
    Node_t *cur = head;
    while (cur != NULL) {
        Node_t *next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;
}

void printList(Node_t *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void freeList(Node_t *head) {
    while (head != NULL) {
        Node_t *temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    Node_t *head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);

    printf("Before: ");
    printList(head);

    head = safeReverse(head);

    printf("After:  ");
    printList(head);

    freeList(head);
    return 0;
}
*/

//Problem 2
/*
#include <stdio.h>

int binarySearchRecursive(const int arr[], int left, int right, int target) {
    if (left > right) return -1;

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
        return mid;
    } else if (arr[mid] > target) {
        return binarySearchRecursive(arr, left, mid - 1, target);
    } else {
        return binarySearchRecursive(arr, mid + 1, right, target);
    }
}

int main(void) {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);

    int idx1 = binarySearchRecursive(arr, 0, size - 1, 23);
    int idx2 = binarySearchRecursive(arr, 0, size - 1, 99);

    printf("23 found at index: %d\n", idx1);
    printf("99 found at index: %d\n", idx2);

    return 0;
}
*/

//Problem 3
/*
#include <stdio.h>

typedef struct {
    unsigned int sensor1 : 4;
    unsigned int sensor2 : 4;
    unsigned int sensor3 : 4;
} SensorPacket_t;

int main(void) {
    SensorPacket_t packet = {0};

    packet.sensor1 = 9;
    packet.sensor2 = 14;
    packet.sensor3 = 3;

    printf("sensor1=%u, sensor2=%u, sensor3=%u\n",
           packet.sensor1, packet.sensor2, packet.sensor3);

    return 0;
}
*/

//Problem 4
/*
#include <stdio.h>

void reverseStringInPlace(char *str) {
    if (str == NULL || *str == '\0') return;

    char *left = str;
    char *right = str;

    while (*(right + 1) != '\0') {
        right++;
    }

    while (left < right) {
        char temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}

int main(void) {
    char word[] = "embedded";

    printf("Before: %s\n", word);
    reverseStringInPlace(word);
    printf("After:  %s\n", word);

    return 0;
}
*/

//Problem 5
/*
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node_t;

Node_t *createNode(int value) {
    Node_t *n = (Node_t *)malloc(sizeof(Node_t));
    n->data = value;
    n->next = NULL;
    return n;
}

int countNodes(Node_t *head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

int *listToArray(Node_t *head, int *outSize) {
    *outSize = countNodes(head);
    if (*outSize == 0) return NULL;

    int *arr = (int *)malloc((size_t)(*outSize) * sizeof(int));
    Node_t *cur = head;
    for (int i = 0; i < *outSize; i++) {
        arr[i] = cur->data;
        cur = cur->next;
    }
    return arr;
}

Node_t *arrayToList(const int arr[], int size) {
    if (size <= 0) return NULL;

    Node_t *head = createNode(arr[0]);
    Node_t *tail = head;
    for (int i = 1; i < size; i++) {
        tail->next = createNode(arr[i]);
        tail = tail->next;
    }
    return head;
}

void printList(Node_t *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void freeList(Node_t *head) {
    while (head != NULL) {
        Node_t *temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    Node_t *original = createNode(5);
    original->next = createNode(10);
    original->next->next = createNode(15);

    int size = 0;
    int *arr = listToArray(original, &size);

    printf("Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    Node_t *rebuilt = arrayToList(arr, size);
    printf("Rebuilt list: ");
    printList(rebuilt);

    free(arr);
    freeList(original);
    freeList(rebuilt);
    return 0;
}
*/

//Problem 6
/*
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int sensor_id;
    float value;
} Reading_t;

int main(void) {
    const char *filename = "readings.bin";
    Reading_t original[3] = {
        {1, 23.5f},
        {2, 45.1f},
        {3, 12.8f}
    };


    FILE *out = fopen(filename, "wb");
    if (out == NULL) {
        perror("Failed to open file for writing");
        return 1;
    }
    fwrite(original, sizeof(Reading_t), 3, out);
    fclose(out);


    Reading_t loaded[3] = {0};
    FILE *in = fopen(filename, "rb");
    if (in == NULL) {
        perror("Failed to open file for reading");
        return 1;
    }
    size_t count = fread(loaded, sizeof(Reading_t), 3, in);
    fclose(in);

    printf("Loaded %zu records:\n", count);
    for (size_t i = 0; i < count; i++) {
        printf("Sensor %d: %.1f\n", loaded[i].sensor_id, loaded[i].value);
    }

    return 0;
}
*/

//Problem 7
/*
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    int age;
} Employee_t;

int compareByAge(const void *a, const void *b) {
    const Employee_t *empA = (const Employee_t *)a;
    const Employee_t *empB = (const Employee_t *)b;
    return (empA->age > empB->age) - (empA->age < empB->age);
}

int main(void) {
    Employee_t staff[] = {
        {101, 35},
        {102, 28},
        {103, 42},
        {104, 31}
    };
    size_t n = sizeof(staff) / sizeof(staff[0]);

    qsort(staff, n, sizeof(Employee_t), compareByAge);

    for (size_t i = 0; i < n; i++) {
        printf("ID %d, Age %d\n", staff[i].id, staff[i].age);
    }

    return 0;
}
*/

//Problem 8
/*
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int sensor_id;
    float value;
} Reading_t;

typedef struct Node {
    Reading_t data;
    struct Node *next;
} Node_t;

Node_t *createReadingNode(int id, float val) {
    Node_t *n = (Node_t *)malloc(sizeof(Node_t));
    if (n == NULL) exit(1);
    n->data.sensor_id = id;
    n->data.value = val;
    n->next = NULL;
    return n;
}

void printReadingList(Node_t *head) {
    while (head != NULL) {
        printf("Sensor %d: %.1f -> ", head->data.sensor_id, head->data.value);
        head = head->next;
    }
    printf("NULL\n");
}

void freeList(Node_t *head) {
    while (head != NULL) {
        Node_t *temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    Node_t *head = createReadingNode(1, 23.5f);
    head->next = createReadingNode(2, 45.1f);

    printReadingList(head);

    freeList(head);
    return 0;
}
*/

//Problem 9
/*
#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node_t;

Node_t *createNode(int value) {
    Node_t *n = (Node_t *)malloc(sizeof(Node_t));
    if (n == NULL) exit(1);
    n->data = value;
    n->next = NULL;
    return n;
}

void saveListToFile(Node_t *head, const char *filename) {
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        perror("Failed to open file for writing");
        exit(1);
    }
    while (head != NULL) {
        fprintf(fp, "%d\n", head->data);
        head = head->next;
    }
    fclose(fp);
}

Node_t *loadListFromFile(const char *filename) {
    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Failed to open file for reading");
        exit(1);
    }
    Node_t *head = NULL;
    Node_t *tail = NULL;
    int val;
    while (fscanf(fp, "%d", &val) == 1) {
        Node_t *newNode = createNode(val);
        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    fclose(fp);
    return head;
}

void printList(Node_t *head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

void freeList(Node_t *head) {
    while (head != NULL) {
        Node_t *temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    const char *filename = "list_values.txt";

    Node_t *original = createNode(7);
    original->next = createNode(14);
    original->next->next = createNode(21);

    saveListToFile(original, filename);

    Node_t *rebuilt = loadListFromFile(filename);
    printf("Rebuilt list: ");
    printList(rebuilt);

    freeList(original);
    freeList(rebuilt);
    return 0;
}
*/

//Problem 10
/*
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *data;
    size_t size;
} Buffer_t;

Buffer_t *deepCopyBuffer(const Buffer_t *src) {
    if (src == NULL) return NULL;

    Buffer_t *copy = (Buffer_t *)malloc(sizeof(Buffer_t));
    if (copy == NULL) return NULL;

    copy->size = src->size;
    copy->data = (int *)malloc(src->size * sizeof(int));
    if (copy->data == NULL) {
        free(copy);
        return NULL;
    }

    for (size_t i = 0; i < src->size; i++) {
        copy->data[i] = src->data[i];
    }
    return copy;
}

int main(void) {
    Buffer_t original;
    original.size = 3;
    original.data = (int *)malloc(original.size * sizeof(int));
    original.data[0] = 1;
    original.data[1] = 2;
    original.data[2] = 3;

    Buffer_t *copy = deepCopyBuffer(&original);


    copy->data[0] = 99;

    printf("Original data[0]: %d\n", original.data[0]);
    printf("Copy data[0]: %d\n", copy->data[0]);

    free(original.data);
    free(copy->data);
    free(copy);
    return 0;
}
*/

//Problem 11
/*
#include <stdio.h>
#include <stdbool.h>

void sieveOfEratosthenes(int limit) {
    bool isPrime[limit + 1];

    for (int i = 0; i <= limit; i++) {
        isPrime[i] = true;
    }
    isPrime[0] = false;
    isPrime[1] = false;

    for (int p = 2; p * p <= limit; p++) {
        if (isPrime[p]) {
            for (int multiple = p * p; multiple <= limit; multiple += p) {
                isPrime[multiple] = false;
            }
        }
    }

    printf("Primes up to %d: ", limit);
    for (int i = 2; i <= limit; i++) {
        if (isPrime[i]) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main(void) {
    sieveOfEratosthenes(30);
    return 0;
}
*/

//Problem 12
/*
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const char *filename = "sample_text.txt";


    FILE *setup = fopen(filename, "w");
    if (setup == NULL) return 1;
    fputs("This is a moderately long line of text for testing.", setup);
    fclose(setup);


    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Failed to open file");
        return 1;
    }

    size_t capacity = 8;
    size_t length = 0;
    char *buffer = (char *)malloc(capacity);
    if (buffer == NULL) {
        fclose(fp);
        return 1;
    }

    int ch;
    while ((ch = fgetc(fp)) != EOF) {
        if (length + 1 >= capacity) {
            capacity *= 2;
            char *newBuf = (char *)realloc(buffer, capacity);
            if (newBuf == NULL) {
                free(buffer);
                fclose(fp);
                return 1;
            }
            buffer = newBuf;
        }
        buffer[length++] = (char)ch;
    }
    buffer[length] = '\0';
    fclose(fp);

    printf("Read %zu bytes using final capacity %zu\n", length, capacity);
    printf("Contents: %s\n", buffer);

    free(buffer);
    return 0;
}
*/

//Problem 13
/*
#include <stdio.h>

int main(void) {
    const char *filename = "numbers.txt";


    FILE *setup = fopen(filename, "w");
    if (setup == NULL) return 1;
    fprintf(setup, "10 20 30 40 50\n");
    fclose(setup);


    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        perror("Failed to open file");
        return 1;
    }

    int numbers[100];
    int count = 0;
    long sum = 0;

    while (count < 100 && fscanf(fp, "%d", &numbers[count]) == 1) {
        sum += numbers[count];
        count++;
    }
    fclose(fp);

    double average = (count > 0) ? (double)sum / count : 0.0;
    printf("Read %d numbers, average = %.1f\n", count, average);

    return 0;
}
*/
