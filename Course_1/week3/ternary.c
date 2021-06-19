/*  Ternary operator and flow of control
    Felipe Pereira Ferreria
    16/09/2020
*/
#include <stdio.h>

int main(void)
{
    int speed;

    printf("\nEnter your speed as an integers: ");
    scanf("%d", &speed);
    speed = (speed <= 65) ? (65) : (speed <= 70) ? (70) : (90);
    switch (speed)
    {
        case 65: printf("\nNo speeding ticket\n\n"); break;
        case 70: printf("\nSpeeding ticket\n\n"); break;
        case 90: printf("\nExpensive Speeding Ticket\n\n"); break;
        default: printf("\nIncorrect speed\n\n"); //uneeded

    }
    return 0;
}
