/*
Problem - reverse a number
Platform - HackerRank
Summary - Write a C program to reverse a number without using an extra variable for storing the reversed number.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    while(n != 0) {
        printf("%d", n % 10);
        n = n / 10;
    }

    return 0;
}