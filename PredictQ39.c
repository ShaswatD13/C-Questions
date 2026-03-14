/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main() {
    int a = 3;
    int b = 4;

    a = a + b - (b = a);

    printf("%d %d", a, b);
    return 0;
}

// 4 3