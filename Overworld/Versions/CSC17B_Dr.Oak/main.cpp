#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;



int main()
{
    char pokemon;
    char rival;
    int roll;
    char choice;
    string pName;
    srand(time(0));
    bool picked = false;
    cout << "OAK: Hey wait! Don't go out!" << endl;                         //RED is dragged back to Professor  Oak's house to select their POKeMON
    cin.ignore();
    cout << "OAK: It's unsafe! Wild POKeMON live in tall grass!" << endl;
    cin.ignore();
    cout << "You need your own POKeMON for your protection." << endl;
    cin.ignore();
    cout << "I know! Here, come with me!" << endl;
    cin.ignore();
    cout << "Professor Oak drags you back to his laboratory." << endl;
    cin.ignore();
    cout << "As you enter the laboratory you see lab aides conversing next to tall bookcases." << endl;
    cin.ignore();
    cout << "At the end of the room you see your rival ***BLUE***";                   //this is where we'd put the name of the rival
    cin.ignore();
    cout << "and three POKeballs." << endl;
    cin.ignore();
    cout << "BLUE: Gramps! I'm fed up with waiting!" << endl;               //RED is at Professor Oak's house, this is the initial bit of dialogue before RED can select their POKeMON
    cin.ignore();
    cout << "OAK: BLUE? Let me think..." << endl;
    cin.ignore();
    cout << "Oh, that's right, I told you to come! Just wait!" << endl;
    cin.ignore();
    cout << "Here, RED! There are 3 POKeMON here!" << endl;
    cin.ignore();
    cout << "Haha! They are inside the POke BALLs. When I was young I was a serious POKeMON trainer!" << endl;
    cin.ignore();
    cout << "In my old age, I have only 3 three left, but you can have one! Choose!" << endl;
    cin.ignore();
    cout << "BLUE: Hey! Gramps! What about me?" << endl;
    cin.ignore();
    cout << "OAK: Be patient! BLUE, you can have one too!" << endl;         //now RED can choose their POKeMON: charmander, bulbasaur, or squirtle
    cin.ignore();
    cout << "Okay RED, which one of Professor Oak's three remaining POKeMON would you like to choose?" << endl;
    cin.ignore();
    cout << "For CHARMANDER press 'c' or 'C'" << endl;                      //this is where we describe and have the POKeMON's stats and description
    cout << "For SQUIRTLE press 's' or 'S'" << endl;
    cout << "For BULBASAUR press 'b or 'B'" << endl;
    cin >> pokemon;
    do{
        if(pokemon == 'c' || pokemon == 'C'){                                   //section for choosing one of the three pokemon
            cout << "You have chosen CHARMANDER!" << endl;
            cin.ignore();
            cout << "What would you like to name your POKeMON?" << endl;        //the rival is going to be choosing the opposite type pokemon
            cin >> pName;
            cin.ignore();
            cout << "BLUE: I'll take this one, then!" << endl;
            cin.ignore();
            cout << "BLUE received a SQUIRTLE!" << endl;
            rival = 's';
            picked = true;
        }
        else if(pokemon == 's' || pokemon == 'S'){
            cout << "You have chosen SQUIRTLE!" << endl;
            cin.ignore();
            cout << "What would you like to name your POKeMON?" << endl;
            cin >> pName;
            cin.ignore();
            cout << "BLUE: I'll take this one, then!" << endl;
            cin.ignore();
            cout << "BLUE received a BULBASAUR!" << endl;
            rival = 'b';
            picked = true;
        }
        else if(pokemon == 'b' || pokemon == 'B'){
            cout << "You have chosen BULBASAUR!" << endl;
            cin.ignore();
            cout << "What would you like to name your POKeMON?" << endl;
            cin >> pName;
            cin.ignore();
            cout << "BLUE: I'll take this one, then!" << endl;
            cin.ignore();
            cout << "BLUE received a CHARMANDER!" << endl;
            rival = 'c';
            picked = true;
        }
        else{
            cout << "OAK: You need to pick a POKeMON!" << endl;
        }
    }while(picked == false);
    cout << "BLUE: Wait RED! Let's check out our POKeMON! Come on, I'll take you on!" << endl;
    cin.ignore();
    //this is where the first battle will take place, for now i'll just have a dice roll i favor of the rival
    roll = rand() % 100;
    if(roll < 75){                                              //the player needs to roll a 75 or higher to win the roll
        cout << "You lost the fight" << endl;
        cin.ignore();
        cout << "Yeah! Am I great or what?" << endl;
        cin.ignore();
    }
    else{
        cout << "You won the fight" << endl;
        cin.ignore();
        cout << "WHAT? Unbelievable! I picked the wrong POKeMON!" << endl;
    }
    //the player can choose whatever they want to do past this point
    do{
        cout << "1.) Talk to Prof. Oak's Aide" << endl;
        cout << "2.) Talk to Blue" << endl;
        cout << "3.) Inspect a the book in the right corner of the room" << endl;
        cout << "4.) Inspect the computer next to the book" << endl;
        cout << "5.) Inspect the poster" << endl;
        cout << "6.) Inspect the POkeballs" << endl;
        cout << "7.) Leave the house" << endl;
        cin >> choice;
        switch(choice){
            case 1:{
                cout << "AIDE: I study POKeMON as Prof. Oak's aide." << endl;
                cin.ignore();
                cout << "AIDE: Prof. Oak is the authority on POKeMON! Many POKeMON trainers hold him in high regard!" << endl;
                break;
            }
            case 2:{
                cout << "BLUE: Yo RED! Gramps isn't around!" << endl;
                break;
            }
            case 3:{
                cout << "It's encyclopedia-like, but the pages are blank!" << endl;
                break;
            }
            case 4:{
                cout << "There's an e-mail message here!" << endl;
                cin.ignore();
                cout << "..." << endl;
                cout << "Calling all POKeMON trainers! Brock, one of the elite trainers of the POKEMON LEAGUE are ready to take on all comers!" << endl;
                cin.ignore();
                cout << "Bring your best POKeMON to the VIRIDIAN CITY POkeGYM to see how you rate as a trainer!" << endl;
                cin.ignore();
                cout << "POKeMON LEAGUE HQ VIRIDIAN CITY" << endl;
                cin.ignore();
                cout << "PS: Prof. Oak, please visit us!" << endl;
                break;
            }
            case 5:{
                cout << "Push START to open the MENU!" << endl;
                cin.ignore();
                cout << "The SAVE option is on the MENU screen" << endl;
                cin.ignore();
                break;
            }
            case 6:{
                cout << "Those are POke balls." << endl;
                cin.ignore();
                cout << "They contain POKeMON!" << endl;
                break;
            }
            default:{
                cout << "You stand in place" << endl;
                cin.ignore();
                cout << "..." << endl;
                cin.ignore();
                cout << "doing nothing" << endl;
                break;
            }
        }
    }while(choice == 7);
    cout << "You exit Professor Oak's Laboratory." << endl;
    
    return 0;
}