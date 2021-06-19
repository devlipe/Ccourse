/*  Program to calculate a sine value
    Felipe Pereira Ferreira
    03/09/2020
*/

#include<stdio.h>
#include<math.h> // necessary library 

int main(void) {

    double result = 0 , variable = 0; // initialize the identifiers

    printf("Please enter the value of the variable: ");
    scanf("%lf", &variable); // Get info

    result = sin(variable); // making the calculation

    printf("\n The sine value, in radians, of %lf is %f!\n", variable, result);//show the results
    
    return 0;
}