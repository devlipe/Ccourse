#include <iostream>
using namespace std;

template <class summable> // summable is the generic type

summable sum(const summable data[], int size, summable s = 0)
{
    for(int i = 0; i < size; i++)
    {
        s = s + data[i];
        //+= must work for summable
    }
    return s;
}

template <class subtraction>

subtraction sub(const subtraction data[], int size, subtraction s = 0)
{
    for (int i = 0; i < size; i++)
    {
        s -= data[i];
    }
    return s;    
}

template <class output>

void print(const output data[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << data[i] << "|\t";
    }  
    cout << endl;
}

int main()
{
    cout << "template of sum()" << endl;
    
    int a[] = {1, 2, 3};
    double b[] = {2.1, 2.2, 2.3};
    
    print(a, 3);
    cout << sum(a, 3) << endl; 
    cout << sub(a, 3) << endl; 
    print(b, 3);
    cout << sum(b, 3) << endl;
    cout << sub(b, 3) << endl;

    return 0;
}
