//Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
#include<math.h>
int main()
{
    double p, r, t, si, ci, amount;
    printf("\nEnter the amount of principle: ");
    scanf("%lf", &p);
    printf("\nEnter the amount of rate: ");
    scanf("%lf", &r);
    printf("\nEnter the amount of time to be interest in years: ");
    scanf("%lf", &t);
    si = (p * r * t) / 100;
    amount = p * pow((1 + (r / 100)),t);
    ci = amount - p;
    printf("Simple interest = %lf, Compund Interest = %lf", si, ci);
}