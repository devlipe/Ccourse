#include <iostream>
using namespace std;

template <class summable> // summable is the generic type

summable sum(const summable data[], int size, summable s = 0)
{
    for(int i = 0, i < size, i++)
    {
        s = s + data[i];
        //+= must work for summable
    }
    return s;
}