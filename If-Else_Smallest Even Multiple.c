/*
Problem - If-Else_Smallest Even Multiple
Platform - HackerRank
Summary - Given a positive integer n, PRINT the smallest positive integer that is a multiple of both 2 and n.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int calculated_num;
    if(1 <= n && n<= 150)
    {
    if(n%2==1)
    {
        calculated_num = n*2;
        printf("%d",calculated_num);
    }
    else
    {
        printf("%d",n);
    }
        }
        
    return 0;
}
