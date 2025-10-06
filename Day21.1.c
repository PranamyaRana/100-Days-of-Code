//Write a program to swap the first and last digit of a number
#include<stdio.h>
#include<math.h>
int main()
{
    int num, first, last, digits, swapped;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    digits = (int)log10(num) + 1;  
    first = num / (int)pow(10, digits - 1); 
    last = num % 10; 
    int middle = (num % (int)pow(10, digits - 1)) / 10;
    swapped = last * (int)pow(10, digits - 1) + middle * 10 + first;
    printf("Number after swapping first and last digit: %d\n", swapped);
}