//Write a program to find the sum of digits of a number
#include<stdio.h>
int main()
{
    int num, sum = 0, digit;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    while(num != 0)
    {
        digit = num % 10;
        sum += digit;
        num = num / 10;
    }
    printf("\n%d", sum);
}