/*  Char in C, A fundamental type
    Felipe Pereira Ferreira
    02/09/2020
*/

#include<stdio.h>

int main(void) {
    
    char c = 'a';
    printf("c in ASCII is %d\n", c);
    printf("c the character %c\n", c);
    printf("Three consecutive char are : %c%c%c \n", c, c+1, c+2);
    printf("Three bell rings char are : %c%c%c \n", '\a', '\a', '\a');
    
    return 0;
}