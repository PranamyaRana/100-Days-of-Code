//Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main()
{
    int sec, hour, min;
    printf("\nEnter time in seconds to convert them into hours:minutes:seconds: ");
    scanf("%d", &sec);
    hour = sec / 3600;
    sec = sec % 3600;
    min = sec / 60;
    sec = sec % 60;
    printf("\n%d:%d:%d", hour, min, sec);
}