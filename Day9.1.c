//Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    printf("\nEnter the value for a: ");
    scanf("%d", &a);
    printf("\nEnter the value for b: ");
    scanf("%d", &b);
    printf("\nEnter the value for c: ");
    scanf("%d", &c);
    int D = pow(b, 2) - 4 * a * c;
    if(D == 0)
    {
        int root = (-b + sqrt(D))/ (2.0 * a);
        printf("\nThe roots are real and same: %d", root);
    }
    else if(D > 0)
    {
        int root1 = (-b + sqrt(D))/ (2.0 * a);
        int root2 = (-b - sqrt(D))/ (2.0 * a);
        printf("\nThe roots are real and different: %d, %d", root1, root2);
    }
    else
    {
        printf("\nThe roots are complex");
    }
}