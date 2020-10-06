/*  If and relations and flow of control
    Felipe Pereira Ferreira 
    10/09/2020
*/
#include<stdio.h>

int main(void)
{
    double speed;

    printf("\nEnter speed as a integer: ");
    scanf("%lf", &speed);
    if (speed <= 65)
        printf("\nNo speeding ticket\n\n");
    else
        printf("\nSpeeding ticket\n\n");
    return 0;
}
