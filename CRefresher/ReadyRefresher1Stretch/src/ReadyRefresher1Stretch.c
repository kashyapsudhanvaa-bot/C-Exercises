#include<stdio.h>

int x;
int uninitialized[1000];

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
