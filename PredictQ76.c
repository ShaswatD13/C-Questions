/*
Problem - What will be the Output?
*/

#include <stdio.h>

void fun()
{
    static int x = 1;

    if(x <= 3)
    {
        printf("%d ", x);
        x++;
        fun();
    }
}

int main()
{
    fun();
    return 0;
}


// 1 2 3