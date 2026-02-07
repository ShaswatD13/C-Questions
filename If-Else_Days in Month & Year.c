/*
Problem - If-Else_Days in Month & Year
Platform - HackerRank
Summary - You are tasked with building a small utility program for a calendar management system. The program should determine the number of days in a specific month of a given year. It must also handle invalid inputs gracefully.
*/

#include <stdio.h>
#include <string.h>

int main() {
       
    int month;
    scanf("%d",&month);
    int year;
    scanf("%d",&year);
 
    
    if(month<1||month>12)
    {
        printf("Invalid Month");
        if(year<1){
            printf("\nInvalid Year");
        }
        return 0;
    }
    if(year<1){
        printf("Invalid Year");
        return 0;
    }
    
    switch(month)
    {
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:
            printf("31");
            break;
            
        case 4:case 6:case 9:case 11:
            printf("30");
            break;
            
        case 2:
            if((year%4==0 && year%100!=0)||(year%400==0)){
               printf("29"); 
            }
            else{
                printf("28");
            }
            
            break;        
    }
    return 0;
}