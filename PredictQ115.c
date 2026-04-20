/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int x = 3;

    switch(x)
    {
        case 1:
            printf("A ");
        case 2:
            printf("B ");
        case 3:
            printf("C ");
        default:
            printf("D ");
    }

    return 0;
}

// C D