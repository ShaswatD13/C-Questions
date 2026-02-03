/*
Problem - lowercase to UPPERCASE
Platform - HackerRank
Summary - Converting lowercase into UPPERCASE
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char charLower;
    char charUpper;
    scanf("%c",&charLower);
    charUpper = charLower - 32;
    printf("The uppercase of %c is %c ",charLower,charUpper);
   
    
    return 0;
}
