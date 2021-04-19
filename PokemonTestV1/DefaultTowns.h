//Programmer:		Joshua Buckles, Zachary Romero
//Assignment:		Pokemon Group Project

//Description:		The purpose of this program is to create a Default town class


//PreProcessor Directive
//This line of code causes the contents of another file to be
//inserted into the program

#ifndef DEFAULTTOWNS_H
#define DEFAULTTOWNS_H

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include "CombatEvent.h"

using namespace std;

class DefaultTowns {
  public:
    void ViridianCity(playerclass);                                                        //Runs Viridian City
    void PokemonCenter(playerclass);                                                       //Runs Pokemon Center
    void PokemonMart(playerclass);                                                         //Runs Pokemon Mart
    void PokemonGym(playerclass);                                                          //Runs Pokemon Gym
    void BrockGym(playerclass);                                                            //Runs Brocks battle system
    void EndGame();                                                             //Ends Game
    bool end;                                                                   //Holds end variable to end do while menu loops
    char choice;                                                                //holds choice variable for menu case switches
    int Grass;                                                                  //hold Grass variable for  do while grass loop and return function

};

#endif /*DEFAULTTOWNS_H*/
