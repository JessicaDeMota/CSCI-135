
#include <iostream>
#include <cmath>


class Coord3D 
{
public:
    double x;
    double y;
    double z;
};

double length(Coord3D *p);

int main() 
{
    Coord3D pointP = {10, 20, 30};
    cout << length(&pointP) << endl; // would print 37.4166
}

double length(Coord3D *p)
{
    double len;

    len = ((*p).x* (*p).x) + ((*p).y* (*p).y) + ((*p).z * (*p).z);
    len = sqrt(len);

    return len; 
}