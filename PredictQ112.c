/*
Problem - What will be the Output?
*/

#include <stdio.h>

int fun(int x)
{
    return x * x;
}

int main()
{
    int a = 2;

    printf("%d %d", fun(a), fun(a + 1));

    return 0;
}

// 4 9