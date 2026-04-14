/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40};
    int *p = &arr[2];

    printf("%d ", p[-1]);
    printf("%d ", p[0]);
    printf("%d", p[1]);

    return 0;
}


// 20 30 40