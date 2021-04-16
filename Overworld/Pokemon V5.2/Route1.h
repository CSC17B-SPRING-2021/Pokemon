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

void Route1::RandomEncounter()
{
    int randEncounter;
    srand(time(0));
    randEncounter = rand() % 100 + 1;
    if(randEncounter >= 80){                                        //each tile will have a 20% chance to spawn a random encounter
        cout << "This is where the random encounter will take place." << endl;
    }
    else{
         cout << "No encounter!" << endl;
    }
    if(tile == 3){                                                                                  
        cout << "Mandatory Trainer Battle" << endl;                             //here you should get 
    }
}

void Route1::Route1Intro(){
  cout << "You have entered the grass area." << endl;
    cin.ignore();
    cout << "This is a dangerous place that Professor Oak warned us about." << endl;
    cin.ignore();
    cout <<"Here we should be able to fight and capture POKEMON!" << endl;
    cin.ignore();
    cout << "The grass is a set of 5 tiles that you can move back and forth through." << endl;
    cin.ignore();
    cout << "Each time you move to a tile, there will be a random chance for you to encounter a POKEMON battle." << endl;
    cin.ignore();
    cout << "One of the tiles will have a mandatory POKEMON trainer battle." << endl;
    cin.ignore();
}

int Route1::Route1Defualt(){
  char choice;
  do{
        cout << "You have entered the grass area." << endl;
        cout << "Do you want to move to the next tile or go backward? (press 'f' or 'b')" << endl;
        cin >> choice;
        switch(choice){
            case 'f':{
                tile++;
                cout << "You have moved forward a tile." << endl;
                cin.ignore();
                cout << "You are on tile " << tile << endl;
                RandomEncounter();
                break;
            }
            case 'b':{
                tile--;
                cout << "You have moved back a tile." << endl;
                cin.ignore();
                cout << "You are on tile " << tile << endl;
                RandomEncounter();
                break;
            }
            default:{
                cout << "You stand still...." << endl;
                cin.ignore();
                cout << "...." << endl;
                cin.ignore();
                cout << "Doing nothing....." << endl;
                break;
            }
        }
    }while(tile <= 5 && tile >= 0);
    /*if(tile > 5){                                                                   //if the tile > 5 then you go into 
        cout <<"\n\n\n\nViridianCity"<< endl;
    }
    else if(tile < 0){
        //PalletTown();
        cout << "\n\n\n\nPalletTown" <<endl;
    }*/
    return tile;
}

void Route1::DefaultPalletTown(){
    
    cout << "Steps into Pallet Town." << endl;
    cin.ignore();
    cout << "The small town has just a few houses and one way out to adventure, the grass." << endl;
    cin.ignore();
    cout << "What would you like to do?" << endl;
    cin.ignore();
        cout << "Check Rival's house? (press 1)" << endl;
        cout << "Talk to the town-folk (press 2)" << endl;
        cout << "Check Professor Oak's Laboratory (press 3)" << endl;
        cout << "Leave the town, go past the grass. (press 4)" << endl;
        cout << "Go back inside your house. (press 5)" << endl;
        cin >> choice; 
        switch (choice){
            case '1':{
                cout << "When you step inside you see Rival's sister at the dining table and a map on the wall." << endl;
                cin.ignore();
                do{
                    end = true;
                    cout << "Would you like to: "<< endl;
                    cout << "Talk to Rival sister? (press 1)" << endl;
                    cout << "Leave the house. (press 2)" << endl;
                    cin >> choice;
                    switch(choice){   //blue's house
                        case '1':{
                            cout << "Hi! my brother is out at Grandpa's lab." << endl;
                            break;
                        }
                        case '2':{
                            cout << "You are back outside!" << endl;
                            end = false;
                            break;
                        }
                        default:{
                            cout << "Wrong input, please try again." << endl;
                            break;
                        }
                    }
                }while(end == true);
                break;
            }
            case '2':{
                cout << "I'm raising POKeMON too! When they get strong, they can protect me!" << endl;
                cin.ignore();
                cout << "Technology is incredible! You can now store and recall items and POKeMON as data via PC!" << endl;
                break;
            }
            case '3':{            //inside professor oak's lab before going to grass
                cout << "The Lab is great, but I should get going." <<endl;
                break;
            }
            case '4':{
                cout << "return to grass"<< endl;//return to the grass
                Route1Defualt();
                break;
            };
            default:{
                cout << "Invalid Input, try again." << endl;
                break;
            }
        }
};