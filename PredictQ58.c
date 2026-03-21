/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};

    printf("%lu ", sizeof(arr));
    printf("%lu", sizeof(arr)/sizeof(arr[0]));

    return 0;
}

// 20 5