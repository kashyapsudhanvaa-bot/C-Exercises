//Problem 1:Types of Pointers
/*
#include<stdio.h>
 int main(void){
	 int score=85;

	 int *scoreptr=&score;
	 int *null_ptr=NULL;

	 if(null_ptr==NULL){
		 printf("nullptr is null\n");

	 }
	 printf("scoreptr points to: %d\n",*scoreptr);

	 void *genericptr=&score;
	 printf("generic ptr as int: %d\n",*(int *)genericptr);
	 return 0;

 }
*/

//Problem 2:Constant Pointers
/*
#include<stdio.h>
int main(void){
	int temperature=25,humidity=60;
	const int *readonly=&temperature;
	printf("readonly: %d\n",*readonly);
	readonly=&humidity;
	printf("readonly after reassignment: %d\n",*readonly);
	int *const fixedtarget=&temperature;
	*fixedtarget=30;
	printf("temperature after fixedtarget is %d\n",*fixedtarget);
	return 0;
}
*/

//Problem 3:Swap using pointers
#include<stdio.h>
void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(void){
	int p=3,q=7;
	swap(&p,&q);
	printf("After swapping p=%d,q=%d",p,q);

}
