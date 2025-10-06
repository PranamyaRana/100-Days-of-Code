//Write a program to find the product of odd digits of a number
#include<stdio.h>
int main()
{
    int num, digit, product = 1;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    while(num != 0)
    {
        digit = num % 10;
        if(digit % 2 != 0)
        {
            product *= digit;
        }
        num /= 10;
    }
    printf("%d", product);
}