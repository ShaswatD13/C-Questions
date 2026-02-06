/*
Problem - Pattern_Arrowhead
Platform - HackerRank
Summary - Write a program to print an arrowhead pattern based on an integer input n. The pattern should consist of asterisks (*) in the shape of an arrowhead which narrows back to a single asterisk symmetrically after reaching the widest row.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 2) {
        printf("Shape Not Possible");
        return 0;
    }

    // Upper half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    // Lower half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}