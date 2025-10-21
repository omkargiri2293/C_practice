/*
Dot Product
*/

#include <stdio.h>

float dot_product(float v1[],
                  float v2[],
                  int length);
int main(void)
{
    float v1[] = {2, 3, 4};
    float v2[] = {1, 2, 3};
    float result = dot_product(v1, v2, 3);

    printf("result:%f\n", result);

    return 0;
}

float dot_product(float v1[],
                  float v2[],
                  int length)
{
    float sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum = sum + (v1[i] * v2[i]);
    }
    return sum;
}