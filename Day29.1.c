//Find the sum of elements
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements: \n");
    scanf("%d", &n);
    int num[n], i, sum = 0;
    printf("Enter the elements: \n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }
    for(i = 0; i < n; i++)
    {
        sum += num[i];
    }
    printf("Sum of values: %d\n", sum);
}