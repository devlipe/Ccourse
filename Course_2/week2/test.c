/*
Olena Herechko
2020-10-07

Option 1
a function that produces a next day
*/

#include <stdio.h>
#include <string.h>

typedef enum
    month { jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec, month_end} month;

struct data {int y; month m; int d;};

struct mon_info {
   const char *sname;
   const char *lname;
}; 

const struct mon_info *mon_info_get(month m) { 
   static const struct mon_info
        mon_info[month_end] = {
            [jan]={"jan", "January"},
            [feb]={"feb", "February"},
            [mar]={"mar", "March"},
            [apr]={"apr", "April"},
            [may]={"may", "May"},
            [jun]={"jun", "June"},
            [jul]={"jul", "July"},
            [aug]={"aug", "August"},
            [sep]={"sep", "September"},
            [oct]={"oct", "October"},
            [nov]={"nov", "November"},
            [dec]={"dec", "December"},
    }, err = {"<err>", "<err>"};

    return m < month_end && m >= 0 ? &mon_info[m] : &err;
}

int print_date(month m, int d)
{
    printf("\n Date is: %s, %d ", mon_info_get(m)->lname, d);
    return 0;
}

int print_next_data(month m, int d)
{
    printf("\n Next date is: %s, %d ", mon_info_get(m)->lname, d);
    return 0;
}

int year_is_leap(int y) {
    return !(y % 4) && ((y % 100) || !(y % 400));
}

int month_days_number(month m,const int year)
{
    int days = 30;

    if (m == feb)
         days = year_is_leap(year) ? 29 : 28;
    else if (m == jan || m == mar || m == may || m == jun ||
             m == aug || m == oct || m == dec)
        days = 31;

    return days;
}

/* next day */
int next_day(const struct data *date, struct data *date_next)
{    
    const int d_max = month_days_number(date->m, date->y);

    if  (date->d < d_max)
    {
        date_next->m = date->m ;
        date_next->d = date->d +1;
    }
    else  if (date->d == d_max)
    {
        if  (date->m != dec)
            date_next->m = date->m +1 ;
        else
            date_next->m = jan;
        date_next->d = 1;
    }

    return 0;
}

/* get date from stdin (user enter) */
int get_user_data(struct data *date)
{
    char month[4];
    int i ;

    printf("\n Enter year : ");
    scanf("%6d", &date->y);

    printf("\n Enter month (example: jan, feb, may): ");
    scanf("%3s", &month[0]);

    for (i = 0; i < month_end; i++)
    {   if (strcmp(month, mon_info_get(i)->sname) == 0)
            break;
    }

    date->m = i;

    printf("\n Enter day : ");
    scanf("%2d", &date->d);

    return 0;
}

/* check input */
int date_is_valid (const struct data *date)
{   
    return (date->m != month_end) && (date->d > 0) 
        && (date->d <=  month_days_number(date->m, date->y));
}

int main(void)
{
    struct data date = {0}, date_next = {0};

    get_user_data(&date);
    if (!date_is_valid(&date))
        return -1; 
    print_date(date.m, date.d);
    next_day(&date, &date_next);
    print_next_data(date_next.m, date_next.d);

    return 0;
}