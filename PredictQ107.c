/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int arr[] = {1, 3, 5, 7};
    int *p = arr;

    printf("%d ", *p++);
    printf("%d ", *++p);
    printf("%d", *p);

    return 0;
}


// 1 5 5