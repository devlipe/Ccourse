/*  Program to calculate circle area
    Felipe Pereira Ferreira
    PM 29/08/2020
*/

#include <stdio.h>
#define PI 3.14159

int main()
{
    double area= 0.0, radious = 0.0 ;
    printf ("Enter radious=: ");
    scanf ("%lf", &radious);
    area = PI * radious * radious;
    printf("Radious of %lf meters; area is %lf sq. meters", radious, area);
    
    return 0;
}