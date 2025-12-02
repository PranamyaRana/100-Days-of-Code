//Replace spaces with hypens in a string
#include<stdio.h>
int main()
{
    char str[100];
    int i = 0;
    printf("Enter a string: \n");
    gets(str);
    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            str[i] = '-';
        }
        i++;
    }
    printf("%s", str);
}