//Check if a matrix is symmteric
#include<stdio.h>
int main()
{
    int i, j, n, m, sym = 0;
    printf("Enter the number of rows: \n");
    scanf("%d", &n);
    printf("Enter the number of columns: \n");
    scanf("%d", &m);
    int mat[n][m];
    printf("Enter the elements: \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(mat[i][j] == mat[j][i])
            {
                sym = 1;
            }
        }
        if(sym == 0)
        {
            break;
        }
    }
    if(sym == 1)
    {
        printf("Symmetric\n");
    }
    else
    {
        printf("Not symmetric\n");
    }
}