/*
Problem - Toggle the ith bit.
Platform - HackerRank
Summary - Write a C program to complement (toggle) the iᵗʰ bit of a given integer.
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    int i;
    scanf("%d",&i);
    
    int res = n ^ (1 << i);
    printf("%d",res);

    return 0;
}