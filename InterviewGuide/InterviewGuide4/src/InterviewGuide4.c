//Problem 1:Predict the struct size
/*
#include<stdio.h>

struct Record{
	char a;
	double b;
	short c;
};

int main(){
	printf("sizeof(stuct Record)=%zu",sizeof(struct Record));
}
*/

//Problem 2:Detect Endianness using a Union
/*
#include<stdio.h>
int main(){
unsigned int  a=1;
unsigned char *c=(unsigned char*)&a;

if(*c==1){
	printf("Little Endian");
	}
else{
	printf("Big Endian");
}
}
*/

//Problem 3:Pack and Unpack flags With Bitwise Operators

#include<stdio.h>

#define READY (1<<0)
#define ERROR (1<<1)
#define BUSY (1<<2)

int main(){
	int errorcode;
	unsigned char status;
	printf("Enter Error Code: ");
	fflush(stdout);
	scanf("%d",&errorcode);
	if(errorcode==0){
	status=READY | BUSY;
	printf("Status byte =0x%02x\n",status);
	printf("Ready set?%s\n",(status & READY)?"yes" : "no");
	printf("error set?%s\n",(status & ERROR)? "yes" :"no");
	printf("Busy set?%s\n",(status & BUSY)? "yes":"no");

	status&=~BUSY;

	printf("Status byte=0x%02x\n",status);

	}
	else{
		status=ERROR;
		printf("Status byte=0x%02x\n",status);
	}
   return 0;
}


//Problem 4:Compare two structures for equality
/*
#include<stdio.h>
#include<stdbool.h>

struct Point{
	int x;
	int y;
};

void comp(struct Point p1,struct Point p2){
	if(p1.x==p2.x && p1.y==p2.y){
		printf("True\n");
		}
	else
		printf("False\n");
	}

int main(){
	struct Point p1={3,4};
	struct Point p2={3,4};
	struct Point p3={3,2};

	comp(p1,p2);
	comp(p1,p3);
}
*/



//Problem 6:Nested Structure
/*
#include<stdio.h>

struct Date{
	int day;
	int month;
	int year;
};

struct Employee{
	int id;
	struct Date doj;
};

int main(){
	struct Employee a1;
	a1.id=201;
	a1.doj.day=15;
	a1.doj.month=6;
	a1.doj.year=2020;

	printf("Employee %d joined on %      ",a1.id,a1.doj);
}
*/
