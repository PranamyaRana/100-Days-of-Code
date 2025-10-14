//Find the maximum and minimum element in an array.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements tou want in the array: \n");
    scanf("%d", &n);
    int arr[n], i, max, min;
    printf("Enter the elements: ");
    for(i =0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];
    for(i = 0; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Maximum elememt: %d\n", max);
    printf("Minimum element: %d\n", min);
}