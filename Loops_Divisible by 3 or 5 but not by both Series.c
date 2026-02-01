/*
Problem - Loops_Divisible by 3 or 5 but not by both Series
Platform - HackerRank
Summary - Write a program to generate a series of numbers between 1 and n (inclusive) that are divisible by either 3 or 5 but not both. The program should take an integer n as input and output the numbers satisfying this condition in a single line, separated by spaces.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i = 3;i<=n;++i)
    {
        if((i%3==0 || i%5==0) && (i%15!=0))
        {
            printf("%d ",i);
        }
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}