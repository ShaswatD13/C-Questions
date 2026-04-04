/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int arr[] = {7, 14, 21};
    
    printf("%d ", *arr);
    printf("%d ", *(arr + 1));
    printf("%d", 1[arr]);

    return 0;
}

// 7 14 14