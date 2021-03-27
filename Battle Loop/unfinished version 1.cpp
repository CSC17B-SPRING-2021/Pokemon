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
    //srand(time(NULL));
    int test = rand() % 100 + 1;
    //Declare Player
    //Declare EnemyPoke
public:

    CombatEvent() {
        // Player object assigned to player, enemyPoke assigned to random pokemon
        /**/
        bool combat = true;
        int choice;
        bool PlayerTurn = true;
        cout << "hi";
        while (combat) { // Entire Combat loop
            while (PlayerTurn) { // Player's turn: important for moving back in the menus
                choice = -1;
                do {
                    combatMenu();
                    cin >> choice;
                    if (!cin || choice < 1 || choice > 4) { //non int inputs are filtered and fixed through the !cin, cin.clear(), and empty while loop
                        cout << "That is not a correct choice, please try again.";
                        cin.clear();
                        while (cin.get() != '\n');

                    }
                } while (!cin || choice < 1 || choice > 4);
                switch (choice) { //Correct choice leads here where it branches off, still can return to loop above
                    case 1: // attack
                        choice = 0;
                        
                        /* switch (attackMenu()) // PLACEHOLDER FOR REAL ATTACK MENU which is attached to Pokemon Class
                        {
                            case 0: 
                            default:
                        }
                        */
                        break;
                    case 2: // Pokemon
                        //stuff
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
                        break;
                    case 3: // items

                        choice = 0;
                        //player.itemMenu();
                        break;
                    case 4: // run 


                        break;
                    default:
                        cout << "This shouldn't happen!";
                }
            }

        }
    }
 int attackMenu() {
     cout << "placehold";
     return 0;
}
    
    void combatMenu() {
        cout << "EnemyPoke: " << MobHP << "/" << MaxMobHP << endl;
        cout << "YourPoke: " << YourHP << "/" << MaxYourHP << endl;
        cout << "1. Attack      2. Pokemon\n3. Item         4. Run\n";
    }


    //class end
};

/*
 * 
 */
int main(int argc, char** argv) {

    //  srand (time(NULL));
    //    int test = rand() % 100 + 1;

    CombatEvent test();



    return 0;
}

