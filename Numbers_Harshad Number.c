/*
Problem - Numbers_Harshad Number
Platform - HackerRank
Summary - A Harshad Number is a number that is divisible by the sum of its digits.
Compute the sum of the digits of the number.
If the number is divisible by this sum, it is a Harshad Number.
Otherwise, it is not a Harshad Number.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,a,b,c,d;
    scanf("%d",&N);
    a = N/1000;
    b = (N%1000)/100;
    c = ((N%1000)%100)/10;
    d = N%10;
    int temp =  a + b + c + d;
    if(N%temp==0)
    {
        printf("%d is a harshad number",N);
    }
    else
    {
        printf("%d is not a harshad number",N);
    }
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
