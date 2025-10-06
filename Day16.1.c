//Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>
int main() 
{
    int n;
    printf("\nEnter a number: ");
    scanf("%d", &n);
    if (n == 0) 
    {
        printf("\n0");
        return 0;
    }
    long binary = 0;
    int place = 1;
    while (n > 0) 
    {
        int rem = n % 2;
        binary = binary + rem * place;
        place *= 10;
        n /= 2;
    }
    printf("\n%ld", binary);
    return 0;
}