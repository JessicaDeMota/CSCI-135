/*
Author: Jessica De Mota Munoz 
Course: CSCI-136
Instructor: G Maryash
Assignment: lab 9A
.*/

#include <iostream>
#include <cmath>

using namespace std; 

class Coord3D 
{
public:
    double x;
    double y;
    double z;
};

double length(Coord3D *p);
Coord3D * fartherFromOrigin(Coord3D *pl, Coord3D *p2);

int main() 
{
    Coord3D pointP = {10, 20, 30};
    Coord3D pointQ = {-20, 21, -22};

    cout << "Address of P: " << &pointP << endl;
    cout << "Address of Q: " << &pointQ << endl << endl;

    Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
   
    cout << "ans = " << ans << endl; 
}

double length(Coord3D *p)
{
    double len;

    len = ((*p).x * (*p).x) + ((*p).y* (*p).y) + ((*p).z * (*p).z);
    len = sqrt(len);

    return len; 
}

Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2)
{
    double len1, len2;
    len1 = length(p1);
    len2 = length(p2);

    if(len1 > len2)
    {
        return p1;
    }
    else 
    {
        return p2;
    }
}