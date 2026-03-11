/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main() {
    int x = 3, y = 4;
    x = x + y - (y = x);
    printf("%d %d", x, y);
    return 0;
}

// 4 3