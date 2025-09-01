//Write a program to swap two numbers without using a third variable.
#include<stdio.h>
int main()
{
    int a, b;
    printf("\nEnter the value for number 1: ");
    scanf("%d", &a);
    printf("\nEnter the value for number 2: ");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nNumber 1 = %d, Number 2 = %d", a, b);
}