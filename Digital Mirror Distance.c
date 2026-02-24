/*
Problem - Digital Mirror Distance
Platform - HaackerRank
Summary - Reverse the number.
Find the absolute difference between the original number and its reversed number.
Now count how many digits in the difference are even.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int original = n;
    int reversed = 0;

    // Reverse the number
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }

    int difference = abs(original - reversed);
    int temp = difference;
    int evenCount = 0;

    // Count even digits in difference
    while (temp > 0) {
        int digit = temp % 10;
        if (digit % 2 == 0) {
            evenCount++;
        }
        temp /= 10;
    }

    printf("Reversed: %d\n", reversed);
    printf("Difference: %d\n", difference);
    printf("Even Digit Count: %d\n", evenCount);

    return 0;
}