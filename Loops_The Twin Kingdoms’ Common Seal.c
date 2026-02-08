/*
Problem - Loops_The Twin Kingdoms’ Common Seal
Platform - HackerRank
Summary - In the land of Arithmia, there are two neighboring kingdoms ruled by King Shivam and Queen Belia. Each kingdom owns a magical seal engraved with a positive integer.
To form an alliance, both seals must be stamped with the largest possible common magical power that can divide both numbers exactly.
The royal mathematician must determine the Greatest Common Divisor (GCD) of the two numbers to create the alliance seal.
Your mission is to help the mathematician find the GCD of two natural numbers.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int A,B;
    scanf("%d %d",&A,&B);
    if(A==0){
        printf("%d",B);
        return 0;
    }
    else if(B==0){
        printf("%d",A);
        return 0;
    }
    if(A<B)
    {
      for(int i=A;i>=0;--i)
      {
        if(A%i==0 && B%i==0)
        {
            printf("%d",i);
            break;
        }
      }
    }
    else
    {
       for(int i=B;i>=0;--i)
      {
        if(A%i==0 && B%i==0)
        {
            printf("%d",i);
            break;
        }
      } 
    }
    return 0;
}
