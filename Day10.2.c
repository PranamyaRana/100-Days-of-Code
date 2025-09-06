//Write a program to display the day of the week based on a number (1–7) using switch-case.
#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter any number of the day(1-7): ");
    scanf("%d", &a);
    switch(a)
    {
        case 1:
            printf("\nMonday");
            break;

        case 2:
            printf("\nTuesday");
            break;

        case 3:
            printf("\nWednesday");
            break;
        
        case 4:
            printf("\nThursday");
            break;

        case 5:
            printf("\nFriday");
            break;
        
        case 6:
            printf("\nSaturday");
            break;
        
        case 7:
            printf("\nSunday");
            break;
        
        default:
            printf("\nEnter the correct number of the day");
    }
}