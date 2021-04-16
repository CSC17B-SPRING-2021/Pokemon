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
#include "Pokemon.h"
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
    bool win;
    bool captured;
    int chance = rand() % 100 + 1;
    //Declare Player
    //Declare EnemyPoke
public:

    void Combat(PokemonClass*, bool);
    void combatMenu();


    //class end
};

// Pokemon * Enemy = new (Whatever Pokemon is being used)
// THIS ^ is very important, enemyPoke is represented as Arrays, a pokemon knocked out will be checked if 

void CombatEvent::Combat(PokemonClass * EnemyPoke, bool trainerFight) {

    // Player object assigned to player, enemyPoke assigned to random pokemon
    /*
     PokemonClass* currentPoke = &(FIRST POKE IN INVENT);
     if (Pokemon 1 HP > 0) {
     * while (currentPoke->currentHealth = 0) {
     * switch currentPoke to the next pokemon
     * }
     */
    PokemonClass* currentPoke = new PokemonClass;
    currentPoke->SetUp(25);
    srand(time(NULL));
    bool combat = true;
    int choice;
    bool PlayerTurn = true;
    while (combat) { // Entire Combat loop
        while (PlayerTurn) { // Player's turn: important for moving back in the menus
            choice = -1;
            do {
                cout << EnemyPoke->pokeName << ": " << EnemyPoke->currentHealth << "/" << EnemyPoke->healthStat << endl;
                cout << currentPoke->pokeName << ": " << currentPoke->currentHealth << "/" << currentPoke->healthStat << endl;
                cout << "1. Attack      2. Pokemon\n3. Item         4. Run\n";
                cout << "What will you do?\n";
                cin >> choice;
                if (!cin || choice < 1 || choice > 4) { //non int inputs are filtered and fixed through the !cin, cin.clear(), and empty while loop
                    cout << "That is not a correct choice, please try again.";
                    cin.clear();
                    while (cin.get() != '\n');

                }
            } while (!cin || choice < 1 || choice > 4);
            choice = 1;
            { //Correct choice leads here where it branches off, still can return to loop above
                if (choice == 1) { // attack

                    choice = 0;

                    do {
                        currentPoke->attackMenu();
                        cout << "What attack will you choose? Hit 0 to go back.\n";
                        cin >> choice;
                        if (!cin || choice < 0 || choice > 2) { //non int inputs are filtered and fixed through the !cin, cin.clear(), and empty while loop
                            cout << "That is not a correct choice, please try again.";
                            cin.clear();
                            while (cin.get() != '\n');

                        }
                    } while (!cin || choice < 1 || choice > 4);

                    switch (choice) {
                        case 1:
                            //if (currentPoke->baseSpeed > EnemyPoke->baseSpeed) {
                            chance = rand() * 100 + 1; // this is the hit chance/crit chance

                            if (chance == currentPoke->Move1.accuracy) {
                                cout << "CRITICAL HIT!\n";
                                EnemyPoke->DmgPoke(2 * currentPoke->Move1.dmg, currentPoke->Move1.type);

                            } else if (chance < currentPoke->Move1.accuracy) {
                                cout << "Your attack hit!\n";
                                EnemyPoke->DmgPoke(currentPoke->Move1.dmg, currentPoke->Move1.type);

                            } else {
                                cout << "Your attack missed!\n";
                            }
                            if (EnemyPoke->currentHealth <= 0) {
                                cout << "The opposing Pokemon was knocked out!\n";
                                combat = false;
                            } else {
                                //ENEMY ATTACK FIRST, followed by you
                                if (rand() * 2 == 1) {
                                    chance = rand() * 100 + 1; // this is the hit chance/crit chance
                                    if (chance == EnemyPoke->Move1.accuracy) {
                                        cout << "CRITICAL HIT!\n";
                                        currentPoke->DmgPoke(2 * EnemyPoke->Move1.dmg, EnemyPoke->Move1.type);

                                    } else if (chance < EnemyPoke->Move1.accuracy) {
                                        cout << "Their attack hit!\n";
                                        currentPoke->DmgPoke(EnemyPoke->Move1.dmg, EnemyPoke->Move1.type);

                                    } else {
                                        cout << "Their attack missed!\n";
                                    }
                                    if (currentPoke->currentHealth <= 0) {
                                        cout << "Your Pokemon was knocked out!\n";
                                        combat = false;
                                    }
                                    chance = rand() * 100 + 1; // this is the hit chance/crit chance

                                    if (chance == currentPoke->Move1.accuracy) {
                                        cout << "CRITICAL HIT!\n";
                                        EnemyPoke->DmgPoke(2 * currentPoke->Move1.dmg, currentPoke->Move1.type);

                                    } else if (chance < currentPoke->Move1.accuracy) {
                                        cout << "Your attack hit!\n";
                                        EnemyPoke->DmgPoke(currentPoke->Move1.dmg, currentPoke->Move1.type);

                                    } else {
                                        cout << "Your attack missed!\n";
                                    }
                                    if (EnemyPoke->currentHealth <= 0) {
                                        cout << "The opposing Pokemon was knocked out!\n";
                                        combat = false;

                                    }
                                } else {
                                    chance = rand() * 100 + 1; // this is the hit chance/crit chance
                                    if (chance == EnemyPoke->Move2.accuracy) {
                                        cout << "CRITICAL HIT!\n";
                                        currentPoke->DmgPoke(2 * EnemyPoke->Move2.dmg, EnemyPoke->Move2.type);

                                    } else if (chance < EnemyPoke->Move1.accuracy) {
                                        cout << "Their attack hit!\n";
                                        currentPoke->DmgPoke(EnemyPoke->Move2.dmg, EnemyPoke->Move2.type);

                                    } else {
                                        cout << "Their attack missed!\n";
                                    }
                                    if (currentPoke->currentHealth <= 0) {
                                        cout << "Your Pokemon was knocked out!\n";
                                        combat = false;
                                    }
                                    chance = rand() * 100 + 1; // this is the hit chance/crit chance

                                    if (chance == currentPoke->Move1.accuracy) {
                                        cout << "CRITICAL HIT!\n";
                                        EnemyPoke->DmgPoke(2 * currentPoke->Move1.dmg, currentPoke->Move1.type);

                                    } else if (chance < currentPoke->Move1.accuracy) {
                                        cout << "Your attack hit!\n";
                                        EnemyPoke->DmgPoke(currentPoke->Move1.dmg, currentPoke->Move1.type);

                                    } else {
                                        cout << "Your attack missed!\n";
                                    }
                                    if (EnemyPoke->currentHealth <= 0) {
                                        cout << "The opposing Pokemon was knocked out!\n";
                                        combat = false;

                                    }


                                }


                            }
                            break;

                        case 2:

                            if (currentPoke->baseSpeed > EnemyPoke->baseSpeed) {
                                chance = rand() * 100 + 1; // this is the hit chance/crit chance

                                if (chance == currentPoke->Move2.accuracy) {
                                    cout << "CRITICAL HIT!\n";
                                    EnemyPoke->DmgPoke(2 * currentPoke->Move2.dmg, currentPoke->Move2.type);

                                } else if (chance < currentPoke->Move2.accuracy) {
                                    cout << "Your attack hit!\n";
                                    EnemyPoke->DmgPoke(currentPoke->Move2.dmg, currentPoke->Move2.type);

                                } else {
                                    cout << "Your attack missed!\n";
                                }
                                if (EnemyPoke->currentHealth <= 0) {
                                    cout << "The opposing Pokemon was knocked out!\n";
                                    combat = false;
                                } else {
                                    //ENEMY ATTACK FIRST, followed by you
                                    if (rand() * 2 == 1) {
                                        chance = rand() * 100 + 1; // this is the hit chance/crit chance
                                        if (chance == EnemyPoke->Move1.accuracy) {
                                            cout << "CRITICAL HIT!\n";
                                            currentPoke->DmgPoke(2 * EnemyPoke->Move1.dmg, EnemyPoke->Move1.type);

                                        } else if (chance < EnemyPoke->Move1.accuracy) {
                                            cout << "Their attack hit!\n";
                                            currentPoke->DmgPoke(EnemyPoke->Move1.dmg, EnemyPoke->Move1.type);

                                        } else {
                                            cout << "Their attack missed!\n";
                                        }
                                        if (currentPoke->currentHealth <= 0) {
                                            cout << "Your Pokemon was knocked out!\n";
                                            combat = false;
                                        }
                                        chance = rand() * 100 + 1; // this is the hit chance/crit chance

                                        if (chance == currentPoke->Move2.accuracy) {
                                            cout << "CRITICAL HIT!\n";
                                            EnemyPoke->DmgPoke(2 * currentPoke->Move2.dmg, currentPoke->Move2.type);

                                        } else if (chance < currentPoke->Move2.accuracy) {
                                            cout << "Your attack hit!\n";
                                            EnemyPoke->DmgPoke(currentPoke->Move2.dmg, currentPoke->Move2.type);

                                        } else {
                                            cout << "Your attack missed!\n";
                                        }
                                        if (EnemyPoke->currentHealth <= 0) {
                                            cout << "The opposing Pokemon was knocked out!\n";
                                            combat = false;

                                        }
                                    } else {
                                        chance = rand() * 100 + 1; // this is the hit chance/crit chance
                                        if (chance == EnemyPoke->Move2.accuracy) {
                                            cout << "CRITICAL HIT!\n";
                                            currentPoke->DmgPoke(2 * EnemyPoke->Move2.dmg, EnemyPoke->Move2.type);

                                        } else if (chance < EnemyPoke->Move1.accuracy) {
                                            cout << "Their attack hit!\n";
                                            currentPoke->DmgPoke(EnemyPoke->Move2.dmg, EnemyPoke->Move2.type);

                                        } else {
                                            cout << "Their attack missed!\n";
                                        }
                                        if (currentPoke->currentHealth <= 0) {
                                            cout << "Your Pokemon was knocked out!\n";
                                            combat = false;
                                        }
                                        chance = rand() * 100 + 1; // this is the hit chance/crit chance

                                        if (chance == currentPoke->Move2.accuracy) {
                                            cout << "CRITICAL HIT!\n";
                                            EnemyPoke->DmgPoke(2 * currentPoke->Move2.dmg, currentPoke->Move2.type);

                                        } else if (chance < currentPoke->Move2.accuracy) {
                                            cout << "Your attack hit!\n";
                                            EnemyPoke->DmgPoke(currentPoke->Move2.dmg, currentPoke->Move2.type);

                                        } else {
                                            cout << "Your attack missed!\n";
                                        }
                                        if (EnemyPoke->currentHealth <= 0) {
                                            cout << "The opposing Pokemon was knocked out!\n";
                                            combat = false;

                                        }


                                    }
                                    break;

                                    default:
                                    cout << "";
                                }
                                
                                
                                
                                
                                
                                // ATTACK STUFF ENDS
                                
                                
                            } else if (choice == 2) {
                                // Pokemon

                                choice = -1;
                                while (choice < 0 || choice > 6) {
                                    cout << "Select your Pokemon to switch to! If you wish to go back, enter 0.\n";
                                    //cout << " *displays Poke* ";
                                    cin >> choice;
                                    if (!cin || choice < 0 || choice > 6) {
                                        cout << "That choice was invalid, try again!";
                                        cin.clear();
                                        while (cin.get() != '\n');
                                    } else if (choice = 0) {
                                        break;
                                    } else if (choice > 0 || choice < 6) {
                                        cout << "Good Job";
                                        PlayerTurn = false;
                                    }
                                }
                            } else if (choice == 3) {
                                // items

                                choice = 0;
                                //player.itemMenu();
                                PlayerTurn = false;
                            } else if (choice == 4) {
                                // run
                                if (trainerFight == true) {
                                    cout << "You can't run from a trainer battle!";
                                } else {
                                    chance = rand() % 100 + 1;
                                    if (chance > 20) {
                                        //end combat
                                        break;
                                    } else {
                                        PlayerTurn = false;
                                    }
                                }
                            }


                    }
                }
                //enemy Turn now
                cout << "ENEMY TURN HAPPENS\n";

                chance = rand() * 100 + 1; // this is the hit chance/crit chance
                if (chance == EnemyPoke->Move2.accuracy) {
                    cout << "CRITICAL HIT!\n";
                    currentPoke->DmgPoke(2 * EnemyPoke->Move2.dmg, EnemyPoke->Move2.type);

                } else if (chance < EnemyPoke->Move1.accuracy) {
                    cout << "Their attack hit!\n";
                    currentPoke->DmgPoke(EnemyPoke->Move2.dmg, EnemyPoke->Move2.type);

                } else {
                    cout << "Their attack missed!\n";
                }
                PlayerTurn = true;




            }
        }
    }
    delete [] currentPoke;


}
#endif /* COMBATEVENT_H */

