/*
Create a copy of an array
*/

#include <stdio.h>
#include <stdlib.h>

int *array_copy(int *array, int length);

int main(void)
{
    int a1[] = {1, 2, 3, 4, 5};

    int *a1_copy = array_copy(a1, 5);
    for (int i = 0; i < 5; i++)
        printf("a1_copy[%d]=%d\n", i, a1_copy[i]);

    return 0;
}

int *array_copy(int *array, int length)
{
    int *c = malloc(length * sizeof(int));
    for (int i = 0; i < length; i++)
        c[i] = array[i];

    return c;
}