/*
Problem - What will be the Output?
*/

#include <stdio.h>

void change(int *p)
{
    *p = *p + 20;
}

int main()
{
    int a = 5;
    change(&a);
    printf("%d", a);
    return 0;
}


// 25