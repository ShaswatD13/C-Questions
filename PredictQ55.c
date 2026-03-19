/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int arr[] = {5, 10, 15};
    int *p = arr;

    *(p+1) = *(p) + 5;
    *(p+2) = *(p+1) + 5;

    printf("%d %d %d", arr[0], arr[1], arr[2]);

    return 0;
}

// 5 10 15