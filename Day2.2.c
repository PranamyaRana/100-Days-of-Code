//Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main()
{
    int r;
    double a, c;
    printf("\nEnter the value of the radius of the circle: ");
    scanf("%d", &r);
    a = 3.14 * r * r;
    c = 2 * 3.14 * r;
    printf("\nArea = %lf, Circumference = %lf", a, c);
}