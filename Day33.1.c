//Search in a sorted array using binary search
#include <stdio.h>
int main() 
{
    int n, key, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter sorted elements: ");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    int low = 0, high = n - 1, mid;
    int found = 0;
    while(low <= high)
    {
        mid = (low + high) / 2;
        if(arr[mid] == key) 
        {
            printf("Element found at index %d", mid);
            found = 1;
        }
        else if(arr[mid] < key) 
        {
            low = mid + 1;
        }
        else 
        {
            high = mid - 1;
        }
    }
    if(!found) 
    {
        printf("Element not found");
    }
}