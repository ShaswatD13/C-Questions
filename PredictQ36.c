/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main() {
    int x = 10;
    int y = (x > 5) ? x++ : ++x;
    printf("%d %d", x, y);
    return 0;
}

// 11 10