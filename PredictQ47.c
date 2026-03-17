/*
Problem - What will be the Output?
*/

#include <stdio.h>

void fun()
{
    static int x = 0;
    x++;
    if(x < 3)
    {
        fun();
    }
    printf("%d ", x);
}

int main()
{
    fun();
    return 0;
}



// 3 3 3