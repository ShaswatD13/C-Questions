/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main() {
    int x = 4;
    int y = x-- * 2 + ++x;
    printf("%d %d", x, y);
    return 0;
}


// 4 12