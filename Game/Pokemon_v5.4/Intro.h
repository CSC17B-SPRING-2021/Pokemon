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

using namespace std;

class Intro {
  public:
    string PName;
    string RName;
    int intro = 0;
    void GameIntro();
    void GetPlayer();
    void GetRival();
    void Playerroom ();
    void Playerhouse();
    void PalletTown();
    void ProfessorOak();
    void DefaultPalletTown();
};

#endif /* INTRO_H */

