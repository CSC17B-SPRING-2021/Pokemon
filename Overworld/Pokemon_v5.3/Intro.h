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
    string PName;                           //string to store PlayerName
    string RName;                           //string to store RivalName
    int intro = 0;                          //int to store intro
    void GameIntro();                       //create GameIntro Member Function
    void GetPlayer();                       //create GetPlayer Member Function
    void GetRival();                        //create GetRival Member Function
    void Playerroom ();                     //create Playerroom Member Function
    void Playerhouse();                     //create Playerhouse Member Function
    void PalletTown();                      //create PalletTown Member Function
    void ProfessorOak();                    //create ProfessorOak Member Function
    void DefaultPalletTown();               //create DefaultPalletTown Member Function
};

#endif /* INTRO_H */

