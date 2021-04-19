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

//bool returns whether the battle was won (Running and catching counts as winning), or lost(all pokemon have fainted AKA currentHealth == 0)
bool CombatEvent::Combat(int enemyArr[], bool trainerFight, playerclass player) {

    //Pointer is used so that any pokemon can be referenced
    PokemonClass* currentPoke = new PokemonClass;
    PokemonClass* EnemyPoke = new PokemonClass;
    //Set up the pokemon to the stats as indicated by their pokemonNum which is stored in the array
    currentPoke->SetUp(player.playerArray[0]);
    EnemyPoke->SetUp(enemyArr[0]);
    
    int pokeballs = 0;
    srand(time(NULL));
    int choice;
    bool PlayerTurn = true; // PlayerTurn is very important, as it allows the enemy to attack if the player uses an item.
    // yourpoke and theirpoke refers to the next spot on the array of pokemon
    int yourpoke = 1;
    int theirpoke = 1;
    
    while (true) { // Entire Combat loop
        while (PlayerTurn) { // Player's turn: important for moving back in the menus
            choice = -1; //every setting of choice makes sure that the player's previous choices do not affect future ones
            do {
                cout << "Their " << EnemyPoke->pokeName << ": " << EnemyPoke->currentHealth << "/" << EnemyPoke->healthStat << endl;
                cout << "Your " << currentPoke->pokeName << ": " << currentPoke->currentHealth << "/" << currentPoke->healthStat << endl;
                //cout the HP of both team's active pokemon
                cout << "1. Attack      2. Pokemon(Not in this version)\n3. Item         4. Run\n";
                cout << "What will you do?\n";
                cin >> choice;
                if (!cin || choice < 1 || choice > 4) { //non int inputs are filtered and fixed through the !cin, cin.clear(), and empty while loop
                    cout << "That is not a correct choice, please try again.";
                    cin.clear();
                    while (cin.get() != '\n');

                }
            } while (!cin || choice < 1 || choice > 4);
            { //Correct choice leads here where it branches off, still can return to loop above
                if (choice == 1) { // attack

                    choice = 0;

                    do {
                        currentPoke->attackMenu();//show attacks when the attack option is chosen
                        cout << "What attack will you choose? Hit 0 to go back.\n";
                        cin >> choice;
                        if (!cin || choice < 0 || choice > 2) { //non int inputs are filtered and fixed through the !cin, cin.clear(), and empty while loop
                            cout << "That is not a correct choice, please try again.";
                            cin.clear();
                            while (cin.get() != '\n');

                        }
                    } while (!cin || choice < 1 || choice > 4);

                    switch (choice) {
                      //Code for attacks is repeated multiple times, for the player, and enemy in cases where they use different attacks, and different turn orders
                      //Put simply, player/enemy attacks first, checks accuracy, does damage, then repeats with whoever didn't attack
                        case 1: //case 1 is attack one 
                            if (currentPoke->baseSpeed > EnemyPoke->baseSpeed) { //speed determines who goes first
                                chance = rand() * 100 + 1; // this is the hit chance/crit chance
                                cout << currentPoke->pokeName << " used " << currentPoke->Move1.Name << "!\n";
                                //if the chance is equal to the move accuracy, it crits, if it's less it hits, if it's greater, it misses
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

                                  //win condition checks after damage if opponent has any pokemon left
                                  
                                        if (theirpoke != (sizeof(enemyArr) / sizeof(enemyArr[0]))-1 && enemyArr[theirpoke + 1] != 0) {
                                          EnemyPoke->SetUp(enemyArr[theirpoke]);
                                          cout << "They send out " << EnemyPoke->pokeName << "!\n";
                                          theirpoke++;
                                        } else {
                                          cout << "They are out of usable Pokemon! You win the battle!\n";
                                        delete currentPoke, EnemyPoke;
                                          return true;
                                        }
                                        //end of win condition
                                }
                                PlayerTurn = false;
                            } else {
                                //the case where the enemy attacks first due to a higher speed stat, followed by you
                                if (rand() * 2 == 1) {
                                    chance = rand() * 100 + 1; // this is the hit chance/crit chance
                                    cout << EnemyPoke->pokeName << " used " << EnemyPoke->Move1.Name << "!\n";
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
                                      //LoseCondition Checks if the player has pokemon left
                                      if (yourpoke != (sizeof (player.playerArray) / sizeof (player.playerArray[0])) && player.playerArray[yourpoke] != 0) {
                                        currentPoke->SetUp(player.playerArray[yourpoke]);
                                        cout << "Go " << currentPoke->pokeName << "!\n";
                                        yourpoke++;
                                      } else {
                                        cout << "You are out of usable Pokemon! You blacked out\n";
                                        delete currentPoke, EnemyPoke;
                                        return false;
                                        }
                                        //end of LoseCondition

                                    }
                                    chance = rand() * 100 + 1; // this is the hit chance/crit chance
                                    cout << currentPoke->pokeName << " used " << currentPoke->Move1.Name << "!\n";
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

                                        //win condition checks if opponent has any pokemon left
                                        if (theirpoke != (sizeof (enemyArr) / sizeof (enemyArr[0])) - 1 && enemyArr[theirpoke] != 0) {
                                          EnemyPoke->SetUp(enemyArr[theirpoke]);
                                          cout << "They send out " << EnemyPoke->pokeName << "!\n";
                                          theirpoke++;
                                        } else {
                                          cout << "They are out of usable Pokemon! You win the battle!\n";
                                          delete currentPoke, EnemyPoke;
                                          return true;
                                        }
                                        //end of win condition

                                    }
                                } else {
                                    chance = rand() * 100 + 1; // this is the hit chance/crit chance
                                    cout << EnemyPoke->pokeName << " used " << EnemyPoke->Move2.Name << "!\n";
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
                                      //LoseCondition Checks if the player has pokemon left, if not, they lose
                                      if (yourpoke != (sizeof (player.playerArray) / sizeof (player.playerArray[0])) - 1 && player.playerArray[yourpoke] != 0) {
                                        currentPoke->SetUp(player.playerArray[yourpoke]);
                                        cout << "Go " << currentPoke->pokeName << "!\n";
                                        yourpoke++;
                                      } else {
                                        cout << "You are out of usable Pokemon! You blacked out\n";
                                        delete currentPoke, EnemyPoke;
                                        return false;
                                        }
                                        //LoseCondition


                                    }
                                    chance = rand() * 100 + 1; // this is the hit chance/crit chance
                                    cout << currentPoke->pokeName << " used " << currentPoke->Move1.Name << "!\n";
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
                                        //win condition checks if opponent has any pokemon left
                                        if (theirpoke != (sizeof (enemyArr) / sizeof (enemyArr[0])) - 1 && enemyArr[theirpoke] != 0) {
                                          EnemyPoke->SetUp(enemyArr[theirpoke]);
                                          cout << "They send out " << EnemyPoke->pokeName << "!\n";
                                          theirpoke++;
                                        } else {
                                          cout << "They are out of usable Pokemon! You win the battle!\n";
                                          delete currentPoke, EnemyPoke;
                                          return true;
                                        }
                                        //end of win condition
                                    }
                                }
                            }
                            break;
                        case 2: // player chooses attack two, nearly the same code as attack 1
                            if (currentPoke->baseSpeed > EnemyPoke->baseSpeed) {
                                chance = rand() * 100 + 1; // this is the hit chance/crit chance
                                cout << currentPoke->pokeName << " used " << currentPoke->Move2.Name << "!\n";
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
                                    //win condition checks if opponent has any pokemon left
                                        if (theirpoke != (sizeof (enemyArr) / sizeof (enemyArr[0])) - 1 && enemyArr[theirpoke] != 0) {
                                          EnemyPoke->SetUp(enemyArr[theirpoke]);
                                          cout << "They send out " << EnemyPoke->pokeName << "!\n";
                                          theirpoke++;
                                        } else {
                                          cout << "They are out of usable Pokemon! You win the battle!\n";
                                          delete currentPoke, EnemyPoke;
                                          return true;
                                        }
                                        //end of win condition

                                }
                                PlayerTurn = false;
                            } else {
                                //once again, enemy attacks first followed by you
                                if (rand() * 2 == 1) {
                                    chance = rand() * 100 + 1; // this is the hit chance/crit chance
                                    cout << EnemyPoke->pokeName << " used " << EnemyPoke->Move1.Name << "!\n";
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
                                        
                                      //LoseCondition Checks if the player has pokemon left
                                      if (yourpoke != (sizeof (player.playerArray) / sizeof (player.playerArray[0])) - 1 && player.playerArray[yourpoke] != 0) {
                                        currentPoke->SetUp(player.playerArray[yourpoke]);
                                        cout << "Go " << currentPoke->pokeName << "!\n";
                                        yourpoke++;
                                      } else {
                                        cout << "You are out of usable Pokemon! You blacked out\n";
                                        delete currentPoke, EnemyPoke;
                                        return false;
                                        }
                                        //LoseCondition


                                    }
                                    chance = rand() * 100 + 1; // this is the hit chance/crit chance
                                    cout << currentPoke->pokeName << " used " << currentPoke->Move2.Name << "!\n";
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
                                        //win condition checks if opponent has any pokemon left
                                        if (theirpoke != (sizeof (enemyArr) / sizeof (enemyArr[0])) - 1 && enemyArr[theirpoke] != 0) {
                                          EnemyPoke->SetUp(enemyArr[theirpoke]);
                                          cout << "They send out " << EnemyPoke->pokeName << "!\n";
                                          theirpoke++;
                                        } else {
                                          cout << "They are out of usable Pokemon! You win the battle!\n";
                                          delete currentPoke, EnemyPoke;
                                          return true;
                                        }
                                        //win condition
                                    }
                                } else {
                                    chance = rand() * 100 + 1; // this is the hit chance/crit chance
                                    cout << EnemyPoke->pokeName << " used " << EnemyPoke->Move2.Name << "!\n";
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
                                        
                                      //LoseCondition Checks if the player has pokemon left
                                      if (yourpoke != (sizeof (player.playerArray) / sizeof (player.playerArray[0])) - 1 && player.playerArray[yourpoke] != 0) {
                                        currentPoke->SetUp(player.playerArray[yourpoke]);
                                        cout << "Go " << currentPoke->pokeName << "!\n";
                                        yourpoke++;
                                      } else {
                                        cout << "You are out of usable Pokemon! You blacked out\n";
                                        delete currentPoke, EnemyPoke;
                                        return false;
                                        }
                                        //LoseCondition
                                    }
                                    chance = rand() * 100 + 1; // this is the hit chance/crit chance
                                    cout << currentPoke->pokeName << " used " << currentPoke->Move2.Name << "!\n";
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

                                        //win condition checks if opponent has any pokemon left
                                        if (theirpoke != (sizeof (enemyArr) / sizeof (enemyArr[0])) - 1 && enemyArr[theirpoke] != 0) {
                                          EnemyPoke->SetUp(enemyArr[theirpoke]);
                                          cout << "They send out " << EnemyPoke->pokeName << "!\n";
                                          theirpoke++;
                                        } else {
                                          cout << "They are out of usable Pokemon! You win the battle!\n";
                                          delete currentPoke, EnemyPoke;
                                          return true;
                                        }
                                        //win condition


                                    }


                                }
                                break;

                                default:
                                cout << "";
                            }
                    }




                    // ATTACK STUFF ENDS


                } else if (choice == 2) { //switching pokemon does not work here because the player has no other pokemon but the ability to do it would be here
                    // Pokemon

                    choice = -1;
                    while (choice < 0 || choice > 6) {
                        cout << "Select your Pokemon to switch to! If you wish to go back, enter 0.\n";
                        //cout << " *displays Poke* ";
                        cout << "this does not work, so inputting any number from 0-6 will return you to the last menu";
                        cin >> choice;
                        if (!cin || choice < 0 || choice > 6) {
                            cout << "That choice was invalid, try again!";
                            cin.clear();
                            while (cin.get() != '\n');
                        } else if (choice == 0) {
                            break;
                        } else if (choice > 0 || choice < 6) {
                            cout << "Good Job\n";
                            //SwitchPoke(currentPoke, Player);
                            // this would be here if the switching worked. PlayerTurn = false;
                        }
                    }
                } else if (choice == 3) {
                    // items
                    choice = -1;
                    while(choice < 0 || choice > 2) {
                    cout << "Which item do you wish to use? Hit 0 if you wish to go back\n";
                    cout << "1. Potion\n2. Pokeball\n";
                    cin >> choice;
                        if (!cin || choice < 0 || choice > 2) {
                            cout << "That choice was invalid, try again!";
                            cin.clear();
                            while (cin.get() != '\n');
                        } else if (choice == 0) {
                            break;
                        } else if (choice == 1) { //potion heals the pokemon for 30hp
                            cout << "You use a potion, your pokemon is healed for 30 hp!\n";
                            currentPoke->HealPoke(30);
                            PlayerTurn = false;
                        }else if(choice == 2) {
                          if (trainerFight==true) {
                            cout << "You can't try to catch a pokemon that belongs to another trainer!\n";
                          }else if(pokeballs <0) {
                            cout << "You do not have any pokeballs!"; 
                          }else{
                            chance = rand() * 100 + 1;
                            cout << "You throw a pokeball!\n";
                            cin.ignore();
                            if(chance > (EnemyPoke->currentHealth % EnemyPoke->healthStat) - 30) {
                              cout << "You caught it!\n";

                              //CHECK FOR SPOT TO ADD IN PLAYER ARRAY THEN ADD THE DEX NUM
                              int i = 0;
                              while(player.playerArray[i] != 0 && i < sizeof(player.playerArray)/sizeof(player.playerArray[0]) - 1) {
                                i++;
                                if(i == 5 && player.playerArray[i] != 0) {
                                  cout << "You cannot have any more Pokemon in your party!\n";
                                  cout << "The PC system is not currently in the game, so you cannot have more than 6 Pokemon\n";
                                }
                              }
                              if(player.playerArray[i] == 0) {
                                //playerArr[i] = EnemyPoke->pokemonNum;
                                player.insertPoke(i, EnemyPoke->pokemonNum);
                                cout << "The newly caught pokemon has been added to your team!\n";
                              }
                              delete currentPoke, EnemyPoke;
                              return true;
                            }else {
                              cout << "Argh! It failed!\n";
                              
                            }
                          }

                        }
                    }
                    
                    PlayerTurn = false;
                } else if (choice == 4) {
                    // running works if the random number generated is greater than 20, essentially an 80% chance
                    if (trainerFight == true) {
                        cout << "You can't run from a trainer battle!\n"; //cannot run from trainer battles
                    } else {
                        cout << "You tried to run...\n";
                        chance = rand() % 100 + 1;
                        if (chance > 20) {
                            //end combat if success
                            cout << "... And you succeeded!\n";
                            delete currentPoke, EnemyPoke;
                            return true;
                        } else {
                            cout << "... And you couldn't get away!";
                            PlayerTurn = false;
                        }
                    }
                }


            }
        }

        //enemy Turn now for when the player attacked first or did something other than attack

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
            
                                      //LoseCondition Checks if the player has pokemon left
                                      if (yourpoke != (sizeof (player.playerArray) / sizeof (player.playerArray[0])) - 1 && player.playerArray[yourpoke] != 0) {
                                        currentPoke->SetUp(player.playerArray[yourpoke]);
                                        cout << "Go " << currentPoke->pokeName << "!\n";
                                        yourpoke++;
                                      } else {
                                        cout << "You are out of usable Pokemon! You blacked out\n";
                                        delete currentPoke, EnemyPoke;
                                        return false;
                                        }
                                        //LoseCondition
        }

        PlayerTurn = true;




    }
    delete currentPoke, EnemyPoke;
    return true;
}





#endif /* COMBATEVENT_H */

