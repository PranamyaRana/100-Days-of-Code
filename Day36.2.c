//Find the sum of all elements in a martrix
#include<stdio.h>
int main()
{
    int i, j, n, m, sum = 0;
    printf("Enter the number of rows: \n");
    scanf("%d", &n);
    printf("Enter the number of columns: \n");
    scanf("%d", &m);
    int arr[n][m];
    printf("Enter the elements: \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }
    // for(i = 0; i < n; i++)
    // {
    //     for(j = 0; j < m; j++)
    //     {
    //         sum += arr[i][j];
    //     }
    // }
    printf("The sum of all elements is: %d\n", sum);
}