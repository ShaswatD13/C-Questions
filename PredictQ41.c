/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int arr[] = {2,4,6,8};
    int i, sum = 0;

    for(i = 0; i < 4; i++)
    {
        if(i % 2 == 0)
            sum += arr[i];
        else
            sum -= arr[i];
    }

    printf("%d", sum);
    return 0;
}

// -4