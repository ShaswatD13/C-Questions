/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int a = 1, b = 2, c = 3;

    int result = (a && b) || (c = 0);

    printf("%d %d", result, c);

    return 0;
}

// 1 3