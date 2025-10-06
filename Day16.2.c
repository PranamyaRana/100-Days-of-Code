//Write a program to check if a number is a palindrome.
#include<stdio.h>
int main()
{
    int num, original, rev = 0, digit;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    original = num;
    while(num != 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    if(original == rev)
    {
        printf("\nPalindrome");
    }
    else
    {
        printf("\nNot Palindrome");
    }
}