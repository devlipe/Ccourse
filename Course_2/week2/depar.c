#include <stdio.h>
#include<string.h>
typedef enum Department{HR,Sales,Software,Executive,Research}Department;
typedef struct business
{
    Department department;
    char name[40];
    unsigned int SSN;
    int annual_salary;
}employee;

const char* printDepartmentName(enum Department department)
{
    switch(department)
    {
        case(0):return "HR";
        break;
        case(3):return "Executive";
        break;
        case(1):return "Sales";
        break;
        case(4):return "Research";
        break;
        case(2): return"Software";
        break;
    }
}
void main()
{
    int i=0;
    employee e[10];
    
    strcpy(e[0].name,"Seamus Diggory");
    e[0].department=0;
    strcpy(e[1].name,"Claire Embrosia");
    e[1].department=Sales;
    strcpy(e[2].name,"Edward Cullen");
    e[2].department=Sales;
    strcpy(e[3].name,"Alice Hale");
    e[3].department=Executive;
    strcpy(e[4].name,"Emalin Mandrake");
    e[4].department=Software;
    strcpy(e[5].name,"Dean Thomas");
    e[5].department=Research;
    strcpy(e[6].name,"Nicholas Finnigan");
    e[6].department=Sales;
    strcpy(e[7].name,"Paul Keller");
    e[7].department=Software;
    strcpy(e[8].name,"Renee Clausia");
    e[8].department=Research;
    strcpy(e[9].name,"Ana Augustus");
    e[9].department=Sales;
    
    for(;i<10;i++)
    {
    e[i].SSN=300000000+2730456*i;
    enum Department department= e[i].department;
    if(department==HR)
        e[i].annual_salary=10000;
    else if(department==Sales)
       e[i].annual_salary=7000;
    else if(department==Software)
        e[i].annual_salary=15000;
    else if(department==Executive)
        e[i].annual_salary=20000;
    else
        e[i].annual_salary=17000;
        
    }    
    
    
    int k;
    for(k=0;k<10;k++)
    {
        printf("\nEMPLOYEE NAME: %s \nANNUAL SALARY: US$%d per month\nDEPARTMENT: %s\nSSN: %u\n",e[k].name, e[k].annual_salary, printDepartmentName(e[k].department), e[k].SSN);
        
        printf("\n------------------------------------------------\n");
    }
}