/*  Codigo para mostrar o uso da funcionalidade de pointer
    Felipe P Ferreira
    30/09/2020
*/
#include <stdio.h>

int main(void)
{
    int a = 0;

    printf("Escreva um valor: \n");
    scanf("%d", &a);

    int *p = &a;

    printf(" a vale %d\n p vale %d\n e *p vale %d\n", a, p, *p);

    return 0;
}
