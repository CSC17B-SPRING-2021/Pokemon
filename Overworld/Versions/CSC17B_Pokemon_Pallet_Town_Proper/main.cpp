#include <iostream>
#include <string>
#include <cstdlib>

/*
 * author: Zachary Romero
 * date: 03/23/2021 7:32 PM
 * purpose: pokemon pallet town in between starting house and professor oak's house
 */

using namespace std;

//more than likely a switch case due to not many choices, only big issue here is knowing when the player has a pokemon
//honestly not that big a deal though, should just be a bool for determining when they have a pokemon

int main()
{
    //this begins when exiting the starting house
    string rName = "BLUE";
    string pName = "RED";
    bool end;
    bool grass;
    char choice;
    cout << pName << " steps outside into Pallet Town." << endl;
    cin.ignore();
    cout << "The small town has just a few houses and one way out to adventure, the grass." << endl;
    cin.ignore();
    cout << "What would you like to do?" << endl;
    cin.ignore();
    do{
        cout << "Check " << rName << "'s house? (press 1)" << endl;
        cout << "Talk to the town-folk (press 2)" << endl;
        cout << "Check Professor Oak's Laboratory (press 3)" << endl;
        cout << "Leave the town, go past the grass. (press 4)" << endl;
        grass = true;
        cin >> choice; 
        switch (choice){
            case '1':{
                cout << "When you step inside you see " << rName << "'s sister at the dining table and a map on the wall." << endl;
                cin.ignore();
                do{
                    end = true;
                    cout << "Would you like to: "<< endl;
                    cout << "Talk to " << rName << "'s sister? (press 1)" << endl;
                    cout << "Examine the map. (press 2)" << endl;
                    cout << "Leave the house. (press 3)" << endl;
                    cin >> choice;
                    switch(choice){
                        case '1':{
                            cout << rName << "'s SIS: Hi " << pName << "! " << rName << " is out at Grandpa's lab." << endl;
                            break;
                        }
                        case '2':{
                            cout << "It's a big map! This is useful!" << endl;                      //this would be where the player would recieve the map if they have their pokedex from prof. oak
                            break;
                        }
                        case '3':{
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
                cout << "You enter Professor Oak's Laboratory." << endl;
                cin.ignore();
                cout << "What would you like to do?" << endl;
                cin.ignore();
                cout << "Talk with the lab aides (press 1)" << endl;
                cout << "Talk to " << rName << " (press 2)" << endl;
                cout << "Inspect the book (press 3)" << endl;
                cin.ignore();
                cout << "Inspect the computer (press 4)" << endl;
                cout << "Inspect poster (press 5)" << endl;
                cout << "Inspect POKe BALLS (press 6)" << endl;
                cout << "Leave Professor Oak's Laboratory (press 7)" << endl;
                cin >> choice;
                do{
                    end = false;
                    switch(choice){
                        case '1':{            //talk to aides
                            cout << "I study POKEMON as PROF.OAK'S aide." << endl;
                            cin.ignore();
                            cout << "PROF.OAK is the authority on POKEMON! Many POKEMON trainers hold him in high regard!" << endl;
                            break;
                        }
                        case '2':{            //talk to rival
                            cout << rName << ": Yo " << pName << "! Gramps isn't around!" << endl;
                            break;
                        }
                        case '3':{            //book
                            cout << "It's encyclopedia-like, but the pages are blank!" << endl;
                            break;
                        }
                        case '4':{            //computer
                            cout << "There's an e-mail message here! ... Calling all POKEMON trainers!" << endl;
                            cin.ignore();
                            cout << "The elite trainer BROCK of POKEMON LEAGUE is ready to take on all trainers!" << endl;
                            cin.ignore();
                            cout << "Bring your best POKEMON and see how you rate as a trainer!" << endl;
                            break;
                        }
                        case '5':{            //posters
                            cout << "Push 'PLACEHOLDER' to open the MENU!" << endl;
                            cin.ignore();
                            cout << "The SAVE option is on the MENU screen!" << endl;
                            break;
                        }
                        case '6':{            //poke balls
                            cout << "Those are POKE BALLS. They contain POKEMON!" << endl;
                            break;
                        }
                        case '7':{
                            cout << "You step outside." << endl;
                            break;
                        }
                        default:{
                            cout << "Invalid input, try again." << endl;
                        }
                    }while(end == true);
                }while(end == true);
                break;
            }
            case '4':{
                //this is when professor oak's scenario would pop up
                grass = false;
                break;
            }
            default:{
                cout << "Invalid Input, try again." << endl;
                break;
            }
        }
    }while(grass);
    
    return 0;
}