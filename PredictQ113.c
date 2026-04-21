/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40};
    int i = 1;

    printf("%d ", arr[i++]);
    printf("%d ", arr[++i]);
    printf("%d", arr[i]);

    return 0;
}


// 20 40 40