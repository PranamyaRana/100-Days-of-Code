//Write a program to print the product of even numbers from 1 to n.
#include<stdio.h>
int main()
{
    int a;
    int product = 1;
    printf("\nEnter any even number: ");
    scanf("%d", &a);
    if(a % 2 != 0)
    {
        printf("\nYou have entered the wrong number");
    }
    else
    {
        for(int i = 2; i <= a; i += 2)
        {
            product *= i;
        }
        printf("\nThe product of even number from 1 to %d is %d", a, product);
    }
}