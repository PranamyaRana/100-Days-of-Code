// Write a program to calculate electricity bill based on units consumed with these rates:
// First 100 units at ₹5/unit
// Next 100 units at ₹7/unit
// Next 100 units at ₹10/unit
// Above at ₹12/unit
#include<stdio.h>
int main()
{
    int unit, bill;
    printf("\nEnter the units of electricity you have conusmed in the last month: ");
    scanf("%d", &unit);
    if(unit < 0)
    {
        printf("\nWrong Measurement");
    }
    else if(unit < 101)
    {
        bill = unit * 5;
        printf("\nBill: ₹%d", bill);
    }
    else if(unit < 201)
    {
        bill = (100 * 5) + ((unit - 100) * 7);
        printf("\nBill: ₹%d", bill);
    }
    else if(unit < 301)
    {
        bill = (100 * 5) + (100 * 7) + ((unit - 200) * 10);
        printf("\nBill: ₹%d", bill);
    }
    else
    {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((unit - 300) * 12);
        printf("\nBill: ₹%d", bill);
    }
}