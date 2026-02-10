/*
Problem - Loops_Reverse Odd Numbers
Platform - HackerRank
Summary - Write a program to print the first n odd numbers, starting from 1, in reverse order. The odd numbers should be printed starting from the largest odd number in the sequence, moving backwards to the smallest odd number.
*/

#include <stdio.h>

int main() {
    
    int n;
    scanf("%d",&n);
    
    if(n!=0)
    {
    
    int a[n];
    for(int i = 0;i<n;++i)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i = 0;i < n;++i)
    {
        a[i] = 2*i + 1;
    }
    
    for(int i = n-1; i > 0 ; --i)
    {
            printf("%d ",a[i]);
    }
    printf("1.");
    }
    
    return 0;
}