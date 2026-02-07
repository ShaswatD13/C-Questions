/*
Problem - Loops_Subtract the Product and Sum of Digits of an Integer
Platform - HackerRank
Summary - Given an integer n, calculate the product of its digits and the sum of its digits, then print the difference between the product and the sum.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    
    int sum = 0;
    int product = 1;
    
    for(;n!=0;)
    {
       int pes=n%10;
        sum = sum + pes;
        product = product*pes;
        n = n/10;
    }
    printf("%d",product - sum);
    
    return 0;
}
