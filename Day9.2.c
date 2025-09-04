// Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
// 90-100: Grade A 
// 80-89: Grade B 
// 70-79: Grade C 
// 60-69: Grade D 
// below 60: Grade F.
#include<stdio.h>
int main()
{
    int marks;
    printf("\nEnter the amount of percentage(0 - 100) you have recently gotten: ");
    scanf("%d", &marks);
    if(marks > 89 && marks < 101)
    {
        printf("\nGrade A");
    }
    else if(marks > 79 && marks < 90)
    {
        printf("\nGrade B");
    }
    else if(marks > 69 && marks < 80)
    {
        printf("\nGrade C");
    }
    else if(marks > 59 && marks < 70)
    {
        printf("\nGrade D");
    }
    else if(marks < 60 && marks > -1)
    {
        printf("\nGrade F");
    }
    else
    {
        printf("\nYou have entered the wrong value.");
    }
}