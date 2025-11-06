//Find the sum of main diagonal elements for a square elements.
#include<stdio.h>
int main()
{
    int n, i, j, sum = 0;
    printf("Enter the size of the matrix: \n");
    scanf("%d", &n);
    int mat[n][n];
    printf("Enter the elements: \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    for(i = 0; i < n; i++)
    {
        sum += mat[i][i];
    }
    printf("The sum of the main diagonal is: %d\n", sum);
}