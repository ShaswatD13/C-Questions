/*
Problem - Loops_Natural Numbers
Platform - HackerRank
Summary - Write a program that takes a positive integer N as input from the user and prints all natural numbers from 1 to N, with each number followed by a space (including the last number).
*/

#include <stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    for(int i = 1;i<=N;++i)
    {
        printf("%d ",i);
    }
    return 0;
}