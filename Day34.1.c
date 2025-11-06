//Insert an element in an array at a given position
#include<stdio.h>
int main()
{
    int n, i, pos, val;
    printf("Enter the number of elements you want: \n");
    scanf("%d", &n);
    int arr[n+1];
    printf("Enter the values: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the index value you want to insert the element: \n");
    scanf("%d", &pos);
    printf("Enter the element: \n");
    scanf("%d", &val);
    for(i = n; i > pos; i--) 
    {
        arr[i] = arr[i-1];
    }
    arr[pos] = val;
    printf("The new array after the update: \n");
    for(i = 0; i <= n; i++) 
    {
        printf("%d ", arr[i]);
    }
}