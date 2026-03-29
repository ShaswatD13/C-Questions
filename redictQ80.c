/*
Problem - What will be the Output?
*/

#include <stdio.h>

int fun()
{
    static int x = 5;
    x += 2;
    return x;
}

int main()
{
    printf("%d ", fun());
    printf("%d ", fun());
    printf("%d", fun());

    return 0;
}

// 7 9 11