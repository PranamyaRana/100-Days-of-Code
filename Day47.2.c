//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>
int main() 
{
    char str[200];
    char word[50], longest[50];
    int i = 0, j = 0, maxLen = 0;
    printf("Enter a sentence:\n");
    gets(str);
    while (str[i] != '\0') 
    {
        if (str[i] != ' ') 
        {
            word[j++] = str[i];
        } 
        else 
        {
            word[j] = '\0';
            if (j > maxLen) 
            {    
                maxLen = j;
                strcpy(longest, word);
            }
            j = 0;
        }
        i++;
    }
    word[j] = '\0';
    if (j > maxLen) 
    {
        strcpy(longest, word);
    }
    printf("Longest word: %s\n", longest);
    return 0;
}