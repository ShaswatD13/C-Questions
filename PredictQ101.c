/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{

    int arr[] = {5, 10, 15, 20};
    int *p = arr;

    printf("%d ", p[2]);
    printf("%d ", *(2 + p));
    printf("%d", 3[p]);

    return 0;
    
}
// 15 15 30 