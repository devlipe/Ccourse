/*  Programa para calcular o imc
    Felipe Pereira Ferreira
    17/09/2020
*/

#include <stdio.h>

int main(void)
{
    double altura, peso;
    int imc; 

    printf("Escreva a sua altura em metros: ");
    scanf("%lf", &altura);
    printf("\nEscreva seu peso em quilogramas: ");
    scanf("%lf", &peso);

    imc = peso / (altura * altura);

    imc = (imc < 18.5) ?  (18) : (imc >= 18.5 && imc < 25)?  (25) : (imc >= 25 && imc < 30)? (30) : (40);

    switch (imc)
    {
        case 18: printf ("\nMora na africa?!");break;
        case 25: printf("\nVoce esta com o peso normal!"); break;
        case 30: printf("\nVoce esta com o peso a cima do normal");break;
        case 40: printf("\nCorrida e dieta pra ontem!!!!");break;
    
        default: printf ("\nPeso e altura incorretos");break;
    }

    return 0;
}
