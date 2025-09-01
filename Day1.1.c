//Q1: Write a program to input two numbers and display their sum.
#include<stdio.h>
int main()
{
    int a, b, sum;
    printf("\nEnter the value for number 1: ");
    scanf("%d", &a);
    printf("\nEnter the value for number 2: ");
    scanf("%d", &b);
    sum = a + b;
    printf("\nSum = %d", sum);
}