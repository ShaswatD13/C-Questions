/*
Problem - Check whether a given integer is a palindrome.
Platform - HackerRank
Summary - A palindrome is a word, number, phrase, or sequence that reads the same forward and backward.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int original = n;
    int reversed = 0;

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    if (original == reversed)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}