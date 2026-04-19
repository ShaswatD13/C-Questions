/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int arr[] = {4, 8, 12};
    int *p = arr;

    int x = *p + *(p + 1) * *p;

    printf("%d", x);

    return 0;
}

// 36