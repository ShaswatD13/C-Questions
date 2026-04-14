/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int a = 5, b = 10, c = 15;

    int result = (a > b) ? a : (b > c) ? b : c;

    printf("%d", result);

    return 0;
}


// 15