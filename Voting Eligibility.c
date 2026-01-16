/*
Problem - Voting Eligibility
Platform - HackerRank
Summary - ou are given an integer age.
Your task is to check whether the person is eligible to vote.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int age;
    scanf("%d",&age);
    if(age>=18){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }    
    return 0;
}