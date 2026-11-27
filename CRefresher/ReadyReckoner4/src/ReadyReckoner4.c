//Struct Initialization
/*
#include<stdio.h>

struct SensorReading{
	float value;
	int id;
	char unit[10];
};

int main(void){
	struct SensorReading r1={33.4,1,"C"};

	struct SensorReading r2;
	r2.value=45.6;
	r2.id=2;
	r2.unit[0]='k';
	r2.unit[1]='p';
	r2.unit[2]='a';
	r2.unit[3]='\0';
	printf("id:%d, value:%.1f, unit:%s\n",r1.id,r1.value,r1.unit);
	printf("id:%d,value:%.1f,unit:%s",r2.id,r2.value,r2.unit);
}
*/

//Various Styles of input
/*
#include <stdio.h>
struct SensorReading {
int id;
float value;
};
int main() {
	struct SensorReading r1 = {1, 23.5};
struct SensorReading *ptr = &r1;   // ptr holds the address of r1
printf("Via the variable directly: id=%d, value=%.1f\n", r1.id, r1.value);
printf("Via the pointer, dereference then dot: id=%d, value=%.1f\n", ptr->id, ptr->value);
(*ptr).value = 99.9;   // modify through the pointer
printf("After modifying through ptr, r1.value = %.1f\n", r1.value);
return 0;
}
*/

//Problem 1:GPIO Pin Configuration
/*
#include<stdio.h>
 enum pinmode{INPUT,OUTPUT,INT_PULLUP};

 struct GpioPin{
	 int pinNUmber;
	 enum pinmode mode;
	 int state;
 };

 int main(void){
	struct GpioPin pin13;
	pin13.state=1;
	pin13.mode=OUTPUT;
	printf("Pin13: mode =%d,state =%d",pin13.state,pin13.mode);

 }
*/

//Problem 2:Structure Padding Structure
/*
#include<stdio.h>

struct Config1{

	char flag;
	double value;
	char status;
};

struct Config2{
	double value;
	char flag;
	char status;
};
int main(void){
	printf("Size of config 1: %zu\nSize of config 2: %zu",sizeof(struct Config1),sizeof(struct Config2));
}
*/

//Problem 3:typedef Practice
/*
#include<stdio.h>

typedef enum colour {RED,GREEN,BLUE} colour_t;
typedef struct{
	colour_t color;
	int brightness;
}LED_t;
int main(void){
	LED_t led1;
	led1.color=RED;
	led1.brightness=50;
	LED_t led2;
	led2.color=BLUE;
	led2.brightness=100;
	printf("led1: color=%zu,brightness=%d\nled2: color=%zu,brightness=%d",led1.color,led1.brightness,led2.color,led2.brightness);
	return 0;
}
*/

