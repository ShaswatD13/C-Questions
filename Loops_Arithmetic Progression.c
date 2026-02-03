/*
Problem - Loops_Arithmetic Progression
Platform - HackerRank
Summary - Write a program to generate the first n terms of an Arithmetic Progression (AP). The first term a and the common difference d are provided.
*/

#include <stdio.h>

int main() {
    int n,a,d;
    scanf("%d",&n);
    scanf("%d %d",&a,&d);
    for(int i = 1;i<=n;i++)
    {
       
        printf("%d ",a + (i-1)*d);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}