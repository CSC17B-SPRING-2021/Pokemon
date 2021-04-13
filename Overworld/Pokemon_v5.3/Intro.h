#ifndef INTRO_H
#define INTRO_H

#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;

class Intro {
    friend class DefaultTowns;
    friend class Route1;
    friend void Testile();
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

