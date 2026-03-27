/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40};
    int *p = arr;

    printf("%d ", *p);
    printf("%d ", *p++);
    printf("%d", *p);

    return 0;
}

// 10 10 20 