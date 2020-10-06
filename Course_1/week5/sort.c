/*  Use of simple arrays as parameters
    Sorting bubble sort
    Display each loop
    Easy but inefficient
    Felipe P Ferreira 
    1/10/2020
*/
#include<stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void print_array(int how_many, int data[], char *str)
{
    int i;
    
    printf("%s", str);

    for (i = 0; i < how_many; i++)
    {
        printf("%d\t", data[i]);
        if (i%5==0)
        {
            printf("\n");
        }
        
    }
}

void bubble(int data[], int how_many)
{
    int i, j;
    int go_on;

    for ( i = 0; i < how_many; i++)
    {
        //print_array(how_many, data, "\ninside bubble\n");
        //printf("i = %d, input any int to continue:",i);
        //scanf("%d", &go_on);
        for (j = how_many - 1 ; j > i; j--)
        {
            if (data[j-1] > data[j])
            {
                swap(&data[j-1], &data[j]);
            }
            
        }
    }

}

int main(void)
{
    const int SIZE = 50;
    int grades[50]={87,	63,	46,	18,	84,	5,	43,	28,	87,	19,	15,	27,	57,	6,	35,	19,	90,	26,	29,	79,	71,	24,	55,	46,	94,	74,	26,	8,	87,	4,	22,	93,	77,	44,	2,	4,	68,	13,	38,	14,	82,	49,	47,	51,	60,	95,	26,	31,	90,	82,};

    print_array(SIZE, grades, "My grades\n");
    printf("\n\n");
    bubble(grades, SIZE);
    print_array(SIZE, grades, "\nMy sorted grades\n");
    printf("\n\n");

    return 0;
}