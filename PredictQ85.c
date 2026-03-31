/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 0, j = 5; i < j; i++, j--)
    {
        printf("%d%d ", i, j);
    }

    return 0;
}

// 05 14 23