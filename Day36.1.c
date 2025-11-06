//Read and print a matrix
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
    printf("The matrix is: \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}