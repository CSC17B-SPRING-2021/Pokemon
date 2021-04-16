/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Thomas 
 *
 * Created on April 9, 2021, 5:47 PM
 */

#include <cstdlib>
#include "Pokemon.h"
#include "CombatEvent.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    PokemonClass * Enemy = new PokemonClass;
    Enemy->SetUp(7);
    CombatEvent * Fight = new CombatEvent;
    Fight->Combat(Enemy, false);
    
    delete[] Enemy, Fight;
    
    return 0;
}

