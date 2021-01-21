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
    cout << length(&poitP) << endl;

    Coord3D pos = {0,0,100,0}; 
    Coord3D vel = {1,-5,0,2};
    move(&pos, vel, 2.0);
    cout << pos.x << " " << pos.y << " " << pos.z << endl; 
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


void move(Coord3D *ppos, Coord3D *pvel, double dt);
{
    ppos -> x = ppos -> x + pvel-> x * dt;
    ppos -> y = ppos -> y + pvel -> y * dt;
    ppos -> z = ppos -> z + pvel -> z * dt; 
}

