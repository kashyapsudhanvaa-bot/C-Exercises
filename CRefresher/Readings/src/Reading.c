#include <stdio.h>

int main() {
    int readings[] = {23, 25, 22, 30, 28};
    int i;

    for (i = 0; i < 5; i++) {
        printf("Reading %d: %d\n", i, readings[i]);
    }

    return 0;
}
