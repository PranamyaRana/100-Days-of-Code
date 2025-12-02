#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_NAME_LEN 100
int main() 
{
    char fullName[MAX_NAME_LEN];
    printf("Please enter the full name (e.g., John David Doe):\n");
    if (fgets(fullName, MAX_NAME_LEN, stdin) == NULL) 
    {
        return 1;
    }
    size_t len = strlen(fullName);
    if (len > 0 && fullName[len - 1] == '\n') 
    {
        fullName[len - 1] = '\0';
        len--;
    }
    if (len == 0) 
    {
        printf("Output: No name provided.\n");
        return 0;
    }
    int last_word_start = -1;
    for (int i = len - 1; i >= 0; i--) 
    {
        if (fullName[i] == ' ') 
        {
            last_word_start = i + 1;
            break;
        }
    }
    printf("\nOutput: ");
    if (last_word_start == -1) 
    {
        printf("%s\n", fullName);
        return 0;
    }
    int current_word_start = 0;
    int i = 0;
    while (i < last_word_start - 1) 
    {
        printf("%c.", toupper(fullName[current_word_start]));
        while (i < len && fullName[i] != ' ') 
        {
            i++; 
        }
        if (i < last_word_start - 1) 
        {
            printf(" ");
            current_word_start = i + 1;
            i++; 
        }
    }
    printf(" "); 
    printf("%s\n", fullName + last_word_start);
    return 0;
}