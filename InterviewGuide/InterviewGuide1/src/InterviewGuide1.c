//Problem 1:Swap two numbers without a temporary variable
/*
#include<stdio.h>

int main(){
	int a=5,b=9;
	printf("Before: a=%d,b=%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After: a=%d,b=%d\n",a,b);
}
*/

//Problem 2:Palindrome  Number Check
/*
#include<stdio.h>

int main(){
	int n,temp,rev=0;
	printf("Enter number: ");
	fflush(stdout);
	scanf("%d",&n);
	temp=n;
	while(n!=0){
	int dig=n%10;
	rev=rev*10+dig;
	n=n/10;
	}
	if(temp==rev){
		printf("%d is a palindrome",temp);
	}
	else{
		printf("%d is not a palindrome",temp);
	}
}
*/
//Problem 4:Print a Pyramid Pattern
/*
#include<stdio.h>

int main(){
int n=4;
for(int i=n;i>0;i--){
	for(int j=i;j<=n;j++){
		printf("*");
	}
	printf("\n");
}
}
*/

//Problem 5:Fizzbuzz

#include<stdio.h>

int main(){
	int i;
	for(i=1;i<=15;i++){
		if(i%3==0)
			printf("FIZZ\n");
		if(i%5==0)
			printf("BUZZ\n");
		else
			printf("%d\n",i);
	}
}

//Problem 6:Prime Check,Optimized
/*
#include<stdio.h>
#include<math.h>

void isPrime(int n){
	int count=0;
	int s=sqrt(n);
	for(int i=1;i<=s;i++){
		if(n%i==0)
			count++;
		}
	if(count>1){
		printf("%d is not a prime",n);
	}
	else{
		printf("%d is a prime",n);
	}
}

int main(){
	isPrime(17);
}
*/

