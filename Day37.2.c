//Find the transpose of a matrix
#include<stdio.h>
int main()
{
    int i, j, n, m;
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
        }
    }
    printf("Matrix after transpose: \n");
    for(j = 0; j < m; j++)
    {
        for(i = 0; i < n; i++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}