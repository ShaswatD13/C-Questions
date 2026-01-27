/*
Problem - If-Else_Rearrange Input Digits
Platform - HackerRank
Summary - Your task is to rearrange its digits in descending order, using only if-else statements.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int a,b,c,d;
    a = n/1000;
    b = (n/100)%10;
    c = (n/10)%10;
    d = n%10;
    
    if(a<b)
    {
        int t;
        t=a;
        a=b;
        b=t;
    }
    if(a<c)
    {
        int t;
        t=a;
        a=c;
        c=t;
    }
    if(a<d)
    {
        int t;
        t=a;
        a=d;
        d=t;
    }
    if(b<c)
    {
        int t;
        t=b;
        b=c;
        c=t;
    }
    if(b<d)
    {
        int t;
        t=b;
        b=d;
        d=t;
    }
    if(c<d)
    {
        int t;
        t=c;
        c=d;
        d=t;
    }
    printf("%d%d%d%d",a,b,c,d);
    
    return 0;
}
