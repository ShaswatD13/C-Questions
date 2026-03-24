/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int a = 2;

    switch(a + 1)
    {
        case 1:
            printf("X ");
            break;
        case 2:
            printf("Y ");
            break;
        case 3:
            printf("Z ");
            break;
        default:
            printf("W ");
    }

    return 0;
}

// Z