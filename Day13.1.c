// Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
#include<stdio.h>
int main()
{
    int num1, num2;
    char op;
    float num3;
    printf("\nenter value for number 1: ");
    scanf("%d", &num1);
    printf("\nEnter value for number 2: ");
    scanf("%d", &num2);
    printf("\nEnter the operator you want to use: ");
    scanf(" %c", &op);
    switch(op)
    {
        case '+':
            num3 = num1 + num2;
            printf("\n%f", num3);
            break;

        case '-':
            num3 = num1 - num2;
            printf("\n%f", num3);
            break;

        case '*':
            num3 = num1 * num2;
            printf("\n%f", num3);
            break;
        
        case '/':
            num3 = num1 / num2;
            printf("\n%f", num3);
            break;

        case '%':
            num3 = num1 % num2;
            printf("\n%f", num3);
            break;
        
        default:
            printf("\nYou have chosen the wrong number");
    }
}