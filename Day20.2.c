//Write a program to find the 1's compliment of a binary number and print it.
#include<stdio.h>
int main() 
{
    long bin, bin1 = 0, place = 1;
    int digit;
    printf("Enter a binary number: ");
    scanf("%ld", &bin);
    long temp = bin;
    while (temp > 0) 
    {
        digit = temp % 10;
        if (digit > 1) 
        {
            printf("Not a binary number\n");
            return 0;
        }
        if (digit == 0)
        {
            digit = 1;
        }
        else
        {
            digit = 0;
        }
        bin1 = bin1 + digit * place;
        place *= 10;
        temp /= 10;
    }
    printf("1's complement of %ld is: %ld\n", bin, bin1);
    return 0;
}