/*
Problem - Swap Two Numbers
Platform - HackerRank
Summary - Write a program to swap two numbers.
*/

#include <stdio.h>

int main() {
    int a;
    int b;
    int c;
    scanf("%d %d %d",&a,&b,&c);
    c = a;
    a = b;
    b = c;
    printf("a = %d\nb = %d",a,b);
    return 0;