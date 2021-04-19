//Programmer:		Joshua Buckles, Zachary Romero
//Assignment:		Pokemon Group Project

//Description:		The purpose of this program is to create Route1 class


//PreProcessor Directive
//This line of code causes the contents of another file to be
//inserted into the program

#ifndef ROUTE1_H
#define ROUTE1_H

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include "CombatEvent.h"

using namespace std;
class Route1{                       //Create Route1 class
      public:
    int tile = 0;                   //tile variable to hold player movement in grass
    char choice;                    //choice variable to hold player choice in menu switch case
    bool end;                       //end variable to hold bool for do/while loop for menus
    void Route1Intro();             //Creates member function to the runs introduction to the game
    int Route1Defualt(playerclass);            //Creates member function that returns an int variable tile
    void RandomEncounter(playerclass);         //Creates member function that runs battle encounter 
    void DefaultPalletTown(playerclass);       //Creates member function that runs DefaultPalletTown
    //playerclass player;             //creates player object
 };

#endif /* ROUTE1_H */
