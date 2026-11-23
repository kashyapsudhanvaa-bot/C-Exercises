//Problem 1:Factorial
/*
#include<stdio.h>

int factorial(int n){
	if(n==1 || n==0){
		return 1;
	}
	return n*factorial(n-1);
}

int main(){
	inbbbbbt n=factorial(5);
	printf("Factorial of 5 is %d",n);
}
*/

//Problem 2:Sum of digits
/*
#include<stdio.h>

int sumofdig(int n){
	if(n%10==n){
		return n;
	}
	int a=n%10;
	int sum=a+sumofdig(n/10);
	return sum;
}

int main(){
	int s=sumofdig(2345);
	printf("%d ",s);
}
*/

//Problem 3:GCD using the Recursive Euclidean Algorithm
/*
#include<stdio.h>

int GCD(int a,int b){
	if(a%b==0){

		return b;
	}
	int temp=b;
	b=a%b;
	a=temp;
   return GCD(a,b);
}

int main(){
	int x=GCD(48,18);
	printf("GCD is %d",x);
}
*/

//Problem 4:Power Function
/*
#include<stdio.h>

int power(int base,int exp){

	if(exp==0){
		return 1;
	}

	return base*power(base,exp-1);
}

int main(){
	int res=power(2,5);
	printf("%d ",res);
}
*/
//Problem 5:Tower of Hanoi

#include<stdio.h>

void towerofHanoi(int n,char from,char to,char aux){
	if(n==1){
		printf("Moving disk 1 from %c to %c\n",from,to);
		return;
	}
	towerofHanoi(n-1,from,aux,to);
	printf("Moving disk %d from %c to %c\n",n,from,to);
	towerofHanoi(n-1,aux,to,from);
}

int main(){
	towerofHanoi(3,'A','C','B');
}


//Problem 6:Counting Function Calls with static variables
/*
#include<stdio.h>

void count(){
	static int count=1;
	printf("Function has been called %d time(s)\n",count);
	count++;

}

int main(){
	count();
	count();
	count();
}
*/
