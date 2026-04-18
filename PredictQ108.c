/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int a = 2, b = 3;

    if(a & b)
        printf("X ");
    if(a && b)
        printf("Y");

    return 0;
}

// X Y