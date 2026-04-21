/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int arr[] = {2, 4, 6, 8};
    int *p = arr;

    int result = *(p + 1) + *(p + 3) - *p;

    printf("%d", result);

    return 0;
}


// 10