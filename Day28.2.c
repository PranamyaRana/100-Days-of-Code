//Read and print elements of a one-dimensional array
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    int num[n], i;
    printf("Enter the elements: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    printf("The values are: \n");
    for(i = 0; i < n; i++)
    {
        printf("%d  ", num[i]);
    }   
}