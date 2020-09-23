#include<stdio.h>
#define PI 3.14159
int main(void)
{ 
    double radius; // use double to permit decimal operations
    printf  ("Enter radius:");
    scanf ("%lf", &radius); // use %lf to recognize the double var
    printf ("volume is : %lf \n\n", (4 *radius*radius*radius* PI)/3.0 ); // incorect close quotation mark/ incorrect use of precedence () / incorrect format specifier %d 
    return 0;
}