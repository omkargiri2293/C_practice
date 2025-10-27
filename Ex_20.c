/*
Removing all occurrences of a character from a string
*/

#include <stdio.h>

void remove_char(char *string, char r);

int main(void)
{
    char s1[] = "a string with some word.";
    printf("s1 before : %s", s1);
    remove_char(s1, 'i');
    printf("s1 after : %s", s1);
    return 0;
}

void remove_char(char *string, char r)
{
    int pos = 0;
    while (string[pos] == r)
    {
        if (string[pos] != '\0')
        {
            int newpos = pos;
            while (string[newpos] != '\0')
            {
                string[newpos] = string[newpos + 1];
                newpos++;
            }
        }
        else
            pos++;
    }
}