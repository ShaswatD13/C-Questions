/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int i = 3;

    while(i)
    {
        printf("%d ", !i);
        i--;
    }

    return 0;
}

// 0 0 0