/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int arr[] = {3, 6, 9};
    int *p = arr;

    printf("%d ", *p++);
    printf("%d ", *++p);
    printf("%d", (*p)++);

    return 0;
}


// 3 9 9