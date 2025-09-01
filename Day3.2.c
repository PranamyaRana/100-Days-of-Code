//Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main()
{
    int a, b, temp;
    printf("\nEnter the value for number 1: ");
    scanf("%d", &a);
    printf("\nEnter the value for rnumber 2: ");
    scanf("%d", &b);
    temp = b;
    b = a;
    a = temp;
    printf("\nNumber 1 = %d, Number 2 = %d", a, b);
}