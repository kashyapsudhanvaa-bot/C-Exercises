/* //Pointers basic
#include<stdio.h>
int main(void) {
	int temp = 72;

	int *p = &temp;
	printf("temperature is %d\n", temp);
	printf("Address is %p\n", (void*) &temp);
	printf("p is %d\n", *p);
	printf("Address is %p\n", (void*) p);
	return 0;

}
*/
/*//Function for swapping
#include<stdio.h>
void swap(int *a,int *b){
int temp=*a;
*a=*b;
*b=temp;
}
int main(void){
int a=3,b=4;
swap(&a,&b);
printf("a is %d and b is %d",a,b);
return 0;
}
*/

/* // Traversing an array and finding max value
#include<stdio.h>
int main(void){
	int nums[6]={3,1,4,1,5,9};
	int *p=nums;
	int max=*p;

	for(int i=0;i<6;i++)
	{
		if (*(p+i)>max)
				{
			max=*(p+i);
		}
	}
	printf("%d",max);
	return 0;

	}
*/
