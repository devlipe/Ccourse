/*  Program that uses a list to save the symbol and the atomic weight of an element
    Felipe P Ferreira
    28/10/2020
*/

#include<stdio.h>
#include<stdlib.h>
#include <string.h>
// Necessary headers

//Create the list
typedef struct list 
{
    char name[15];
    char symbol[4];
    double weight;
    struct list *next;

}list;

int is_empty (const list *l){return(l = NULL);}

//we need this part to create the list elements
list * creat_list (char n[], char s[], double w)
{
    list * head = malloc(sizeof(list));
    strcpy(head->name, n);
    strcpy(head->symbol, s);
    head->weight = w;
    head->next = NULL;
    return head;
}

// this will add one element to the other
list * add_to_front (char n[], char s[], double w, list * h)
{
    list * head = creat_list(n, s, w);
    head->next = h;
    return head;
}

//in this part we read the information in the terminal and then put it in the list
list * terminal_to_list(int size)
{   
    char name[15] = {0};
    char symbol[4] = {0};
    double weight = 0.0;
    
    scanf("%s", &name);
    scanf("%s", &symbol);
    scanf("%lf", &weight);
    list * head = creat_list(name, symbol, weight); // First of all we need to have the first element and the add the othersasdf

    for (int i = 1; i < size; i++)
    {
        scanf("%s", &name);
        scanf("%s", &symbol);
        scanf("%lf", &weight);
        head = add_to_front(name, symbol, weight, head);
    }
    return head;
}

void print_list(list * h, char * title)
{
    printf("\n%s\n\n", title);
    printf("\nElement\t Symbol\t Weight\n\n");
    while (h != NULL)
    {
        printf("> %s  \t %s \t %.4lf \t\n\n", h->name, h->symbol, h->weight);
        h = h->next;
    }
}

int main()
{
    list list_of_elements;
    list * head = NULL;
    int size = 0;

    printf("How much elements?  ");// could be the full periodic table
    scanf("%d", &size); 

    head = terminal_to_list(size);
    print_list(head, "\n======The elements in the list======\n");
    printf("\n\n");
    return 0;
}
