#include <stdio.h>

int main() {
    int i;
    printf("Table of 2:\n");
    for(i = 1; i <= 10; i++) {
        printf("2 x %d = %d\n", i, 2 * i);
    }
    return 0;
}