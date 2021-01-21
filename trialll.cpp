/*
Author: Nasiba Shamsutdinova
Course: CSCI-136
Instructor: G Maryash
Assignment: lab 9A/B/C/E Length and distance in 3D space.*/
#include <iostream>
#include <cmath>
using namespace std;
class Coord3D//class function for x,y,z cordinate
{
	public:
	double x;
	double y;
	double z;

};
double length(Coord3D *p)// calc the distance.
{
	return sqrt( (pow((*p).x, 2)) + (pow((*p).y, 2)) + (pow((*p).z, 2)) );
}
Coord3D * fartherFromOrigin(Coord3D *p1, Coord3D *p2)
{
	if(length(p1)> length(p2))//compere p1 and p2 to find if p1 is getter .
		return p1;
	else
		return p2;
}
void move(Coord3D *ppos, Coord3D *pvel, double dt)
{
	(*ppos).x +=((*pvel).x *dt);// ubdates  update the object’s position
	(*ppos).y +=((*pvel).y *dt);// ubdates  update the object’s position
	(*ppos).z +=((*pvel).z *dt);// ubdates  update the object’s position
}
Coord3D* createCoord3D(double x, double y, double z)// new function
{
	Coord3D * newcor = new Coord3D;
	(*newcor).x = x;
	(*newcor).y = y;
	(*newcor).z = z;
	return newcor;

}
void deleteCoord3D(Coord3D *p)//new function .
{
	delete p;

}
int main() {
    double x, y, z;
    cout << "Enter position: ";
    cin >> x >> y >> z;
    Coord3D *ppos = createCoord3D(x,y,z);
    
    cout << "Enter velocity: ";
    cin >> x >> y >> z;
    Coord3D *pvel = createCoord3D(x,y,z);

    move(ppos, pvel, 10.0);

    cout << "Coordinates after 10 seconds: " 
         << (*ppos).x << " " << (*ppos).y << " " << (*ppos).z << endl;

    deleteCoord3D(ppos); // release memory
    deleteCoord3D(pvel);
}
/*
lab A.main function.
int main()
{
	Coord3D pointP = {10,20,30};
	cout<<length(&pointP)<<endl;// will print the result
}
*/
/*
lab B main cuntion
int main() {// main function
    Coord3D pointP = {10, 20, 30};
    Coord3D pointQ = {-20, 21, -22};

    cout << "Address of P: " << &pointP << endl;
    cout << "Address of Q: " << &pointQ << endl << endl;

    Coord3D * ans = fartherFromOrigin(&pointP, &pointQ);
   
    cout << "ans = " << ans << endl;
}

*/
/* lab C
int main() {// main function
    Coord3D pos = {0, 0, 100.0};
    Coord3D vel = {1, -5, 0.2};

    move(&pos, &vel, 2.0); // object pos gets changed
    cout << pos.x << " " << pos.y << " " << pos.z << endl;
}*/