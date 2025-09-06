//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("\nEnter the value for side 1: ");
    scanf("%d", &a);
    printf("\nEnter the value for side 2: ");
    scanf("%d", &b);
    printf("\nEnter the value for side 3: ");
    scanf("%d", &c);
    if((a == b) && (b == c))
    {
        printf("\nEquirateral triangle");
    }
    else if((a == b) || (b == c) || (a == c))
    {
        printf("\nIsoceles triangle");
    }
    else
    {
        printf("\nScalene Triangle");
    }
}