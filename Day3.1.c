//Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main()
{
    double c, f;
    printf("\nEnter the temperature for celsius: ");
    scanf("%lf", &c);
    f = (c * (9 / 5)) + 32;
    printf("\nFahrenheit = %lf", f);
}