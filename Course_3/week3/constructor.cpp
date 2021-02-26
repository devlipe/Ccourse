#include <iostream>
using namespace std;

class point
{
private:
    double x,y;
public:
    point(double x = 0.0, double y = 0.0 ): x(x), y(y){}; // constructor 
    double getx(){return x;}
    void setx(double v){x = v;}
};

point::point(double x = 0.0, double y = 0.0 ): x(x), y(y){}
{
}


