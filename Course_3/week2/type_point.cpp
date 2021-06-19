/*  Prgram to show how to create a new type point
    Felipe P Ferreira
    27/11/2020
*/

#include <iostream>
using namespace std;

class point
{
    private: 
        double x, y;

    public:
        double getx() {return x;}
        void setx(double v){x = v;}
        

};

point operator+ (point& p1, point& p2)
{
    point sum = {p1.x + p2.x, p1.y + p2.y};
    return sum;
}

ostream& operator<< (ostream& out, const point& p)
{
    out << " ( " << p.x << ", " << p.y << " )";
    return out; 
}
// Usual signature for overloading ostream& operator << 
// (ostream& out , const my_type& v)
// Both arguments are passed by reference
// my_type is passed with a const modifier
// so as not to be modified

int main()
{
    point a = {3.5,2.5}, b = {2.5,4.5};
    cout << "a = " << a << " b = "<< b << endl;
    cout << "Sum = " << a + b << endl;

    return 0;
}

const point& operator+ (point& p1) 
{   
    const point& sum = point( p1.x + this->x , p1.y + this->y ); 
    return sum; 
}

point :: point& operator+(const point& p1)
{  
    const point& sum = point( p1.x + this->x , p1.y + this->y );
    return sum;
}