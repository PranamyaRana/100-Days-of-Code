//Write a program to print numbers from 1 to n.
#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter a number: ");
    scanf("%d", &a);
    int i;
    for(i = 1; i <= a; i++)
    {
        printf("%d ", i);
    }
}