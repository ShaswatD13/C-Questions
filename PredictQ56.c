/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int x = 5;
    int *p = &x;
    int **q = &p;

    **q = **q + 10;

    printf("%d %d %d", x, *p, **q);

    return 0;
}


// 15 15 15 