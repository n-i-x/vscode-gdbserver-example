// main.c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += i;
                        printf("Current sum: %d\n", sum);
    }
    printf("Final sum: %d\n", sum);
    return 0;
}