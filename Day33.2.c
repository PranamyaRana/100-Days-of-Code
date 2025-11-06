//Insert an element in a sorted array at the appropriate position
#include <stdio.h>
int main() 
{
    int n, i, value, pos;
    printf("Enter the number of digits you want: \n");
    scanf("%d", &n);
    int arr[n+1];
    printf("Enter the digits: \n");
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want to add: \n");
    scanf("%d", &value);
    pos = n;
    for(i = 0; i < n; i++) 
    {
        if(arr[i] > value) 
        {
            pos = i;
            break;
        }
    }
    for(i = n; i > pos; i--) 
    {
        arr[i] = arr[i-1];
    }
    arr[pos] = value;
    printf("The new array after the update: \n");
    for(i = 0; i <= n; i++) 
    {
        printf("%d ", arr[i]);
    }
}