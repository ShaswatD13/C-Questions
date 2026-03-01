/*
problem - Find the Longest Subarray with Equal Number of 0s and 1s
Summary - Given a binary array (only 0 and 1), write a C program to find the length of the longest subarray with equal number of 0s and 1s.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxLen = 0;
    int sum = 0;

    int hash[2*n + 1];
    for(int i = 0; i < 2*n + 1; i++) {
        hash[i] = -2;
    }

    hash[n] = -1;

    for(int i = 0; i < n; i++) {

        if(arr[i] == 0)
            sum += -1;
        else
            sum += 1;

        if(hash[sum + n] >= -1) {
            int length = i - hash[sum + n];
            if(length > maxLen)
                maxLen = length;
        } else {
            hash[sum + n] = i;
        }
    }

    printf("%d", maxLen);

    return 0;
}