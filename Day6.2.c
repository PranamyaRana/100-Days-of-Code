//Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter any integer value: ");
    scanf("%d", &num);
    if(num == 0)
    {
        printf("\nZero");
    }
    else if(num > 0)
    {
        printf("\nPositive");
    }
    else
    {
        printf("\nNegative");
    }
}