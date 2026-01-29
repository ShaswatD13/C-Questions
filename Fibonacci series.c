/*
Problem - Fibonacci series.
Platform - HackerRank
Summary -  Fibonacci series using recursion.
*/

#include <stdio.h>

int fib(int);

int main()
{
    int n;
    scanf("%d",&n);
    
    int res = fib(n);
    printf("%d",res);
    
    return 0;
}

int fib(int a)
{
    if(a == 1 || a == 0)
    {
        return a;
    }
    else
    {
        return fib(a-2) + fib(a-1);
    }
}