/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    char *str = "XYZ";

    printf("%c ", *str++);
    printf("%c ", *str);
    printf("%s", str);

    return 0;
}

// X Y YZ