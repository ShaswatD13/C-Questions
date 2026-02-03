/*
Problem - Pattern_Reverse Number Stair Pattern
Platform - HackerRank
Summary - Your task is to print a reverse number stair pattern using numbers from N to 1.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N;
    scanf("%d",&N);
   for(int i=N;i>=1;--i)
    {
        for(int j=i;j>=1;--j)
        {
        printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
