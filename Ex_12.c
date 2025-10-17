/*
Dice roll simulator
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    srand(time(NULL));

    int dice = 5;
    int roll = 0;

    for (int i = 1; i <= dice; i++)
    {
        roll = rand() % 6 + 1;
        printf("Dice %d : %d\n", i, roll);
    }

    return 0;
}