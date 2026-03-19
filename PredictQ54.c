/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int i;

    for(i = 0; i < 5; i++)
    {
        if(i == 3)
            break;
        printf("%d ", i);
    }

    return 0;
}


// 0 1 2