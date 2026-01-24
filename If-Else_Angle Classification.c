/*
Problem - If-Else_Angle Classification
Platform - HackerRank
Summary - Write a program to determine the type of angle formed between the hour hand and minute hand.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int x;
    scanf("%d",&x);
     if(x==0){
        printf("Acute Angle");
        return 0;
    }
    int a = x%360;
    if(a==0){
        printf("Full Rotation");
    }
    else if(a==90){
        printf("Right Angle");
    }
    else if(a<90){
        printf("Acute Angle");
    }
    else if(a==180){
        printf("Straight Angle");
    }
    else if(a<180){
        printf("Obtuse Angle");
    }
    else{
        printf("Reflex Angle");
    }    
    return 0;
}
