//Convert this program to C++
//change to C++ io
//change to one line comments
//change defines of constants to const
//change array to vector<>
//inline any short function


#include <iostream>
#include <vector> // need vector
#include <numeric>
using namespace std; // standard namespace
const int N = 40;

inline void sum(int &p, int n, vector<int> &v)
{
    int i;

    p = 0;
    p = accumulate(v.begin(), v.end(), 0); // sum all numbers in a vector 
}

int main()
{
    int i;
    int accum = 0;
    int data[N];

    for(i = 0; i < N; ++i)
    {
        data[i] = i;
    }
    vector<int> v(begin(data), end(data)); // transform the array in a vector
    sum(accum, N, v);
    cout << "sum is " << accum << endl;

    return 0;
}