/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30};
    int *p = arr;
    int *q = arr + 2;

    printf("%d ", p < q);
    printf("%d", p == arr);

    return 0;
}


// 1 1