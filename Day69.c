//Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
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
    int xor_all = 0;
    for(int i = 0; i < n; i++)
    {
        xor_all ^= nums[i];
    }
    for(int i = 0; i <= n - 2; i++)
    {
        xor_all ^= i;
    }
    printf("Repeated element = %d", xor_all);
}