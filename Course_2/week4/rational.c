/*  Program that reads a file and with the integer values create a rational array
    Felipe P. Ferreira
    06/11/2020
*/

#include<stdio.h>
#include<stdlib.h>

#define MX_DATA 21

typedef struct rational
{
    int numerator;
    int denominator;
    
}rational;

int LCM(int n1, int n2) 
{
    int i, gcd, lcm;

    for (i = 1; i <= n1 && i <= n2; ++i) {
        
        // check if i is a factor of both integers
        if (n1 % i == 0 && n2 % i == 0)
            gcd = i;
    }

    lcm = (n1 * n2) / gcd;

    return lcm;
}

void read_data(int d[], int *size, FILE *ptr)
{
    *size = 0;
    while(fscanf(ptr, "%d", d[*size]) == 1)
    {
       (*size) ++;
    }
}

void array_to_rational (int d[], rational fraction[], int size)
{
    for (int i = 1; i < (size - 1)/2; i+2)
    {
        fraction->numerator = d[i];
        fraction->denominator = d[i+1];
    }
}
rational add (rational fraction[], int sz)
{
    int aux = 0;
    rational soma;
    soma.denominator = LCM (fraction[0].denominator, fraction[1].denominator);
    soma.numerator = ((fraction[0].numerator * (soma.denominator/fraction[0].denominator)) + (fraction[1].numerator * (soma.denominator/fraction[1].denominator)));
    for (int i = 2; i < sz; i++)
    {   
        aux = soma.denominator;
        soma.denominator = LCM (soma.denominator, fraction[i].denominator);
        soma.numerator = ((fraction[i].numerator * (soma.denominator/fraction[i].denominator)) + (soma.numerator * (soma.denominator/aux)));
    }
    return soma;
}
rational sub (rational fraction[], int sz)
{
    int aux = 0;
    rational sub;
    sub.denominator = LCM (fraction[0].denominator, fraction[1].denominator);
    sub.numerator = ((fraction[0].numerator * (sub.denominator/fraction[0].denominator)) - (fraction[1].numerator * (sub.denominator/fraction[1].denominator)));
    for (int i = 2; i < sz; i++)
    {   
        aux = sub.denominator;
        sub.denominator = LCM (sub.denominator, fraction[i].denominator);
        sub.numerator = ((fraction[i].numerator * (sub.denominator/fraction[i].denominator)) + (sub.numerator * (sub.denominator/aux)));
    }
    return sub;
}
rational mult (rational fraction[], int sz)
{
    rational mult;
    mult.numerator = (fraction[0].numerator * fraction[1].numerator);
    mult.denominator = (fraction[0].denominator * fraction[1].denominator);
    for (int i = 2; i < sz; i++)
    {
        mult.numerator = mult.numerator * fraction[i].numerator;
        mult.denominator = mult.denominator * fraction[i].denominator;
    }
    return mult;
}

rational divi (rational fraction[], int sz)
{
    rational div;
    div.numerator = fraction[0].numerator * fraction[1].denominator;
    div.numerator = fraction[0].denominator * fraction[1].numerator;
    for (int i = 2; i < sz; i++)
    {
        div.numerator = div.numerator * fraction[i].denominator;
        div.denominator = div.denominator * fraction[1].numerator;
    }
    return div;
}

void createfile (rational fraction[], int sz, FILE *ofp)
{
    int  *c;
    rational v;

    c = "The sum are";
    putc(c,ofp);
    v = add(fraction, sz);
    c = v.numerator;
    putc(c,ofp);
    putc("/",ofp);
    c = v.denominator;
    putc(c,ofp);
    putc('\n', ofp);

    c = "The sub are";
    putc(c,ofp);
    v = sub(fraction, sz);
    c = v.numerator;
    putc(c,ofp);
    putc("/",ofp);
    c = v.denominator;
    putc(c,ofp);
    putc('\n', ofp);

    c = "The mult are";
    putc(c,ofp);
    v = mult(fraction, sz);
    c = v.numerator;
    putc(c,ofp);
    putc("/",ofp);
    c = v.denominator;
    putc(c,ofp);
    putc('\n', ofp);

    c = "The div are";
    putc(c,ofp);
    v = divi(fraction, sz);
    c = v.numerator;
    putc(c,ofp);
    putc("/",ofp);
    c = v.denominator;
    putc(c,ofp);
    putc('\n', ofp);

}

int main(int argc, char const *argv[])
{
    int data[MX_DATA] = {0,0};
    int sz = MX_DATA;
    FILE * ifp, *ofp;

    if (argc != 3)
    {
        printf ("Need executable inputfile outputfile\n");
        exit(1);
    }

    ifp = fopen(argv[1], "r+");
    ofp = fopen(argv[2], "w+");
    read_data(data, &sz, ifp);
    int qt = data[0];

    rational fraction[qt];
    array_to_rational(data, fraction, sz);
    sz = (sz-1)/2;
    createfile(fraction, sz , ofp);

    fclose(ifp);
    fclose(ofp);
    return 0;
}