//Count spaces, digits, and special characters in a string
#include<stdio.h>
int main()
{
    char str[100];
    int i = 0;
    int space = 0, digit = 0, special = 0, temp = 0;
    printf("Enter a string: \n");
    gets(str);
    while(str[i] != 0)
    {
        if(str[i] == ' ')
        {
            space++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        else if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            temp++;
        }
        else
        {
            special++;
        }
        i++;
    }
    printf("Spaces: %d, Digits: %d, Special Characters: %d\n", space, digit, special);
}