#include <stdio.h>
#include<stdlib.h>
#include<time.h>


void print_data(int d[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d\t", d[i]);
        if ((i + 1) % 10 == 0)
        {
            printf("\n");
        }
    }
}

int main(void)
{
    int i;
    int data [1000];

    srand(time(0));
    for (i = 0; i < 1000; i++) 
    {
         data[i] = rand()% 4400 + 4400; 
    }
    print_data(data, 1000);
    printf("\n\n");

    return 0;
}