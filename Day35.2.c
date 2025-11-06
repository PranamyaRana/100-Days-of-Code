//Rotate an array to the right by k positions.
#include <stdio.h>
int main() 
{
    int n, k, i;
    printf("Enter number of elements: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: \n", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter value of k (positions to rotate): \n");
    scanf("%d", &k);
    k = k % n;
    int temp[k];
    for(i = 0; i < k; i++) 
    {
        temp[i] = arr[n - k + i];
    }
    for(i = n - 1; i >= k; i--) 
    {
        arr[i] = arr[i - k];
    }
    for(i = 0; i < k; i++) 
    {
        arr[i] = temp[i];
    }
    printf("Array after rotating right by %d positions: \n", k);
    for(i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
}