/*  Fundamental types sizeof operator.
    Felipe Pereira Ferreira
    02/09/2020
*/

#include<stdio.h>

int main(void) {
    int a = 5, b = 7, c = 6; // declare and initialize
    double average = 0.0; // good practice

    printf("On my system:\n");
    printf("int is %lu bytes.\n", sizeof(int));
    printf("long int is %lu bytes.\n", sizeof(long int));
    printf("char is %lu bytes.\n", sizeof(char));
    printf("float is %lu bytes.\n", sizeof(float));
    printf("double is %lu bytes.\n", sizeof(double));
    printf("long double is %lu bytes.\n\a", sizeof(long double));

    return 0;
}