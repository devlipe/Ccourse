/*  Program to demonstrate the print modifiers
    Felipe P Ferreira
    27/10/2020
*/

#include<stdio.h>

int main()
{
    double x = 0.123456789;

    printf("\n+++++ General Printing Ideas +++++\n\n");
    printf(" X is %-12.5e and %e and %10.5f and %10d\n\n", x, x, x, (int)x);

    return 0;
}
