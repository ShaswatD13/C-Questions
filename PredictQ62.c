/*
Problem - What will be the Output?
*/

#include <stdio.h>

int main()
{
    char str1[] = "Hi";
    char *str2 = "Hi";

    str1[0] = 'B';
    // str2[0] = 'B';  // (not allowed)

    printf("%s %s", str1, str2);

    return 0;
}


// Bi Hi