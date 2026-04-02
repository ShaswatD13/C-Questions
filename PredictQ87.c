/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;
    int **q = &p;

    *p = *p + 5;
    **q = **q + 5;

    printf("%d", a);

    return 0;
}


// 20