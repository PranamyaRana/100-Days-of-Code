//Write a program to calculate the factorial of a number.
#include<stdio.h>
int main()
{
    int a;
    long fact = 1;
    printf("\nEnter any number: ");
    scanf("%d", &a);
    for(int i = 1; i <= a; i++)
    {
        fact *= i;
    }
    printf("\nThe factorial of %d is %d", a, fact);
}