//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main()
{
    int l, b, p, a;
    printf("\nEnter the length of rectangle: ");
    scanf("%d", &l);
    printf("\nEnter the breadth of rectangle: ");
    scanf("%d", &b);
    p = 2 * (l + b);
    a = l * b;
    printf("\nArea = %d, Perimeter = %d", a, p);
}