//Count vowels and consonants in a string
#include<stdio.h>
int main()
{
    char str[100];
    int i = 0, vowel = 0, consonant = 0;
    printf("Enter a string: \n");
    gets(str); 
    while (str[i] != '\0') 
    {
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'AU' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            vowel++;
        }
        else
        {
            consonant++;
        }
        i++;
    }
    printf("Vowels: %d\n", vowel);
    printf("Consonants: %d\n", consonant);
}