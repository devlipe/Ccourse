/*  Love you how much 
    Demonstrate loop with while 
    Felipe P Ferreira
    14/09/2020
*/

#include <stdio.h>

int main(void) 
{
    int repeat = 0;

    printf("How strong is your love 1-10? : ");
    scanf("%d", &repeat);
    printf("\nI love you very");
    while (repeat > 0)
    {
        printf("\nvery");
        repeat--;
    };
    printf(" much.\n\n");

    return 0;
}