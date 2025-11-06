//Find the second largest element in an array.
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter number of elements:n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: \n");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int largest = -99999, secondLargest = -99999;
    for(i = 0; i < n; i++) 
    {
        if(arr[i] > largest) 
        {
            secondLargest = largest; 
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) 
        {
            secondLargest = arr[i];
        }
    }
    if(secondLargest == -99999) 
    {
        printf("Second largest does not exist\n");
    }
    else 
    {
        printf("Second largest element: %d\n", secondLargest);
    }
}