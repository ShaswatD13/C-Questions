/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int arr[] = {5, 10, 15};
    int *p = arr;

    printf("%d ", *p++);
    printf("%d ", (*p)++);
    printf("%d", *p);

    return 0;
}

// 5 10 11