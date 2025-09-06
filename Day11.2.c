//Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
int main()
{
    float cp, sp, diff, pl;
    printf("\nEnter the cost price of the product: ");
    scanf("%f", &cp);
    printf("\nEnter the selling price of the product: ");
    scanf("%f", &sp);
    diff = sp - cp;
    if(sp > cp)
    {
        pl = (diff/cp) * 100;
        printf("\nProfit %f%%", pl);
    }
    else if(cp > sp)
    {
        pl = (diff/cp) * 100;
        printf("\nLoss %f%%", pl);
    }
    else
    {
        printf("\nNo Profit No loss");
    }
}