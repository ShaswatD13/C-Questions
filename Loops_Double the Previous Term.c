/*
Problem - Loops_Double the Previous Term
Platform - HackerRank
Summary - Write a program to generate a sequence of n terms where each term is double the previous one, starting from 1.
*/

#include <stdio.h>

int main() {
    long long n;
    scanf("%lld",&n);
     if(n!=0)
     {
    printf("<1");
    for(int i = 0;i<=n-2;++i)
    {  
     printf(" %lld",2<<i);
    }
    printf(">");
     }
    return 0;
}