/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    char str[] = "ABC";
    char *p = str;

    while(*p)
    {
        printf("%c ", *p);
        p++;
    }

    return 0;
}

// A B C