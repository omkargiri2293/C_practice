/*
Counting occurance of a character from a string
*/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int word_count(char *string, char *word);
int main(void)
{
    char s[] = "it is in this string once.";
    char w[] = "it";
    int result = word_count(s, w);

    printf("count=%d", result);
    return 0;
}

int word_count(char *string, char *word)
{
    int slen = strlen(string);
    int wlen = strlen(word);
    int end = slen - wlen + 1;
    int count = 0;

    for (int i = 0; i < end; i++)
    {
        bool word_found = true;
        for (int j = 0; j < wlen; j++)
        {
            if (word[j] != string[i + j])
            {
                word_found = false;
                break;
            }
        }
        if (word_found)
            count++;
    }
    return count;
}