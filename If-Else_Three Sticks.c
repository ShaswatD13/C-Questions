/*
Problem - If-Else_Three Sticks
Platform - HackerRank
Summary - if the sticks cannot be connected to form a triangle due to their lengths, it is classified as an Invalid shape.

Aman needs a program that will take the lengths of the three sticks as input, validate if they can form a valid closed shape, and output the correct classification.
*/

#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a + b > c && a + c > b && b + c > a){
        if(a == b && b==c){
            printf("Lengths: [%d, %d, %d]\nType: Equilateral\nAll sides are of the same length.",a,b,c);
        }  
        else if(a==b || b==c || c==a){
            printf("Lengths: [%d, %d, %d]\nType: Isosceles\nExactly two sides are equal.",a,b,c);
        }
        else if(a!=b && b!=c && c!=a){
            printf("Lengths: [%d, %d, %d]\nType: Scalene \nAll sides are of different lengths.",a,b,c);
        }
        else if(a!=b && b!=c && c!=a){
            printf("Lengths: [%d, %d, %d]\nType: Scalene \nAll sides are of different lengths.",a,b,c);
        }
    }
    else{
        printf("Lengths: [%d, %d, %d]\nType: Invalid \nCannot form a valid shape.",a,b,c);
    }
    return 0;
}