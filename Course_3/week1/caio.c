#include <stdio.h> 
#include<stdlib.h> 
float kelvin (float c) { float k = 0.0; k = c + 273.0;return k;} int main(){float c= 0.0;scanf("%f", &c);printf("\nO valor de entrada em kenvil e: %f", kelvin(c)); return 0;}
