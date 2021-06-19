/*  Program to create a random generated graph matrix
    Felipe P Ferreira
    16/12/2020
*/

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    bool ** graph;
    const int size = 7;

    srand(time(0));
    
    graph = new bool * [size];
    for (int i = 0; i < size; ++i)
    {
        graph[i] = new bool[size];
    }

    for (int i = 0; i < size ; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (i == j)
            {
                graph[i][j] = false;
            }
            else
            {
                graph[i][j] = graph[j][i] = (prob() < 0.19);
            }
        }
    }
    
    
    return 0;
}
