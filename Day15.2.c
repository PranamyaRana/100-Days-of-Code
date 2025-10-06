//Write a program to reverse a given number.
#include<stdio.h>
int main()
{
    int num, rev = 0, digit;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    while(num != 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    printf("\nReversed number: %d", rev);
}