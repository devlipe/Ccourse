 /*  Expression evaluation
    Felipe Pereira Ferreira
    01/09/2020
 */
#include<stdio.h>

int main(void) {

    int a = 5, b = 7, c = 0, d = 0; //initialize

    c = a - b; //1
    printf("1) a = %d, b = %d, c = %d, d = %d\n", a ,b ,c, d);

    c = b - a; //2
    printf("2) a = %d, b = %d, c = %d, d = %d\n", a ,b ,c, d);

    c = a / b ; d = b / a ; //3
    printf("3) a = %d, b = %d, c = %d, d = %d\n", a ,b ,c, d);

    c = a % b ; d = b % a; //4
    printf("4) a = %d, b = %d, c = %d, d = %d\n", a ,b ,c, d);

    c = -a - b ; d = -b - a; //5 
    printf("5) a = %d, b = %d, c = %d, d = %d\n", a ,b ,c, d);

    c = ++a + b++ ; d += 5; //6 
    printf("6) a = %d, b = %d, c = %d, d = %d\n", a ,b ,c, d);

    return 0;
} 