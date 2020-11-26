/*  Use of enum in the c++ language, the goal is to make them feel natural
    Felipe P Ferreira
    26/11/2020
*/

#include<iostream>
using namespace std;

typedef enum days{SUN, MON, TUE, WED, THU, FRI, SAT}days;

inline days operator++(days& d) //PREFIX OPERATOR
{ 
    d = static_cast<days>((static_cast<int>(d) + 1) % 7);
    return d;
}

days operator++(days& d, int) //POSTFIX OPERATOR
{
    days temp = d;
    d = static_cast<days>((static_cast<int>(d) + 1) % 7);
    return temp;
}

ostream& operator<< (ostream& out, const days& d)
{
    switch (d)
    {
        case SUN: out << "Sunday";break;
        case MON: out << "Monday";break;
        case TUE: out << "Tuesday";break;
        case WED: out << "Wednesday";break;
        case THU: out << "Thursday";break;
        case FRI: out << "Friday";break;
        case SAT: out << "Saturday";break;
    }
    return out;
}

int main()
{
    days d = MON, e;
    for (int i = 0; i < 7; i++)
    {
        ++d;
        cout << d << endl;
    }
    return 0;
}
