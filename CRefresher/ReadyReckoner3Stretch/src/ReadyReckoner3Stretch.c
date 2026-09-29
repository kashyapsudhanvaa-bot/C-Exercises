#include<stdio.h>

void  startMotor(){
	printf("Motor Started\n");
}
void stopMotor(){
	printf("Motor Stopped\n");
}
void pauseMotor(){
	printf("Motor Paused\n");
}

int main(void){
	void (*commands[3])(void)={startMotor,stopMotor,pauseMotor};
	const char *commandnames[3]={"Start","Stop","Pause"};
	for(int i=0;i<3;i++){
		printf("Dispatching Command : %s\n",commandnames[i]);
		commands[i]();
	}
	return 0;
}
