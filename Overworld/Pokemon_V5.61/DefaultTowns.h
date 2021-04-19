//Programmer:		Joshua Buckles, Zachary Romero
//Assignment:		Pokemon Group Project

//Description:		The purpose of this program is to create a Default town class


//PreProcessor Directive
//This line of code causes the contents of another file to be
//inserted into the program

#ifndef DEFAULTTOWNS_H
#define DEFAULTTOWNS_H

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include "CombatEvent.h"

using namespace std;

class DefaultTowns {
  public:
      void ViridianCity(playerclass);
      //void ViridianCity(playerclass);                                                        //Runs Viridian City
    void PokemonCenter(playerclass);                                                       //Runs Pokemon Center
    void PokemonMart(playerclass);                                                         //Runs Pokemon Mart
    void PokemonGym(playerclass);                                                          //Runs Pokemon Gym
    void BrockGym(playerclass);                                                            //Runs Brocks battle system
    void EndGame();                                                             //Ends Game
    bool end;                                                                   //Holds end variable to end do while menu loops
    char choice;                                                                //holds choice variable for menu case switches
    int Grass;                                                                  //hold Grass variable for  do while grass loop and return function

};

/*void DefaultTowns::ViridianCity(playerclass player)                                               //Default ViridianCity Function 
{
    cout << "You step into Viridian City, the Eternally Green Paradise." << endl;
    cin.ignore();
    cout << "There are plenty of people to talk to and buildings to explore." << endl;
    cin.ignore();
    cout << "What would you like to do?" << endl;
    cin.ignore();
    do{
        end = false;                                                            //set up bool to run Do while loop for Viridian City Menu
        cout << "Talk to random Pokemon trainer (press 1)" << endl;
        cout << "Talk to old man in the road (press 2)" << endl;
        cout << "Enter the POKeMON Center (press 3)" << endl;
        cout << "Enter the POKeMON Mart (press 4)" << endl;
        cout << "Enter the Gym (press 5)" << endl;
        cout << "Leave Viridian City (press 6)" << endl;
        cin >> choice;
        switch(choice){
            case '1':{                                                                  //talk to pokemon trainer
                cout << "Trainer: Those POKE BALLS at your waist! You have POKEMON!" << endl;
                cin.ignore();
                cout << "It's great that you can carry and use the POKEMON anytime, anywhere!" << endl;
                cin.ignore();
                cout << "You want to know about the 2 kinds" << endl;
                cin.ignore();
                cout << "of caterpillar POKEMON?" << endl;
                cout << "Press y/n" << endl;
                cin >> choice;
                if(choice == 'y' || choice == 'Y'){
                    cout << "CATERPIE has no poison, but WEEDLE does." << endl;
                    cin.ignore();
                    cout << "Watch out for its POISON STING!" << endl;
                }
                else{
                    cout << "Oh, OK then!" << endl;
                }
                break;
            }
            case '2':{                                                                  //talk to old man
                cout << "You find an old man lying in the middle of the path in front of you with his" << endl;
                cin.ignore();
                cout << "granddaughter standing next to him." << endl;
                cin.ignore();
                cout << "Child: Oh Grandpa! Don't be so mean!" << endl;
                cin.ignore();
                cout << "Sorry, he hasn't had his coffee yet." << endl;
                cin.ignore();
                cout << "Old Man: You can't go through here!" << endl;
                cin.ignore();
                cout << "This is private property!" << endl;
                break;
            }
            case '3':{                                                                  //enter the pokecenter
                end = true;
                PokemonCenter(player);
                break;
            }
            case '4':{                                                                  //enter the pokemart
                end = true;
                PokemonMart(player);
                break;
            }
            case '5':{                                                                  //enter the gym to challenge brock
                end = true;
                PokemonGym(player);
                break;
            }
            case '6':{                                                                  //leave to the grass
                end = true;
                cout<< "You must fight the Gym Leader First"<<endl;
                ViridianCity(player);
                break;
            }
        }
    }while(end == false);
};

//Programmer:		Joshua Buckles, Zachary Romero
//Assignment:		Pokemon Group Project

//Description:		The purpose of this program is to hold DefaultTowns member functions


//PreProcessor Directive
//This line of code causes the contents of another file to be
//inserted into the program


void DefaultTowns::PokemonCenter(playerclass player) {                                                 //Pokemon Center function
  cout << "You enter the POKEMON Center." << endl;
    cin.ignore();
    cout << "What would you like to do?" << endl;
    cin.ignore();
    do{
        end = false;
        cout << "Talk to customer (press 1)" << endl;
        cout << "Talk to receptionist (press 2)" << endl;
        cout << "Leave POKEMON CENTER (press 3)" << endl;
        cin >> choice;
        switch(choice){
            case '1':{                                                              //talk to customer
                cout << "There's a POKEMON CENTER in every town ahead." << endl;
                cin.ignore();
                cout << "They don't charge any money either!" << endl;
                cin.ignore();
                cout << "POKEMON CENTERS heal your tired, hurt or fainted POKEMON!" << endl;
                break;
            }
            case '2':{                                                              //talk to receptionist
                cout << "Would you like to heal your POKEMON? (press y/n)" << endl;
                cin >> choice;
                if(choice == 'y' || choice == 'Y'){
                    //this is where some heal pokemon function is called
                    cout << "All of your POKEMON have been healed!" << endl;
                }
                else{
                    cout << "Ok then, we'll be here if you need to later!" << endl;
                }
                break;
            }
            case '3':{                                                          //leave outside to viridian city
                ViridianCity(player);
                end = true;
            }
            default:
                cout << "Invalid input, please try again." << endl;
        }
    }while(end == false);

}

void DefaultTowns::PokemonMart(playerclass player){                                               //Pokemart function
  cout << "You enter the POKEMON MART." << endl;
    cin.ignore();
    cout << "What would you like to do?" << endl;
    cin.ignore();
    do{
        end = false;                                                            //bool variable set as a parameter for Do while loop to run menu
        cout << "Talk to customer at the door (press 1)" << endl;
        cout << "Talk to customer in the back (press 2)" << endl;
        cout << "Talk to POKEMON TRAINER (press 3)" << endl;
        cout << "Leave POKEMON MART (press 4)" << endl;
        cin >> choice;
        switch(choice){
            case '1':{
                cout << "This shop sells many ANTIDOTES." << endl;
                break;
            }
            case '2':{
                cout << "No! POTIONs are all sold out!" << endl;
                break;
            }
            case '3':{
                cout << "Whet! I'm trying to memorize all my notes." << endl;
                cin.ignore();
                cout << "Notebook: First Page... POKEBALLS are used to catch POKEMON." << endl;
                cin.ignore();
                cout << "Up to 10 POKEMON can be carried." << endl;
                cin.ignore();
                cout << "People who raise and make POKEMON fight are called POKEMON trainers." << endl;
                cin.ignore();
                cout << "Second Page...A healthy POKEMON may be hard to catch." << endl;
                cin.ignore();
                cout << "Weaken it first! Poison, burns and other damage are effective!" << endl;
                cin.ignore();
                cout << "Third Page...POKEMON trainers seeks others to engage in POKEMON fights." << endl;
                cin.ignore();
                cout << "Fourth Page...The goal for POKEMON trainers is to beat the top " << endl;
                cin.ignore();
                cout << "8 POKEMON GYM LEADERS." << endl;
                cin.ignore();
                cout << "All I want to do is defeat Viridian City's POKEMON GYM LEADER Brock." << endl;
                break;
            }
            case '4':{              
                ViridianCity(player);                                                 //Ends do while loop by switching bool variable, runs Viridian City Function            
                end = true;                                                     
                break;
            }
        }
    }while(end == false);                                                       //Check bool variable to run loop, iv bool is true, loop breaks and player enters another function
}

void DefaultTowns::PokemonGym(playerclass player){                                                //Pokemon Gym Function
  cout << "You enter the Viridian City Gym." << endl;   
    cin.ignore();
    cout << "What would you like to do?" << endl;
    cin.ignore();
    do{                                                                         //set up Do while loop to run menu
        cout << "Read the signpost (press 1)" << endl;
        cout << "Read the plaque (press 2)" << endl;
        cout << "Talk to the gym leader (press 3)" << endl;
        cin >> choice;
        switch(choice){
            case '1':{
                cout << "VIRIDIAN CITY POKEMON GYM" << endl;
                cin.ignore();
                cout << "LEADER: BROCK" << endl;
                cin.ignore();
                cout << "The Rock Solid POKEMON Trainer!" << endl;
                break;
            }
            case '2':{
                cout << "WINNING TRAINERS: " << endl;
                cin.ignore();
                cout << "BLUE" << endl;
                break;
            }
            case '3':{
                cout << "I'm BROCK! I'm PEWTER's GYM LEADER!" << endl;
                cin.ignore();
                cout << "I believe in rock hard defense and determination!" << endl;
                cin.ignore();
                cout << "That's why my POKEMON are all the rock-type!" << endl;
                cin.ignore();
                cout << "Do you still want to challenge me?" << endl;
                cin.ignore();
                cout << "Fine then! Show me your best!" << endl;
                BrockGym(player);
                break;
            }
        }
    }while(end == false);                                                       //Check loop breaks and player enters another function
}

void DefaultTowns::BrockGym(playerclass player){                                                  //Gym leader battle simulation 
  srand(time(0));                                                               //function to seed rand with system time
    int Enemy[2] = {8,9};
    CombatEvent * Fight = new CombatEvent;
    bool isDone = Fight->Combat(Enemy, true, player);
    if(isDone == true){
      EndGame();
    }
    else{
        cout << "You're pretty hot, but not as hot as BROCK! \n\n\nCome back when you are stronger!" << endl;
        ViridianCity(player);
    }
    //we need a way to know that they player either won or lost the fight here
    //otherwise we have no way of ending the game 
    /*if(roll < 25){
        cout << "You're pretty hot, but not as hot as BROCK! \n\n\nCome back when you are stronger!" << endl;
        ViridianCity();
    }
    else{                                                                       //Wins battle against Gym leader and ends game.
        cout << "I took you for granted." << endl;
        cin.ignore();
        cout << "As proof of your victory, here's the BOULDERBADGE!" << endl;
        cin.ignore();
        cout << "That's an official POKEMON LEAGUE BADGE!" << endl;
        cin.ignore();
        EndGame();                                                              //Ends the game
    }
}

void DefaultTowns::EndGame(){                                                   //Ends the game
     cout << "That's all for now! Thanks for playing!" << endl;
        cin.ignore(); 
}*/


#endif /*DEFAULTTOWNS_H*/
