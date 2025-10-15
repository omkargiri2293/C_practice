/*
Convert Celsius to Fahrenheit
*/

// multiply by 1.8 ( 9/5 ) and add 32

#include <stdio.h>

int main(void)
{
    double c = 0;
    double f = 0;

    double start = 0;
    double stop = 0;
    double step = 0;

    printf("enter start celsius value ");
    scanf("%lf", &start);

    printf("enter stop celsius value ");
    scanf("%lf", &stop);

    printf("enter step value ");
    scanf("%lf", &step);
    printf("Celsius         Fahrenheit\n");
    for (c = start; c <= stop; c += step)
    {

        f = (c * 1.8) + 32;
        printf("%8.2lf %8.2lf\n", c, f);
        //printf("%-8.2lf %8.2lf\n", c, f);
    }

    return 0;
}