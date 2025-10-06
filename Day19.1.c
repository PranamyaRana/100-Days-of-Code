//Write a program to find the LCM of two numbers
#include<stdio>
int main()
{
    int a, b, tempA, tempB;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    tempA = a;
    tempB = b;
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int gcd = a;
    int lcm = (tempA * tempB) / gcd;
    printf("LCM = %d\n", lcm);
    return 0;
}