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
    int arr[5] = {1,2,3,4,5};
    printf("%lu ", sizeof(arr));
    fun(arr);

    return 0;
}

// 20 8