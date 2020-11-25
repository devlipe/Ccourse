/*  Program to show the use of multiples templates ****USE WITH CAUTION****
    Felipe P Ferreira
    25/11/2020
*/

#include <iostream>
using namespace std;

template <class T1, class T2>
void copy (const T1 source[], T2 destination[], int size)
{
    for (int i = 0; i < size; i++)
    {
        destination[i] = static_cast<T2>(source[i]);
    }    
}   

int main()
{
    double a[50] = {25.5,12.36,1.235,4563.223,45.6323,410.233,785.6,25.68};
    int b[50] = {0};

    copy(a,b,8);

    for (int i = 0; i < 8; i++)
    {
        cout << b[i] << "\t";
    }
    cout << endl;
    return 0;
}
