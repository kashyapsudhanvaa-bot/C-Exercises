//Problem 1:Returning a Pointer to a local variable
/*
#include<stdio.h>

int* getValuePtr(int input) {
static int result;
result = input * 2;
return &result;
}

int main(){
	int a=21;
	int *res=getValuePtr(a);
	printf("%d",*res);
}
*/


//Problem 2:Double Pointers
/*
#include<stdio.h>
#include<stdlib.h>

void changeValue(int **p,int target){
 int *a=malloc(sizeof(int));
 *a=target;
 *p=a;
// printf("%d",*a);

}

int main(){
	int *p;

	changeValue(&p,42);
	printf("%d",*p);

}
*/

//Problem 3:Pointer Arihmetic Across Different Data Types
/*
#include<stdio.h>

int main(){
	int a=0;
	int *ip=&a;
	float c;

	double b=0;
	double *dp=&b;

	long diff1=(char*)(ip+1)-(char*)(ip);
	long diff2=(char*)(dp+1)-(char*)(dp);

	printf("each ip++ advances by %ld bytes\n",diff1);
	printf("each dp++ advances by %ld bytes\n",diff2);
	printf("%zu",sizeof(c));
}
*/

//Problem 4:Array of Pointers vs. Pointer to an array
/*
#include <stdio.h>

int main() {
    int v1 = 1, v2 = 2, v3 = 3;
    int *arr_of_ptrs[3] = {&v1, &v2, &v3};

    printf("Array of pointers:");
    for (int i = 0; i < 3; i++) {
        printf(" %d", *arr_of_ptrs[i]);
    }
    printf("\n");

    int grid[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int (*ptr_to_arr)[3] = &grid[1];

    printf("Pointer to array, row 1:");
    for (int i = 0; i < 3; i++) {
        printf(" %d", (*ptr_to_arr)[i]);
    }
    printf("\n");

    return 0;
}
*/


/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(sizeof(int));
    if (ptr == NULL) {
        return 1;
    }

    *ptr = 100;
    printf("Before free: *ptr = %d\n", *ptr);

    free(ptr);
    ptr = NULL;

    if (ptr == NULL) {
        printf("ptr is now NULL, safe, cannot be accidentally dereferenced\n");
    }

    return 0;
}
*/
