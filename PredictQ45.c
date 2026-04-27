/*
Problem - What will be the Output?
*/

#include <stdio.h>

void fun()
{
    static int x = 1;
    x++;
    printf("%d ", x);
}

int main()
{
    fun();
    fun();
    fun();
    return 0;
}


// 2 3 4