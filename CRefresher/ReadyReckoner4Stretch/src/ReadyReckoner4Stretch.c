//Problem 4:Packed Protocol Frame
/*
#include<stdio.h>
struct SensorPacket{
	unsigned char id       :8;
	unsigned short value    :16;
	unsigned char checksum  :8;

};
int main(void){

struct SensorPacket p1={0x01,0x1234,0xFF};

printf("Size of Sensor Packet = %zu\nid = 0x%02X, value= 0x%0X, checksum=0x%02X",sizeof(struct SensorPacket),p1.id,p1.value,p1.checksum);
}
*/

//Problem 5:Union Byte Assembly
/*
#include<stdio.h>

union Converter{
	unsigned int whole;
	unsigned char bytes[4];
};

int main(void){
	union Converter c;
	c.bytes[0]=0XEF;
	c.bytes[1]=0XBE;
	c.bytes[2]=0XAD;
	c.bytes[3]=0XDE;
	printf("Whole = 0x%X",c.whole);
}
*/
//Problem 6:Pointer to a Structure
/*
#include<stdio.h>

struct Motor{
	int id;
	int speed;
}m1;
int main(void){

m1.id=1;
m1.speed=0;
struct Motor *ptr=&m1;
printf("Before: id=%d, speed=%d\n",(*ptr).id,(*ptr).speed);
(*ptr).speed=75;
printf("After: id=%d, speed=%d\n",(*ptr).id,(*ptr).speed);
printf("Confirming through m1 directly speed =%d",m1.speed);
}
*/
