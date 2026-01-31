/*
Problem - If-Else_Roots of a Quadratic Equation
Platform - HackerRank
Summary - Write a program that takes three integers a, b, and c as input, representing the coefficients of a quadratic equation ax^2 + bx + c = 0. The program should calculate and print the roots of the equation along with their type.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    float determinant = ((b*b) - (4.00*(a*c)));
    float root1, root2;

    if (determinant == 0) {
        if(b == 0){
        root1 =(b / (2.0 * a));
        }
        else {
        root1 =(-b / (2.0 * a));
        }
        printf("Roots: %.2f, %.2f\nType: Real and Equal", root1, root1);
    }
    else if (determinant > 0) {
        root1 =((-b + sqrt(determinant)) / (2.0 * a));
        root2 =((-b - sqrt(determinant)) / (2.0 * a));
        printf("Roots: %.2f, %.2f\nType: Real and Distinct", root1, root2);
    }
    else {
        float realPart =(-b / (2.0 * a));
        float imaginaryPart =(sqrt(-determinant) / (2.0 * a));
        printf("Roots: %.2f + %.2fi, %.2f - %.2fi\nType: Complex",realPart,imaginaryPart,realPart,imaginaryPart);
    }
    return 0;
}