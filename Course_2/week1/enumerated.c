/*  Enumerated Types
    Felipe P Ferreira 
    06/10/2020
*/

#include <stdio.h>

enum day {sun, mon, tue, wed, thu, fri, sat};// declare type
typedef enum day day;

void print_day ( day d)
{
    switch (d)
    {
    case sun:
        printf(" Sunday ");
        break;
    case mon:
        printf(" Monday ");
        break;
    case tue: 
        printf(" Tuesday ");
        break;
    case wed:
        printf(" Wednesday ");
        break;
    case thu:
        printf(" Thursday ");
        break;
    case fri:
        printf(" Friday ");
        break;
    case sat:
        printf(" Saturday ");
        break;
    default: 
        printf ("%d is an error", d);
        break;
    }
}
day next_day( day d)
{
    return (d + 1 % 7);
}
day previous_day (day d)
{
    return (d - 1 % 7);
}
int main(void)
{
    enum day today = wed;

    print_day(today);
    printf("\n\n");
    print_day(7);
    printf("\n\n");
    print_day(next_day(today));
    printf("\n\n");
    print_day(previous_day(today));
    printf("\n\n");

    return 0;
}

