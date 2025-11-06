//Perform diagonal traversal of a matrix.
#include <stdio.h>
int main() 
{
    int n, m;
    printf("Enter number of rows and columns: \n");
    scanf("%d %d", &n, &m);
    int a[n][m];
    printf("Enter the matrix elements:\n");
    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Diagonal Traversal: ");
    for(int d = 0; d < n + m - 1; d++)
    {
        int row, col;
        if(d % 2 == 0) 
        {
            row = (d < n) ? d : n - 1;
            col = d - row;
            while(row >= 0 && col < m) 
            {
                printf("%d ", a[row][col]);
                row--;
                col++;
            }
        } 
        else 
        {
            col = (d < m) ? d : m - 1;
            row = d - col;
            while(col >= 0 && row < n) 
            {
                printf("%d ", a[row][col]);
                row++;
                col--;
            }
        }
    }
    printf("\n");
}