/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    int a = 0, b = 1, c;

    c = a && ++b;
    printf("%d %d %d\n", a, b, c);

    c = a || ++b;
    printf("%d %d %d", a, b, c);

    return 0;
}



// 0 1 0
// 0 2 1