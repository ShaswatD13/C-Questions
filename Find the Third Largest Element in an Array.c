/*
Problem - Find the Third Largest Element in an Array
Summary - Given an array of integers, find the third largest distinct element without sorting the array.
*/

#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    if(n < 3) {
        printf("Not enough elements");
        return 0;
    }

    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int first = INT_MIN, second = INT_MIN, third = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first) {
            third = second;
            second = arr[i];
        }
        else if(arr[i] > third && arr[i] != second && arr[i] != first) {
            third = arr[i];
        }
    }

    if(third == INT_MIN)
        printf("No third largest element");
    else
        printf("Third Largest Element: %d", third);

    return 0;
}