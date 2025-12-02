//Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>
int main() 
{
    char str1[100], str2[100];
    int freq[26] = {0};
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    if (strlen(str1) != strlen(str2)) 
    {
        printf("Not Anagrams\n");
        return 0;
    }
    for (int i = 0; str1[i] != '\0'; i++) 
    {
        char a = str1[i];
        char b = str2[i];
        if (a >= 'a' && a <= 'z') freq[a - 'a']++;
        if (b >= 'a' && b <= 'z') freq[b - 'a']--;
    }
    for (int i = 0; i < 26; i++) 
    {
        if (freq[i] != 0) 
        {
            printf("Not Anagrams\n");
            return 0;
        }
    }
    printf("Anagrams\n");
    return 0;
}