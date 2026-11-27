#include<stdio.h>
int SensorReadingCount=0;
static int CalibrationOffset=0;
static int validateReading(int raw){
	return raw+CalibrationOffset;
}

void logReading(int raw){
	validateReading(7);
	SensorReadingCount++;
	CalibrationOffset++;
	printf("In Sensor: Raw value:%d, Validated Value:%d\n",raw,validateReading(7));
}

