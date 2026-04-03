/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int x = 5;

    switch(x)
    {
        case 1:
        case 2:
            printf("A ");
            break;
        case 3:
        case 4:
            printf("B ");
        default:
            printf("C ");
    }

    return 0;
}

// C
