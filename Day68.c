//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter the array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    int total_sum = n * (n + 1) / 2;
    int array_sum = 0;
    for(int i = 0; i < n; i++)
    {
        array_sum += nums[i];
    }
    int missing = total_sum - array_sum;
    printf("Missing number = %d", missing);
}