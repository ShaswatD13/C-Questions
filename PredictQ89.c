/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int a = 1, b = 0, c = 1;

    if(a && b || c)
    {
        if(!b)
            printf("X ");
        else
            printf("Y ");
    }
    else
    {
        printf("Z ");
    }

    return 0;
}


// X