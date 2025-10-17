/*
Flip a string's lowercase characters to uppercase and vice versa
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void letter_flip(char *s);

int main(void)
{
    char s1[] = "abcdEFGH";
    letter_flip(s1);
    printf("output: %s\n", s1);
    return 0;
}

void letter_flip(char *s)
{

    int length = strlen(s);

    for (int i = 0; i < length; i++)
    {
        if (isupper(s[i]))
            s[i] = tolower(s[i]);
        else if (islower(s[i]))
            s[i] = toupper(s[i]);
    }
}