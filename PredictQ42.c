/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int x = 10;
    int *p = &x;

    *p = *p + 5;
    printf("%d %d", x, *p);

    return 0;
}


// 15 15