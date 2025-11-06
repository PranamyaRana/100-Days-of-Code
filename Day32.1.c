//Merge two arrays
#include<stdio.h>
int main()
{
    int n, m, i;
    printf("Enter the number of elemts you want in array 1: \n");
    scanf("%d", &n);
    int arr1[n];
    printf("Enter the elements: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter the number of elemts you want in array 1: \n");
    scanf("%d", &m);
    int arr2[m];
    printf("Enter the elements: \n");
    for(i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int merge[n + m];
    for(i = 0; i < n; i++)
    {
        merge[i] = arr1[i];
    }
    for(i = 0; i < m; i++)
    {
        merge[n + i] = arr2[i];
    }
    printf("Merged Array: \n");
    for(i = 0; i < m+n; i++)
    {
        printf("%d ", merge[i]);
    }
}