/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main() {
    int i = 2;
    int j = i++ + ++i;
    printf("%d %d", i, j);
    return 0;
}


// 4 6