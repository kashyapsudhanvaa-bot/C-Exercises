//Various Function Types
/*
#include<stdio.h>
 void greet(){
	 printf("Hello\n");
 }
 void greetperson(char name[]){
	 printf("Hello %s\n",name);
 }
 int getfive(){
	 return 5;
 }
 int square(int x){
	 return x*x;
 }
int main(void){

	greet();
	greetperson("Sudhanvaa");
	printf("Getfive() is %d\n",getfive());
	printf("Square of 6 is %d\n",square(6));
	return 0;
}
*/
//Pointers to Functions
/*
#include<stdio.h>
int add(int a,int b){
	return a+b;
}
int multiply(int a,int b){
	return a*b;
}
int (*command)(int x,int y);
int main(void){
	command=add;
	printf("%d\n",command(4,5));
	command=multiply;
	printf("%d\n",command(3,6));
}
*/
//Recursive Function
/*
#include<stdio.h>

int factorial(int n){
	if(n==0 || n==1){
		return 1;    //Base Case
	}
	return n*factorial(n-1);   //Calling factorial of n-1 (Recursive Case)
}

int main(void){
	printf("Factorial of 5 is %d",factorial(5));
}
*/
//Problem 1:Calculator Functions
/*
#include<stdio.h>

int add(int a,int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
int product(int a,int b){
	return a*b;
}
float division(int a,int b){
	return (float)a/b;
}
int main(void){
	printf("add(10,3)=%d\n",add(10,3));
	printf("sub(10,3)=%d\n",sub(10,3));
	printf("product(10,3)=%d\n",product(10,3));
	printf("division(10,3)=%.2f\n",division(10,3));
}
*/

//Problem 2:Button Press Counter
/*
#include<stdio.h>

void buttonpressed(){
	static int count=0;
	count++;
	printf("Button Pressed %d time(s)\n",count);
}
int main(void){
	buttonpressed();
	buttonpressed();
	buttonpressed();
	buttonpressed();
}
*/

//Problem 3:Recursive Fibonacci
/*
#include<stdio.h>

int fibonacci(int n){

	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	return fibonacci(n-1)+fibonacci(n-2);
}
int main(void){
     for(int i=0;i<=7;i++){
    	 printf("Fibonacci(%d)=%d\n",i,fibonacci(i));

     }
     return 0;

}
*/
