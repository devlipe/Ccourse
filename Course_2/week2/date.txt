/*  Program to print ou a date and the next day
    Felipe P Ferreira
    08/10/2020
*/

#include<stdio.h>


typedef enum month {January, February, March, April, May, June, July, August, September, October, November, December} month;
// Enumerating the month we will need

typedef struct date
{
    month m;
    int day; //day
}date;
// Creating a struct for the date

void print_date(date d) // For printing the date
{
    switch (d.m)
    {
    case January:
        printf ("January %d", d.day);
        break;
    case February:
        printf ("February %d", d.day);
        break;
    case March:
        printf ("March %d", d.day);
        break;
    case April:
        printf ("April %d", d.day);
        break;
    case May:
        printf ("May %d", d.day);
        break;
    case June:
        printf ("June %d", d.day);
        break;
    case July:
        printf ("July %d", d.day);
        break;
    case August:
        printf ("August %d", d.day);
        break;
    case September:
        printf ("September %d", d.day);
        break;
    case October:
        printf ("October %d", d.day);
        break;
    case November:
        printf ("November %d", d.day);
        break;
    case December:
        printf ("December %d", d.day);
        break;      
    default: printf("%d is an error", d.m);
        break;
    }
}

date next_day(date d) //function to print the next day it should hand evey next date possible
{
    if (d.m == 1 && d.day == 28)
    {
        d.m = (d.m + 1) % 12;
        d.day = (d.day + 1) % 28;

        return(d);
    }
    else if ((d.m == 0 || d.m == 2 ||d.m == 4 ||d.m == 6 ||d.m == 7 ||d.m == 9 || d.m == 11) && d.day == 31 )
    {
        d.m = (d.m + 1) % 12;
        d.day =(d.day + 1) % 31;

        return(d);
    }
    else if ((d.m == 3 || d.m == 5 || d.m == 8 || d.m == 10) && d.day == 30)
    {
        d.m = (d.m + 1) % 12;
        d.day = (d.day + 1) % 30;

        return (d);
    }
    else
    {
        d.m = d.m;
        d.day = (d.day + 1);

        return(d);
    } 
}

int main()
{
    int v;
    date today;
    today.m = February;
    today.day = 28;

    print_date(today);
    printf("\n\nNext day is\n");
    print_date(next_day(today));
    printf("\n\n");

    today.m = March;
    today.day = 14;

    print_date(today);
    printf("\n\nNext day is\n");
    print_date(next_day(today));
    printf("\n\n");

    today.m = October;
    today.day = 31;

    print_date(today);
    printf("\n\nNext day is \n");
    print_date(next_day(today));
    printf("\n\n");

    today.m = December;
    today.day = 31;

    print_date(today);
    printf("\n\nNext day is\n");
    print_date(next_day(today));
    printf("\n\n");

    return 0;
}
