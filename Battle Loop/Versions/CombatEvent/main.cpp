/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Thomas Gatewood
 *
 * Created on March 20, 2021, 7:48 PM
 */
#include <math.h>
#include <cstdlib>
#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

class CombatEvent {
private:
    //placeholder variables
    int MobHP = 65;
    int MaxMobHP = 65;
    int YourHP = 65;
    int MaxYourHP = 65;
    // actual important variables
    bool win;
    bool captured;

    int chance = rand() % 100 + 1;
    //Declare Player
    //Declare EnemyPoke
public:

    void Combat();

    int attackMenu();
    void combatMenu();


    //class end
};

int CombatEvent::attackMenu() {
    cout << "placehold";
    return 0;
}

void CombatEvent::combatMenu() {
    cout << "EnemyPoke: " << MobHP << "/" << MaxMobHP << endl;
    cout << "YourPoke: " << YourHP << "/" << MaxYourHP << endl;
    cout << "1. Attack      2. Pokemon\n3. Item         4. Run\n";
}

void CombatEvent::Combat() {
    {
        // Player object assigned to player, enemyPoke assigned to random pokemon
        /**/
        srand(time(NULL));
        bool combat = true;
        int choice;
        bool PlayerTurn = true;
        while (combat) { // Entire Combat loop
            while (PlayerTurn) { // Player's turn: important for moving back in the menus
                choice = -1;
                do {
                    combatMenu();
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
                        chance = rand() * 100 + 1; // this is the hit chance/crit chance
                        if (chance == 90) {
                            cout << "CRITICAL HIT!\n";
                            MobHP -= 24;

                        } else if (chance < 90) {
                            cout << "Your attack hit!\n";
                            MobHP -= 12;

                        } else {
                            cout << "Your attack missed!";
                        }
                        if (MobHP <= 0) {
                            cout << "The opposing Pokemon was knocked out!\n";
                            combat = false;
                        }
                        PlayerTurn = false;
                        /* switch (attackMenu()) // PLACEHOLDER FOR REAL ATTACK MENU which is attached to Pokemon Class
                        {
                            case 0: 
                            default:
                        }
                         */
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
                    } else if (choice == 4)
                        // run 
                        chance = rand() % 100 + 1;
                    if (chance > 20) {
                        //end combat
                        break;
                    } else {
                        PlayerTurn = false;
                    }




                }
            }
            //enemy Turn now
            cout << "ENEMY TURN HAPPENS\n";
            chance = rand() * 100 + 1; // this is the hit chance/crit chance
                        if (chance == 90) {
                            cout << "CRITICAL HIT!\n";
                            YourHP -= 24;

                        } else if (chance < 90) {
                            cout << "Their attack hit!\n";
                            YourHP -= 12;

                        } else {
                            cout << "Their attack missed!\n";
                        }
                        if (YourHP <= 0) {
                            cout << "Your Pokemon was knocked out!\n";
                            combat = false;
                        }
            PlayerTurn = true;
        }
    }
}

/*
 * 
 */
int main(int argc, char** argv) {

    //  srand (time(NULL));
    //    int test = rand() % 100 + 1;

    CombatEvent test;
    cout << "hi";
    test.Combat();




    return 0;
}

