//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main()
{
    int a, b, sum, diff, product, quotient;
    printf("\nEnter the value for number 1: ");
    scanf("%d", &a);
    printf("\nEnter the value for number 2: ");
    scanf("%d", &b);
    if(b == 0)
    {
        sum = a + b;
        diff = a - b;
        product = a * b;
        printf("\nDivision is not possible");
        printf("\nSum = %d, Diff = %d, Product = %d", sum, diff, product);
    }
    else
    {
        sum = a + b;
        diff = a - b;
        product = a * b;
        quotient = a / b;
        printf("\nSum = %d, Diff = %d, Product = %d, Quotient = %d", sum, diff, product, quotient);
    }
}