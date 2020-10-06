/*  Program that has a function that prints a table of values for sine and cosine between (0, 1)
    Felipe Pereira Ferreira
    21/09/2020
*/
#include<stdio.h>
#include<math.h>
//Necessary Blibio

int main(void)
{
    int i = 0;
    double cosine = 0, sine = 0, interval = 0;
    //Initialize the identifiers
    //looping
    for (i = 0; i < 11; i++)
    {
        interval = i/10.0;
        cosine = (cos(interval));
        sine = (sin(interval));

        printf ("sine(%lf)= %lf\t cossine(%lf)= %lf\n", interval, sine, interval, cosine);
    }
    
    return 0;
}
