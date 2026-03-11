/*
Problem - What will be the output?
*/

#include <stdio.h>

int main() {
    int a = 2, b = 3, c = 4;
    int result = a++ * b + ++c;
    printf("%d %d %d %d", a, b, c, result);
    return 0;
}

// 3 3 5 11