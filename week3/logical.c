/*  Logical operators and short circuit evaluation
    Felipe Pereira Ferreira
    08/09/2020
*/
#include<stdio.h>

    int main(void) {

        int outside, weather;

        printf("\nEnter if outsite 1 true 0 false:");
        scanf("%d", &outside);
        printf("\nEnter if rain 1 true 0 false:");
        scanf("%d", &weather);
        if (outside && weather) 
            printf("\nPlease use an umbrella.\n");
        else     
            printf("\nDress normally.\n\n");
     
        return 0;
    }