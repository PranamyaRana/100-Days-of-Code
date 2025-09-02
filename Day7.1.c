//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include<stdio.h>
int main()
{
    int year;
    printf("\nEnter any year: ");
    scanf("%d", &year);
    if(year % 400 == 0)
    {
        printf("\nThe year is a leap year");
    }
    else if(year % 100 == 0)
    {
        printf("\nThe year is not a leap year");
    }
    else if(year % 4 == 0)
    {
        printf("\nThe year is a leap year");
    }
    else
    {
        printf("\nThe year is not a leap year");
    }
}