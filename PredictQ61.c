/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 2; j++)
        {
            printf("%d ", i + j);
        }
    }

    return 0;
}

// 2 3 3 4 4 5