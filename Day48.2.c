//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
int main() 
{
    char str[200];
    int i, start = 0, end;
    printf("Enter a sentence: ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ' ' || str[i+1] == '\0') 
        {
            if (str[i+1] == '\0')
            {
                end = i;
            }
            else
            {
                end = i - 1;
            }
            while (start < end) 
            {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
            start = i + 1;
        }
    }
    printf("Result: %s\n", str);
    return 0;
}