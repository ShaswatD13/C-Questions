/*
Problem - If-Else_Divisibility Duel
Platform - HackerRank
Summary - Three contenders— X, Y, and Z are facing off in a duel of divisibility. Your task is to determine the result of this epic showdown by analyzing the relationship between X and its challengers, Y and Z.
*/

#include <stdio.h>

int main() {
    int X,Y,Z;
    scanf("%d %d %d",&X,&Y,&Z);
    if(X%Y==0 && X%Z==0)
    {
        printf("X defeats all!");
    }
    else if(X%Y==0)
    {
        printf("Y triumphs over X!");
    }
    else if(X%Z==0)
    {
        printf("Z outsmarts X!");
    }
     else
    {
        printf("X remains undefeated!");
    } 
    
    return 0;
}