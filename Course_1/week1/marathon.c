/*
Distance of a marathon in yards
Felipe Ferreira 
30/08/2020
*/

#include<stdio.h>

int main(void) 
{
    int miles, yards; 
    double kilometers;

    printf ("Enter the values for miles and yards: "); 
    scanf ("%d%d", &miles, &yards);
    kilometers = 1.609 * (miles + yards/1760.0);
    printf ("A marathon is %lf kilometers.\n", kilometers);

    return 0;
}