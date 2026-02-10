/*
Problem - Loops_Sum of Multiples
Platform - HackerRank
Summary - Given a positive integer n, find the sum of all integers from 1 to n (inclusive) that are divisible by 3, 5, or 7.
You must print the result, not return it.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int sum = 0;
    for(int i=1;i<=n;++i)
    {
       if(i%3==0 || i%5==0 || i%7==0)
       {
           sum = sum + i;
       }
    }
    printf("%d",sum);
    
    
    return 0;
}