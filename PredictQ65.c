/*
Problem - What will be the Output?
*/

#include <stdio.h>

int x = 10;

void fun()
{
    x += 5;
}

int main()
{
    fun();
    printf("%d", x);
    return 0;
}

// 15