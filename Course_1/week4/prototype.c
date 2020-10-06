/*  Table of squares and cubes
    Felipe P Ferreira
    23/09/2020
*/

#include <stdio.h>

double square (double);
double cube(double);

int main(void)
{
    int how_many = 0, i , j;

    printf("I want the square and cube for 1 to n where n is: ");

    scanf("%d", &how_many);
    printf("\nSquare and cubes by interval of .1\n");

    for (i = 1; i <= how_many; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("\n%.2lf\t %.2lf\t %.2lf", i + j /10.0, square(i + j/10.0), cube(i + j/10.0));

        }
    }
    return 0;
}

double square (double x)
{
    return (x * x);
}
double cube(double x)
{
    return (x * x * x);
}