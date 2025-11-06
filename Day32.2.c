// Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main() 
{
    long long num;
    printf("Enter a digit: \n");
    scanf("%lld", &num);
    int freq[10] = {0};
    while(num > 0) 
    {
        int digit = num % 10;
        freq[digit]++;
        num = num / 10;
    }
    int maxDigit = 0;
    for(int i = 1; i < 10; i++) 
    {
        if(freq[i] > freq[maxDigit]) 
        {
            maxDigit = i;
        }
    }
    printf("The digit that occurs the most time is: %d", maxDigit);
}