
/*
Author: Jessica DeMota 
Course: CSCI-136
Instructor: Mr.Maryash
Assignment: Homework 9.5 
*/

#include <cstdlib>
#include <iostream>
#include "bot.h"
#include <cmath>

using namespace std;

const int MAX_ROBOT_NUM = 50;

int NUM;          // to remember number or robots
int ROWS, COLS;   // map dimensions

/* Initialization procedure, called when the game starts: */
void onStart(int num, int rows, int cols, double mpr,
             Area &area, ostream &log)
// can leave this function empty but use to intaliaze variables. 
// num is the total number robots under your control
//rows and cols are the number of rows and columns in the map 
// mpr is the probability of robot malfunction 
// area is the information about the debris and robot locations, described in 
//detail later
// log is like a cout - like output stream object for printing out text messages in
// the programmer's log 
{
	NUM = num;   // save the number of robots and the map dimensions
	ROWS = rows;
	COLS = cols;

	log << "Start!" << endl;
}

/* Deciding robot's next move */
Action onRobotAction(int id, Loc loc, Area &area, ostream &log)
// this is where we test our robot and make sure it returns a valid action.
//this tells the robot what it should perform on this one turn 
//this is more on the function, and looking at the surrounds and considering movements 
 {
	int row = loc.r; // current row and column
	int col = loc.c;
	// loc is the current robot location, which is a value of structure type loc 
   if (area.inspect(row, col) == DEBRIS){//distanceMin==1000;
        return COLLECT;}
    else 
	{
        // if not at a debris field, move randomly:
         int distance,distanceMin=10000;
          int x;
          int y;
       // if(distanceMin==1000){
       // bool findDebris=true;
     
            for(int i = 0; i < ROWS; i++) {
            for(int j = 0; j < COLS; j++) {
                if (area.inspect(i, j) == DEBRIS) {
                    distance = pow(row-i, 2) + pow(col-j,2);
                    distance = sqrt(distance);
                    if (distance <distanceMin) {
                        distanceMin = distance;
                        x = i;
                        y = j;
                    }
                }
            }
        }
    //    }
             
         int Rand;
        if(row-x>=0&&col-y<0)
        { if(row-x==0)Rand=1;else
            Rand=2;
            
        }
        
        else if(row-x>=0&&col-y>0){ if(row-x==0)  Rand = 0; else Rand = 2;}
        else if(row-x<0&&col-y<=0) {if (col-y==0) Rand =3; else Rand = 1; }
         else  Rand =0;
        
        switch(Rand) {
        case 0:
            return LEFT;
        case 1:
            return RIGHT;
        case 2:
            return UP;
        default:
            return DOWN;
        }
    }
}

void onRobotMalfunction(int id, Loc loc, Area &area, ostream &log)
//run's everytime a robot breaks so you can program the other robots to repair it 
// 
{
	log << "Robot " << id << " is damaged." << endl;
}

void onClockTick(int time, ostream &log) 
// a function that is run on each tick of the clock 
// parameters are the current time and the output log 

{
	if (time % 100 == 0) log << time << " ";
}

