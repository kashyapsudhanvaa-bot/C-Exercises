#include<stdio.h>
extern int SensorReadingCount;
void logReading();

int main(void){
	logReading();
	logReading();
	logReading();
	printf("Final Sensor Reading Count = %d\n",SensorReadingCount);
}


