/* 
    Program to sum 3 variables
    Felipe Ferreira
    28/08/2020
*/

#include <stdio.h>

int main(void)
{
    float a, b, c, sum;
    printf("Imput three floats:");
    scanf("%f%f%f", &a, &b, &c);
    printf("a = %f, b = %f, c = %f\n", a, b, c);
    sum = a + b + c;
    printf("sum = %f\n\n", sum);
    
    return 0;
}