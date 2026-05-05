/*
Problem - What will be the output?
*/

#include <stdio.h>

int main() 
{
    int a = 10;
    printf("%d %d", a, a = 20);
    
    return 0;
}


// 10 10 OR 20 20 {COMPILER DEPENDENT}