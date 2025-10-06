//Write a program to print all factors of a given number
#include<stdio.h>
int main()
{
    int num, i;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    for(i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            printf("%d  ", i);
        }
    }
}