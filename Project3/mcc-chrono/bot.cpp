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
{
    NUM = num;   // save the number of robots and the map dimensions
    ROWS = rows;
    COLS = cols;
  
    log << "Start!" << endl;
}

/* Deciding robot's next move */
Action onRobotAction(int id, Loc loc, Area &area, ostream &log) {
    int row = loc.r; // current row and column
    int col = loc.c;

    if (area.inspect(row, col) == DEBRIS){//distanceMin==1000;
        return COLLECT;}
    else {
     if (area.inspect(row+1, col) == DEBRIS) return DOWN;
         else if (area.inspect(row, col+1) == DEBRIS) return RIGHT;
           else   if (area.inspect(row-1, col) == DEBRIS) return UP;
               else   if (area.inspect(row, col-1) == DEBRIS) return LEFT;
    else if(area.inspect(row-1, col-1) == DEBRIS ||area.inspect(row-1, col+1) == DEBRIS )return UP;
    else if(area.inspect(row+1, col-1) == DEBRIS ||area.inspect(row+1, col+1) == DEBRIS )return DOWN;
                    
    else {
           
        // if not at a debris field, move randomly:
         int distance,distanceMin=10000;
          int x;
          int y;
     
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
 
         int Rand;
        if(row-x>=0&&col-y<0) { if(row-x==0)Rand=1;else  Rand=2;}
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
        
}

void onRobotMalfunction(int id, Loc loc, Area &area, ostream &log) {
    log << "Robot " << id << " is damaged." << endl;
    
}

void onClockTick(int time, ostream &log) {
    if (time % 100 == 0) log << time << " ";
}

