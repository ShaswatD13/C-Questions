/*
Problem - Range Check
Platform - HackerRank
Summary - Checking whether the given input is 'In Range' or 'Out of Range' when the range is also provided by the user
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    int low;
    int high;
    scanf("%d %d %d",&n,&low,&high);
    if(n<=high&&n>=low){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
    return 0;
}
