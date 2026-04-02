/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int *p = arr + 1;

    printf("%d ", *(p + 2));
    printf("%d ", *(arr + 4));
    printf("%d", *(p - 1));

    return 0;
}


// 10 8 2