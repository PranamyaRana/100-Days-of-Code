//Write a program to print the sum of the first n odd numbers.
#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter any number: ");
    scanf("%d", &a);
    int sum = a * a;
    printf("\nThe sum of first %d numbers is %d", a, sum);
}