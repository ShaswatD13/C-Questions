/*
Problem - Print a Pattern
Platform - HackerRank
Summary - Write a C program to print the below pattern for n rows.
EDCBA
DCBA
CBA
BA
A
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i = 1;i <= n;++i)
    {
        char ch = 'F' - i;
        for(int j = 1;j <= n - i + 1;++j)
        {
            printf("%c",ch);
            ch--;
        }
        printf("\n");
    }

    return 0;
}