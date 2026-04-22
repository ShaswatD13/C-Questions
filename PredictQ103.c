/*
Problem - What will be the Output?
*/

#include <stdio.h>

int fun()
{
    static int x = 0;
    x++;
    return x;
}

int main()
{
    printf("%d ", fun());
    printf("%d ", fun() + fun());
    printf("%d", fun());

    return 0;
}


// Undefined Behavior (due to multiple function calls without sequence)