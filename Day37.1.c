//Find the sum of each row of a matrix and store it in an array
#include<stdio.h>
int main()
{
    int i, j, n, m;
    printf("Enter the number of rows: \n");
    scanf("%d", &n);
    printf("Enter the number of columns: \n");
    scanf("%d", &m);
    int arr[n][m];
    int sum[n];
    printf("Enter the elements: \n");
    for (i =0; i < n; i++)
    {
        sum[i] = 0;
        for(j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
            sum[i] += arr[i][j];
        }
    }
    printf("The sum of each row is: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d \n", sum[i]);
    }
}