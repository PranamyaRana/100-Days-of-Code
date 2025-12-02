//Count frequency of a given character in a string
#include<stdio.h>
int main()
{
    char str[100], key;
    int i = 0, count = 0;
    printf("Enter a string: \n");
    gets(str);
    printf("Enter a character: \n");
    scanf("%c", &key);
    while(str[i] != '\0')
    {
        if(str[i] == key)
        {
            count++;
        }
        i++;
    }
    printf("Count: %d\n", count);
}