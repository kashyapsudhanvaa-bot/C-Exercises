#include <stdio.h>

int main() {
    int readings[] = {23, 25, 22, 30, 28};
    int i,sum=0;

    for (i = 0; i < 5; i++) {
        printf("Reading %d: %d\n", i, readings[i]);
        sum+=readings[i];
    }
    printf("Average is: %.1f",sum/5.0);

    return 0;
}
