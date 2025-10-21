/*
Vector Addition
*/

#include <stdio.h>

void vector_add(float v1[],
                float v2[], float result[],
                int length);
int main(void)
{
    float v1[] = {2, 3, 4};
    float v2[] = {1, 2, 3};
    float result[] = {};

    vector_add(v1, v2, result, 3);

    for (int i = 0; i < 3; i++)
    {
        printf("result[%d]=%f\n", i, result[i]);
    }

    return 0;
}

void vector_add(float v1[],
                float v2[], float result[],
                int length)
{
    for (int i = 0; i < length; i++)
    {
        result[i] = v1[i] + v2[i];
    }
}