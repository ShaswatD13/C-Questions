/*
Problem - Loops_The Synchronization of Number Lines
Platform - HackerRank
Summary - On a number line starting from 1, two points begin moving forward.
The first point jumps forward by A units at a time.
The second point jumps forward by B units at a time.
Both points can only land on numbers that are multiples of their jump length.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int A,B;
    scanf("%d %d",&A,&B);
    
    for(int i=1;i<=pow(10,9);++i)
    {
        if(i%A==0 && i%B==0)
        {
            printf("%d",i);
            break;
        }
    }
    
    return 0;
}