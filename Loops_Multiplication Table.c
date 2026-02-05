/*
Problem - Loops_Multiplication Table
Platform - HackerRank
Summary - Write a program to print the multiplication table of a given number n from 1 to 10.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=1;i<=10;++i)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
   
    return 0;
}