#include <stdio.h>

int main() {
    int readings[] = {23, 25, 22, 30, 28};
    int i,sum=0,max=readings[0],min=readings[0];

    for (i = 0; i < 5; i++) {
        printf("Reading %d: %d\n", i, readings[i]);
        sum+=readings[i];
        if(readings[i]>max){
        	max=readings[i];
        }
        if(readings[i]<min){
        	min=readings[i];
        }
    }
    printf("Average is: %.1f\n",sum/5.0);
    printf("Max is %d\n",max);
    printf("Min is %d\n",min);
    printf("Range Check Completed.\n");


    return 0;
}
