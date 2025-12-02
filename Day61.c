//Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
#include <stdio.h>
int main() 
{
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter window size k: ");
    scanf("%d", &k);
    printf("First negative in each window: ");
    for (int i = 0; i <= n - k; i++) 
    {
        int first_neg = 0; 
        for (int j = i; j < i + k; j++) 
        {
            if (arr[j] < 0) 
            {
                first_neg = arr[j];
                break;
            }
        }
        printf("%d", first_neg);
        if (i != n - k)
        {
            printf(" ");
        }
    }
}