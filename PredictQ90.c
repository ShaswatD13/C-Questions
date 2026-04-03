/*
Problem - What will be the Output?
*/

#include <stdio.h>

void fun(int arr[])
{
    printf("%lu ", sizeof(arr));
}

int main()
{
    int arr[3] = {1,2,3};
    printf("%lu ", sizeof(arr));
    fun(arr);
    return 0;
}

// 12 8