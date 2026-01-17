/*
Problem - Bitwise Set i-th bit
Platform - HackerRank
Summary - Setting the i-th bit of a number 'n' where both 'n' and 'i' are provided by the user
*/

#include <stdio.h>
int display(int n,int i){
    int res = n|(1<<i);
    return res;
}

int main() {
    int n;
    int i;
    scanf("%d %d",&n,&i);
    printf("%d",display(n,i));
    return 0;
}