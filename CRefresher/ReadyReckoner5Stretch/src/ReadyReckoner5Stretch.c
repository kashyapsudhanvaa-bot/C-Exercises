//Problem 4:Dynamic Array with Growth
/*
#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int *arr = malloc(3 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    arr[0]=70;
    arr[1]=80;
    arr[2]=90;



    printf("Initial: ");
    for (int i = 0; i < 3; i++) {

        printf("%d ", arr[i]);
    }
    printf("\n");


    int *temp = realloc(arr, 5 * sizeof(int));
    if (temp == NULL) {
        printf("Memory reallocation failed!\n");
        free(arr);
        return 1;
    }
    arr = temp;


    arr[3] = 100;
    arr[4] = 110;


    printf("After growing: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    free(arr);


    int *calloc_arr = (int *)calloc(5, sizeof(int));
    if (calloc_arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }


    printf("calloc result: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", calloc_arr[i]);
    }
    printf("\n");


    free(calloc_arr);

    return 0;
}
*/

//Problem 5:Structures and Pointers
/*
#include <stdio.h>

struct Motor {
    int id;
    int speed;
};

void increaseSpeed(struct Motor *m, int amount) {
    m->speed += amount;
}

int main(void) {
    struct Motor m1 = {1, 50};

    printf("Before: id=%d, speed=%d\n", m1.id, m1.speed);

    increaseSpeed(&m1, 25);

    printf("After:  id=%d, speed=%d\n", m1.id, m1.speed);

    return 0;
}
*/

//Problem 6:Preprocessor Macros

#include <stdio.h>

#define MIN(a, b) (((a) < (b)) ? (a) : (b))
#define ARRAY_SIZE 5

int main(void) {
    int x = 12, y = 7;
    printf("MIN(12, 7) = %d\n", MIN(x, y));

    int arr[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = i + 1;
    }

    printf("ARRAY_SIZE = %d\n", ARRAY_SIZE);
    printf("Last element: %d\n", arr[ARRAY_SIZE - 1]);

    return 0;
}
