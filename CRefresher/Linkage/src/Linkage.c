#include<stdio.h>
extern int sharedcounter;
void publicgreeting();
void incrementandgreet();

int main(void){
	incrementandgreet();
	publicgreeting();
	printf("Inside main: SharedCounter is %d",sharedcounter);
	return 0;
}
