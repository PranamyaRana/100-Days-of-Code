//Write a program to check if a number is a strong number
#include<stdio.h>
int main()
{
    int num, original, digit, sum = 0;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    original = num;
    while(num != 0)
    {
        digit = num % 10;
        int fact = 1;
        for(int i = 1; i <= digit; i++)
        {
            fact *= i;
        }
        sum += fact;
        num /= 10;
    }
    if(original == sum)
    {
        printf("\nStrong");
    }
    else
    {
        printf("\nNot strong");
    }
}