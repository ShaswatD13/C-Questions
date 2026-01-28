/*
Problem - Loops_Even Numbers
Platform - HackerRank
Summary - Write a program to print all even numbers from 1 to N, where N is taken as input from the user. Each number should be followed by a space.
*/

#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    for(int i = 2;i<=N;i+=2)
    {
        printf("%d ",i);
    }    
    return 0;
}