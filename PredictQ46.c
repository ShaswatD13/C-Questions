/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40};
    int *p = arr;

    printf("%d ", *p);
    printf("%d ", *(p+2));
    printf("%d", *(p+3));

    return 0;
}


// 10 30 40