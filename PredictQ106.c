/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int a = 0, b = 5;

    if(a || (b = 10))
        printf("%d %d", a, b);

    return 0;
}


// 0 10