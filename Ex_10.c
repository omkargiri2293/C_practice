/*
Counting the Vowels in a String
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int vowel_count(char *s);

int main(void)
{
    char s1[] = "omkar giri";

    int s1count = vowel_count(s1);
    printf("s1 vowel count : %d\n", s1count);
}

int vowel_count(char *s)
{
    int count = 0;

    for (int i = 0; i < strlen(s); i++)
    {
        switch (toupper(s[i]))
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            count++;
        }
    }
    return count;
}