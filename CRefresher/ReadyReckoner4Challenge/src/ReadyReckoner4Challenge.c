//Problem 7:Bitfield Status Register Over Time

#include<stdio.h>
//Initialize strucr
struct StatusReg{
	unsigned int ready     :1;
	unsigned int error     :1;
	unsigned int overflow  :1;
	unsigned int mode      :2;
};

int main(void){
	struct StatusReg s={0};
	s.ready=1;
	s.mode=3;
	printf("Step 1: ready=%u,error=%u,overflow=%u,mode=%u\n",s.ready,s.error,s.overflow,s.mode);
	s.error=1;
	printf("Step 1: ready=%u,error=%u,overflow=%u,mode=%u\n",s.ready,s.error,s.overflow,s.mode);
	printf("sizeof(struct StatusReg) is %zu",sizeof(struct StatusReg));

}

//Problem 8:The Same Register Without Bitfield Syntax

#include<stdio.h>

unsigned char s=0;
