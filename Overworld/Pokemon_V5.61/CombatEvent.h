/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   CombatEvent.h
 * Author: Thomas 
 *
 * Created on April 9, 2021, 5:49 PM
 */

#ifndef COMBATEVENT_H
#define COMBATEVENT_H

/*File:   main.cpp
 * Author: Thomas Gatewood
 *
 * Created on March 20, 2021, 7:48 PM
 */
#include "player.h"
#include "PokemonClass.h"
#include <math.h>
#include <cstdlib>
#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

class CombatEvent {
private:
    // actual important variables
    int chance = rand() % 100 + 1;

public:

    bool Combat(int[], bool, playerclass);
    
    


    //class end
};

#endif /* COMBATEVENT_H */
