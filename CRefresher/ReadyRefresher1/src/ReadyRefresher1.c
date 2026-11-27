// Problem 1(Even or Odd Classifier)
/*
#include<stdio.h>

int x;

int main(void){

printf("Enter your number: \n");
fflush(stdout); // Force the text out of the buffer immediately

scanf("%d", &x);

if(x%2==0){
	printf("Even\n");
}
else{
	printf("Odd\n");
}
return 0;
}
*/

//One Variable From Each Segment
/*
#include<stdio.h>
#include<stdlib.h>

int global_initialized=100;
int global_uninitialized;

int main(void){
	int local_initialized=5;
	static int static_var=20;
	int *heap_var= malloc(sizeof(int));
	*heap_var=50;

	printf("Global initialized %d\n",global_initialized);
	printf("Global unitialized %d\n",global_uninitialized);
	printf("Local initialized %d\n",local_initialized);
	printf("Static variable %d \n",static_var);
	printf("*heap var is %d\n",*heap_var);
	free(heap_var);
			return 0;

}
*/

//Problem 2 :Grade Classifier
/*
#include<stdio.h>
int score;
int main(void){

printf("Enter your score: ");
fflush(stdout);
scanf("%d",&score);

if(score>=90){
	printf("Grade A");
}
else if(90 >score && score >=80){
	printf("Grade B");
}
else if(80 >score && score >=70){
	printf("Grade C");
}
else if(70>score && score>=60){
	printf("Grade D");
}
else{
	printf("F");
}
}
*/

//Problem 3:Superloop Problem
/*

#include<stdio.h>
int threshold=30;
int main(void){
	int reading=0;
	while(reading<=threshold){
		printf("Reading: %d\n",reading);
		reading+=10;
	}
	printf("Warning:Threshold Breached");
}
*/

