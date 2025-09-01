//Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main()
{
    int num, sum;
    printf("\nEnter the value for which you want to find the sum of numbers: ");
    scanf("%d", &num);
    sum = (num * (num + 1)) / 2;
    printf("\nThe sum of the first %d numbers is %d", num, sum);
}