/*
Problem - Loops_The Guardian of Prime Gate
Platform - HackerRank
Summary - write a program that checks whether the given number is Prime, Composite, or Neither.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d",&N);
    int i;
    if(N<=1)
    {
        printf("None");
        return 0;
    }
    for(i = 2;i<=sqrt(N);++i)
    {
        if(N%i==0)
        {
            printf("Composite");
            return 0;
        }
    }
    printf("Prime");
    return 0;
}
