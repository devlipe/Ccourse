/*  Program to generate 10 employees wach one with its data
    Felipe P Ferreira
    09/10/2020
*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>


typedef enum Departament {HR, Sales, Research, Software, Executive}Departament;

typedef struct business
{
    Departament dep;
    int annual_salary;
    unsigned int SSN;
    char name[40];
}employee;

const char* print_departament (Departament dep)
{
    switch (dep)
    {
    case (0):
       return "HR";
        break;
    case (1):
       return "Sales";
        break;
    case (2):
       return "Research";
        break;
    case (3):
       return "Software";
        break;
    case (4):
       return "Executive";
        break;
    default:
        return "Error";
        break;
    }
}
void ssn_generator(employee e[])
{
    srand(time(NULL));
    for (int i = 0; i < 10; i++) 
    {
        e[i].SSN = rand()% 100000 + 100000; 
    }
}
void salary_generator(employee e[])
{
    srand(time(NULL));
    for (int i = 0; i < 10; i++) 
    {
        e[i].annual_salary = rand()% 70000 + 70000; 
    }
}
int main()
{
    employee e[10];

    strcpy(e[0].name,"Joel Miller");
    e[0].dep=Executive;
    strcpy(e[1].name,"Ellie Williams");
    e[1].dep=Sales;
    strcpy(e[2].name,"Abby Anderson");
    e[2].dep=HR;
    strcpy(e[3].name,"Sara Miller");
    e[3].dep=Executive;
    strcpy(e[4].name,"Arthur Morgan");
    e[4].dep=Software;
    strcpy(e[5].name,"Josiah Trellany");
    e[5].dep=Sales;
    strcpy(e[6].name,"John Marston");
    e[6].dep=Research;
    strcpy(e[7].name,"Jack Marston");
    e[7].dep=Software;
    strcpy(e[8].name,"Peter Park");
    e[8].dep=Research;
    strcpy(e[9].name,"Miles Morales");
    e[9].dep=Sales;

    ssn_generator(e);
    salary_generator(e);

    int k;
    for(k=0;k<10;k++)
    {
        printf("\nEMPLOYEE NAME: %s \nANNUAL SALARY: US$%d \nDEPARTMENT: %s\nSSN: %u\n",e[k].name, e[k].annual_salary, print_departament(e[k].dep), e[k].SSN);
        
        printf("\n------------------------------------------------\n");
    }
    return 0;
}


