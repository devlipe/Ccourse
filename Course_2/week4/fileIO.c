/*  Program to show how file in and out works
    Felipe P Ferreira
    29/10/2020
*/

#include<stdio.h>

#define MAX_HW 20

void read_data (FILE *ptr, int d[], int *size)
{
    *size = 0;
    while (fscanf(ptr, "%d", &d[*size]) == 1) 
    {
        (*size)++;   
    }
}

void print_data(int d[], int size)
{
    int i; 

    for ( i = 0; i < size; i++)
    {
        printf("%d\t", d[i]);
        if ((i + 1) % 10 == 0)
        {
            printf("\n");
        }
    }
}

double average(int d[], int size)
{
    int i;
    double average = 0.0;

    for ( i = 0; i < size; i++)
    {
        average += d[i];   
    }
    return (average/size);
}
  
int main()
{
    int i, sz = MAX_HW;
    FILE *ifp;
    int data[MAX_HW] = {100, 0};

    ifp = fopen("myhw", "r");
    read_data(ifp, data, &sz);
    printf("my %d homework score are : \n", sz);
    print_data(data, sz);
    printf("\naverage score was %10f", average(data, sz));
    printf("\n\n");
    fclose(ifp); // exit leads to close - so not strictly needed

    return 0;
}
