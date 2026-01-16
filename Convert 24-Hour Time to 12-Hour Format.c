/*
Problem - Convert 24-Hour Time to 12-Hour Format
Platform - HackerRank
Summary - Convert 24-Hour Time to 12-Hour Format in c language
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int h;
    int m;
    scanf("%d %d",&h,&m);
    if(h==0){
        printf("12:%02d AM",m);
    }
    
    else if(h==12){
        printf("12:%02d PM",m);
    }
    
    else if(h<12){
        printf("%d:%02d AM",h,m);
    }
    
    else{
        printf("%d:%02d PM",h-12,m);
    }

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
