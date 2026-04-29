/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main() {
    int a = 5;
    int b = a++ + a++ + ++a;
    printf("%d %d", a, b);
    return 0;
}
// 8 19