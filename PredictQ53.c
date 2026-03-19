/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    char str[] = "Hello";
    char *p = str;

    printf("%c ", *p);
    printf("%c ", *(p+2));
    printf("%s", p+1);

    return 0;
}

// H l ello