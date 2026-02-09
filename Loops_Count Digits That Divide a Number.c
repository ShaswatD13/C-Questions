/*
Problem - Loops_Count Digits That Divide a Number
Platform - HackerRank
Summary - Given a positive integer num, count how many of its digits divide num evenly.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int count=0;
    int temp=n;
    for(;temp!=0;){
        if(n%(temp%10)==0){
            count++;
        }
        temp/=10;
    }
    printf("%d",count);
    return 0;
}