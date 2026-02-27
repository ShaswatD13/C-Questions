/*
Prblem - Find Pair with Given Sum in Array
Summary - Given an array and a number K, find whether any two elements in the array sum to K.
*/

#include <stdio.h>

int main() {
    int n, K;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &K);

    int found = 0;

    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == K) {
                printf("Pair found: %d %d", arr[i], arr[j]);
                found = 1;
                break;
            }
        }
        if(found == 1)
            break;
    }

    if(found == 0)
        printf("No Pair Found");

    return 0;
}