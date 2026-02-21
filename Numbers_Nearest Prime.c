/*
Problem - Numbers_Nearest Prime
Platform - HackerRank
Summary - You are given an integer N. Your task is to find the nearest prime number to N.
If N itself is prime, return N.
If there are two prime numbers at the same minimum distance from N, return the smaller one.
*/

#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int N;
    scanf("%d", &N);

    if (isPrime(N)) {
        printf("%d", N);
        return 0;
    }

    for (int d = 1; ; d++) {
        if (N - d >= 2 && isPrime(N - d)) {
            printf("%d", N - d);
            break;
        }
        if (isPrime(N + d)) {
            printf("%d", N + d);
            break;
        }
    }

    return 0;
}