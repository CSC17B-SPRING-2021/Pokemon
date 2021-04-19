//Programmer:		Joshua Buckles, Zachary Romero
//Assignment:		Pokemon Group Project

//Description:		The purpose of this program is to create a Intro Class


//PreProcessor Directive
//This line of code causes the contents of another file to be
//inserted into the program


#ifndef INTRO_H
#define INTRO_H

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include "CombatEvent.h"
#include "player.h"
#include "PokemonClass.h"

using namespace std;

class Intro {
  public:
    string PName;
    string RName;
    int intro = 0;
    void GameIntro(playerclass);
    void GetPlayer(playerclass);
    void GetRival(playerclass);
    void Playerroom (playerclass);
    void Playerhouse(playerclass);
    void PalletTown(playerclass);
    int ProfessorOak(playerclass);
    void DefaultPalletTown();
};

#endif /* INTRO_H */

