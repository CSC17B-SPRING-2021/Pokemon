#ifndef ROUTE1_H
#define ROUTE1_H

#include <cstdlib>
#include <iomanip>
#include <iostream>
//#include "DefaultTowns.h"
//#include "Intro.h"

using namespace std;
class Route1{
    friend class DefaultTowns;
    friend class Intro;
    friend void Testile();
  public:
    int tile = 0;
    char choice;
    bool end;
    void Route1Intro();
    int Route1Defualt();
    void RandomEncounter();
    void DefaultPalletTown();
 };

#endif /* ROUTE1_H */

