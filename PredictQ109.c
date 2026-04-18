/*
Problem - What will be the Output?
*/

#include <stdio.h>

int fun()
{
    static int x = 1;
    return x++;
}

int main()
{
    printf("%d ", fun());
    printf("%d ", fun());
    printf("%d", fun());

    return 0;
}

// 1 2 3