/*Pokemon/Overworld/Pokemon V5.2/DefaultTowns.h
@zZ-JayBuck-Zz
zZ-JayBuck-Zz Fully Objectified Pokemon game V5.2
Latest commit b126685 2 days ago
History
1 contributor
253 lines (245 sloc) 9.58 KB
*/
#ifndef DEFAULTTOWNS_H
#define DEFAULTTOWNS_H

#include <cstdlib>
#include <iomanip>
#include <iostream>

using namespace std;

class DefaultTowns {
    friend class Route1;
    friend class Intro;
    friend void Testile();
  public:
    //void PalletTown();
    void ViridianCity();
    void PokemonCenter();
    void PokemonMart();
    void PokemonGym();
    void BrockGym();
    bool end;
    char choice;
    int Grass;
};

#endif /*DEFAULTTOWNS_H*/




