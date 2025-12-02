//Convert a lowercase string to uppercase without using built-in function
#include<stdio.h>
int main()
{
    char str[100];
    int i = 0;
    printf("Enter a lowercase string: \n");
    gets(str);
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        i++;
    }
    printf("String in uppercase: %s", str);
}