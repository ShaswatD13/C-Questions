/*
Problem - If-Else_Next-Day Date Calculator
Platform - HackerRank
Summary - You are given a date represented by three integers: day, month, and year.
Your task is to calculate and print the date of the next day in DD-MM-YYYY format.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int day,month,year;
    scanf("%d %d %d",&day,&month,&year);
    int date;
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10)
        {
            if(day==31)
            {
                date = 1;
                month++;
            }
            else
            {
                date = day + 1;
            }
        }
        else if(month==12)
        {
            if(day==31)
            {
                date = 1;
                month = 1;
                year++;
            }
            else
            {
                date = day + 1;
            }
        }
        else if(month==4 || month==6 || month==11 || month==9)
        {
            if(day==30)
            {
                date = 1;
                month++;
            }
            else
            {
                date = day + 1;
            }
        }
        else if(month==2)
        {
            if(day==29)
            {
                date = 1;
                month++;
            }
            else
            {
                date = day + 1;
            }
        }
    }
    
    
    else
    {
      if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10)
        {
            if(day==31)
            {
                date = 1;
                month++;
            }
            else
            {
                date = day + 1;
            }
        }
        else if(month==12)
        {
            if(day==31)
            {
                date = 1;
                month = 1;
                year++;
            }
            else
            {
                date = day + 1;
            }
        }
        else if(month==4 || month==6 || month==11 || month==9)
        {
            if(day==30)
            {
                date = 1;
                month++;
            }
            else
            {
                date = day + 1;
            }
        }
        else if(month==2)
        {
            if(day==28)
            {
                date = 1;
                month++;
            }
            else
            {
                date = day + 1;
            }
        }
    }
    printf("%02d-%02d-%04d",date,month,year);
    return 0;
}