/*
Problem - Loops_N Multiples
Platform - HackerRank
Summary - Write a program that takes two inputs from the user and output the first n multiples of x.
*/

#include <stdio.h>

int main() {
    int n,x;
    scanf("%d %d",&n,&x);
    for(int i = 1;i<=n;++i)
    {
        printf("%d ",x*i);
    }
   
    return 0;
}