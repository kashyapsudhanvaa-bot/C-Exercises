#include<stdio.h>
#ifndef THRESHOLD_H
#define THRESHOLD_H

#define TEMP_MAX_C  85
#define TEMP_MIN_C -10
#define TEMP_WARN_C 70
#endif

void check_temperature(int temp_c);
int main(void){
		int temp_c=-25;
		check_temperature(temp_c);

	}


void check_temperature(int temp_c){
	if  (temp_c> TEMP_MAX_C){
		printf("FAULT");
	}
	else if (temp_c< TEMP_MIN_C){
		printf("FAULT");
	}
	else if (temp_c> TEMP_WARN_C){
		printf("WARNING");
	}
	else{
		printf("OK");
	}
}
