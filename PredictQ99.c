/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4};
    int *p = arr;

    printf("%d ", *++p);
    printf("%d ", *p++);
    printf("%d", *p);

    return 0;
}


// 2 2 3