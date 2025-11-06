//Delete an element from the array
#include<stdio.h>
int main()
{
    int n, i, del, pos = -1;
    printf("Enter the number of elements you want: \n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the index value you want to remove: \n");
    scanf("%d", &del);
    if(del < 0 || del >= n) 
    {
        printf("Invalid index");
    }
    for(i = del; i < n - 1; i++) 
    {
        arr[i] = arr[i + 1];
    }
    printf("Array after deletion: ");
    for(i = 0; i < n - 1; i++) 
    {
        printf("%d ", arr[i]);
    }
}