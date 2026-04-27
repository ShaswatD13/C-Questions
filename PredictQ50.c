/*
Problem - What will be the Output?
*/

#include <stdio.h>

void modify(int x)
{
    x = x + 10;
}

int main()
{
    int a = 5;
    modify(a);
    printf("%d", a);
    return 0;
}


// 5