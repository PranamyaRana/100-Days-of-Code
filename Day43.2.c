//Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, j, isPalindrome = 1;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    int length = strlen(str);
    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome)
    {
        printf("The string is a palindrome.\n");
    }
    else
    {
        printf("The string is not a palindrome.\n");
    }
}