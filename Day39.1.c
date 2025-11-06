//Check if the elements on the diagonal of a matrix are distinct
#include<stdio.h>
int main()
{
    int n, i, j, flag = 1;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int a[n][n], diag[n];
    printf("Enter the elements of the matrix:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(i = 0; i < n; i++)
    {
        diag[i] = a[i][i];
    }
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(diag[i] == diag[j])
            {
                flag = 0;
                break;
            }
        }
        if(flag == 0)
        {
            break;
        }
    }
    if(flag == 1)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}