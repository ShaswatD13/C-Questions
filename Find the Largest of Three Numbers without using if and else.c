/*
Problem - Find the Largest of Three Numbers without using if and else.
Platform - HackerRank.
Summary - First compare a and b.
Then compare the bigger one with c.
No if or else used — only conditional (?:) operator.
*/

#include <stdio.h>

int main() {
    int a, b, c, largest;

    scanf("%d %d %d", &a, &b, &c);

    largest = (a > b) ? 
              ((a > c) ? a : c) : 
              ((b > c) ? b : c);

    printf("Largest: %d", largest);

    return 0;
}