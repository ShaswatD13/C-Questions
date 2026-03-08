/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main() {
    int a = 4;
    int b = a++ * 2 + ++a;
    printf("%d %d", a, b);
    return 0;
}

// 6 14