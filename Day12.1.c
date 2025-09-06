// Write a program to calculate library fine based on late days as follows:
// First 5 days late: ₹2/day
// Next 5 days late: ₹4/day
// Next 20 days days late: ₹6/day
// More than 30 days: Membership Cancelled
#include<stdio.h>
int main()
{
    int day, fine;
    printf("\nEnter the number of days the book is returned late: ");
    scanf("%d", &day);
    if(day == 0)
    {
        printf("\nNo fine");
    }
    else if(day < 6)
    {
        fine = 2 * day;
        printf("\nFine ₹%d", fine);
    }
    else if(day < 11)
    {
        fine =(2 * 5) + ((day - 5) * 4);
        printf("\nFine ₹%d", fine);
    }
    else if(day < 31)
    {
        fine =(2 * 5) + (5 * 4) + ((day - 10) * 6);
        printf("\nFine ₹%d", fine);
    }
    else
    {
        printf("\nMembership cancelled");
    }
}