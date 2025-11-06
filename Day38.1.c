//Add two matrix
#include<stdio.h>
int main()
{
    int a, b, n, m;
    int i, j;
    printf("Enter the rows of matrix 1: \n");
    scanf("%d", &a);
    printf("Enter the columns of matrix 1: \n");
    scanf("%d", &b);
    int mat1[a][b];
    printf("Enter the elements of matrix 1: \n");
    for(i = 0; i < a; i++)
    {
        for(j = 0; j < b; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    printf("Enter the rows of matrix 2: \n");
    scanf("%d", &n);
    printf("Enter the columns of matrix 2: \n");
    scanf("%d", &m);
    int mat2[n][m];
    printf("Enter the elements of matrix 2: \n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    if(a > n)
    {
        if(b > m)
        {
            int sum[a][b];
            for(i = 0; i < a; i++)
            {
                for(j = 0; j < b; j++)
                {
                    sum[i][j] = mat1[i][j] + mat2[i][j];
                    printf("%d ", sum[i][j]);
                }
                printf("\n");   
            }
        }
        else
        {
            int sum[a][m];
            for(i = 0; i < a; i++)
            {
                for(j = 0; j < m; j++)
                {
                    sum[i][j] = mat1[i][j] + mat2[i][j];
                    printf("%d ", sum[i][j]);
                }
                printf("\n");
            }
        }
    }
    else if(a < n)
    {
        if(b > m)
        {
            int sum[n][b];
            for(i = 0; i < n; i++)
            {
                for(j = 0; j < b; j++)
                {
                    sum[i][j] = mat1[i][j] + mat2[i][j];
                    printf("%d ", sum[i][j]);
                }
                printf("\n");
            }
        }
        else
        {
            int sum[n][m];
            for(i = 0; i < a; i++)
            {
                for(j = 0; j < m; j++)
                {
                    sum[i][j] = mat1[i][j] + mat2[i][j];
                    printf("%d ", sum[i][j]);
                }
                printf("\n");
            }
        }
    }
    else
    {
        if(b > m)
        {
            int sum[a][b];
            for(i = 0; i < a; i++)
            {
                for(j = 0; j < b; j++)
                {
                    sum[i][j] = mat1[i][j] + mat2[i][j];
                    printf("%d ", sum[i][j]);
                }
                printf("\n");
            }

        }
        else
        {
            int sum[n][m];
            for(i = 0; i < n; i++)
            {
                for(j = 0; j < m; j++)
                {
                sum[i][j] = mat1[i][j] + mat2[i][j];
                printf("%d ", sum[i][j]);
                }
                printf("\n");
            }
        }
    }
}