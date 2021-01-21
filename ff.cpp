/*
Author: Jessica De Mota Munoz 
Course: CSCI-136
Instructor: G Maryash
Assignment: lab 9A
.*/
/* comment */
/* comment */
/* comment */

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <climits>
#include <cctype>
#include <cassert>
#include <cmath>


using namespace std;

class Point 
    {
        public:
        double Xcoordinate;
        double Ycoordinate;
    };

class Triangle 
    {
        public:
        Point a;
        Point b;
        Point c;
    };

double perimeterfunc(Point &p1, Point &p2)
    {
        double distX = (p1.Xcoordinate - p2.Xcoordinate);
        double distXSquared = (distX * distX);
        double distY = (p1.Ycoordinate - p2.Ycoordinate);
        double distYSquared = (distY * distY);
        double distXY = sqrt(distXSquared + distYSquared);
        return distXY;
    }

void Perimeter(Triangle tri) 
    {
        double perimeter = 0.0;
        Point x = tri.a;
        Point y = tri.b;
        Point z = tri.c;
        double edgeA = perimeterfunc(x,y);
        double edgeB = perimeterfunc(y,z);
        double edgeC = perimeterfunc(z,x);
        perimeter = edgeA + edgeB + edgeC;
        cout << endl << "The perimeter is = " << perimeter << endl;
    }

int main( ) 
    {
        Triangle triangle;
        Point One;
        Point Two;
        Point Three;
        cout << "Enter an x-coordinate for the first point of your triangle: ";
        cin >> One.Xcoordinate;

        cout << "Enter a y-coordinate for the first point of your triangle: ";
        cin >> One.Ycoordinate;

        cout << "Enter an x-coordinate for the second point of your triangle: ";
        cin >> Two.Xcoordinate;

        cout << "Enter a y-coordinate for the second point of your triangle: ";
        cin >> Two.Ycoordinate;

        cout << "Enter an x-coordinate for the third point of your triangle: ";
        cin >> Three.Xcoordinate;

        cout << "Enter an x-coordinate for the third point of your triangle: ";
        cin >> Three.Ycoordinate;

        triangle.a = One;
        triangle.b = Two;
        triangle.c = Three;
        Perimeter(triangle);
        return 0;
    }