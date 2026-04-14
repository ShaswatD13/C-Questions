/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int i = 0;

    while(i = i + 1)
    {
        printf("%d ", i);
        if(i == 3)
            break;
    }

    return 0;
}


// 1 2 3