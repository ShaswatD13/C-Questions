/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int arr[2][2] = {{1,2},{3,4}};
    int *p = &arr[0][0];

    printf("%d ", *(p+1));
    printf("%d ", *(p+2));
    printf("%d", *(p+3));

    return 0;
}

// 2 3 4