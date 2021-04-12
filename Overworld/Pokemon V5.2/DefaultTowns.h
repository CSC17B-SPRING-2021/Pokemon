#include <cstdlib>
#include <iomanip>
#include <iostream>
//#include "Route1.h"

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

void DefaultTowns::ViridianCity()
{
    cout << "You step into Viridian City, the Eternally Green Paradise." << endl;
    cin.ignore();
    cout << "There are plenty of people to talk to and buildings to explore." << endl;
    cin.ignore();
    cout << "What would you like to do?" << endl;
    cin.ignore();
    do{
        end = false;
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
                PokemonCenter();
                break;
            }
            case '4':{                                                                  //enter the pokemart
                end = true;
                PokemonMart();
                break;
            }
            case '5':{                                                                  //enter the gym to challenge brock
                end = true;
                PokemonGym();
                break;
            }
            case '6':{                                                                  //leave to the grass
                end = true;
                cout<< "You must fight the Gym Leader First"<<endl;
                break;
            }
        }
    }while(end == false);
};

void DefaultTowns::PokemonCenter(){
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
                ViridianCity();
                end = true;
            }
            default:
                cout << "Invalid input, please try again." << endl;
        }
    }while(end == false);

}

void DefaultTowns::PokemonMart(){
  cout << "You enter the POKEMON MART." << endl;
    cin.ignore();
    cout << "What would you like to do?" << endl;
    cin.ignore();
    do{
        end = false;
        cout << "Talk to customer at the door (press 1)" << endl;
        cout << "Talk to customer in the back (press 2)" << endl;
        cout << "Talk to POKEMON TRAINER (press 3)" << endl;
        cout << " POKEMON MART (press 4)" << endl;
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
                ViridianCity();
                end = true;
                break;
            }
        }
    }while(end == false);
}

void DefaultTowns::PokemonGym(){
  cout << "You enter the Viridian City Gym." << endl;
    cin.ignore();
    cout << "What would you like to do?" << endl;
    cin.ignore();
    do{
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
                BrockGym();
                break;
            }
        }
    }while(end == false);
}

void DefaultTowns::BrockGym(){
  srand(time(0));
    int roll = rand() % 100;
    if(roll < 75){
        cout << "You're pretty hot, but not as hot as BROCK! \n\n\nCome back when you are stronger!" << endl;
        ViridianCity();
    }
    else{
        cout << "I took you for granted." << endl;
        cin.ignore();
        cout << "As proof of your victory, here's the BOULDERBADGE!" << endl;
        cin.ignore();
        cout << "That's an official POKEMON LEAGUE BADGE!" << endl;
        cin.ignore();
        cout << "That's all for now! Thanks for playing!" << endl;
    }
}