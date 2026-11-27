#include<stdio.h>
int sharedcounter=0;  //External Linkage
static int privatecounter=0; //Internal Linkage

void publicgreeting(){
	printf("publicgreeting() has been called\n");
}
static void privatehelper(){
	printf("privatehelper() has been called\n");
}
void incrementandgreet(){
	sharedcounter++;
	privatecounter++;
	publicgreeting();
	privatehelper();
	printf("Inside module_a: sharedcounter is %d,privatecounter is %d\n",sharedcounter,privatecounter);
}



