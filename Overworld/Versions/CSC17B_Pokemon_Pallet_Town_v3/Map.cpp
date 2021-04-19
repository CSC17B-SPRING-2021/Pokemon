#include "map.h"

void Map::GetPlayer()
{
    cout << "Oak: First, what is your name?" << endl;
    cout << "------------------------------------" << endl;
    cin >> pName;
}

void Map::GetRival()
{
    cout << "Oak: This is my grandson. He's been your rival since you " << endl;
    cin.ignore();
    cout << "were a baby." << endl;
    cin.ignore();
    cout << "Oak: ....Erm, what is his name again?" << endl;
    cin >> rName;
}

Map::Map()
{
    GetPlayer();
    GetRival();
}

void Map::PlayerRoom()
{
    //display the menu
    bool end;
    cout << "Your Pokemon Journey begins!" << endl;
    cin.ignore();
    cout << "Please choose your first step!" << endl;
    cin.ignore();
    cout << "1. Use computer" << endl;
    cout << "2. Player N64" << endl;
    cout << "3. Go to bed" << endl;
    cout << "4. Go downstairs" << endl;
    do{
        end = true;
        cout << "Enter your choice: " << endl;
        cin >> RoomNav;
        //validate the menu selection
        switch(RoomNav)
        {
            case 1:
                cout << endl;
                cout << "***Computer turns on***" << endl << endl;
                cout << "Computer: You have 0 emails" << endl << endl;
                cout << "***Computer turns off***" << endl << endl;
                break;
            case 2:
                cout << endl;
                cout << "Golden eye 007 flashes across the screen " << endl;
                cin.ignore();
                cout << pName << " is playing the Nintendo 64! ...Okay! It's time to go!" << endl;
                break;
            case 3:
                cout << endl;
                cout << "I just woke up I can't go back to bed!" << endl;
                break;
            case 4:
                cout << endl;
                cout << "You go downstairs" << endl;
                end = false;
                PlayerHouse();
                break;
            default:
                cout << "You stand around...." << endl;
                cin.ignore();
                cout << "....." << endl;
                cin.ignore();
                cout << "Doing nothing...";
                break;
        }
    }while(end == true);
}

void Map::PlayerHouse()
{
    bool end;
    cout << "Your mom is waiting downstairs" << endl << endl;
    cin.ignore();
    cout << "1. Speak to mom" << endl;
    cout << "2. Watch TV" << endl;
    cout << "3. Leave the house" << endl;
    do{
        end = true;
        cout << "Enter your choice: " << endl;
        cin >> RoomNav;
        //validate the menu selection
        switch(RoomNav){
            case 1:                             //speak to mom
                cout << endl << endl;
                cout << "Mother: Right. All boys leave home some day." << endl;
                cin.ignore();
                cout << "Mother: It said so on TV" << endl;
                break;
            case 2:                             //watch tv
                cout << endl << endl;
                cout << "Television: There's a movie on TV" << endl;
                cin.ignore();
                cout << "Four boys are walking on railroad tracks." << endl << endl;
                cin.ignore();
                cout << "I better go too." << endl;
                break;
            case 3:                             //leave the house
                cout << endl << endl;
                cout << "The door opens to the bright world of Pokemon." << endl;
                end = false;
                PalletTown();
                break;
            default:
                cout << "You sand there..." << endl;
                cin.ignore();
                cout << "...." << endl;
                cin.ignore();
                cout << "doing nothing...." << endl;
                break;
        }
    }while(end == true);
}

void Map::PalletTown()
{
    bool grass, end;
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
        cout << "Go back inside your house. (press 5)" << endl;
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
                    switch(choice){   //blue's house
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
                            PalletTown();
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
                if(hasPokemon == false)
                    ProfessorOak();
                else
                    cout << "Leave town." << endl;
                break;
            }//return grass;
            default:{
                cout << "Invalid Input, try again." << endl;
                break;
            }
        }
    }while(grass == true);
}

void Map::ProfessorOak()
{
    char pokemon;
    char rival;
    int roll;
    char choice;
    string pName;
    srand(time(0));                                                         //this is a placeholder randomized number for the fights
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
        hasPokemon = true;
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
        cout << "\n\n1.) Talk to Prof. Oak's Aide" << endl;
        cout << "2.) Talk to Blue" << endl;
        cout << "3.) Inspect a the book in the right corner of the room" << endl;
        cout << "4.) Inspect the computer next to the book" << endl;
        cout << "5.) Inspect the poster" << endl;
        cout << "6.) Inspect the POkeballs" << endl;
        cout << "7.) Leave the house" << endl;
        cin >> choice;
        switch(choice){
            case '1':{
                cout << "AIDE: I study POKeMON as Prof. Oak's aide." << endl;
                cin.ignore();
                cout << "AIDE: Prof. Oak is the authority on POKeMON! Many POKeMON trainers hold him in high regard!" << endl;
                break;
            }
            case '2':{
                cout << "BLUE: Yo RED! Gramps isn't around!" << endl;
                break;
            }
            case '3':{
                cout << "It's encyclopedia-like, but the pages are blank!" << endl;
                break;
            }
            case '4':{
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
            case '5':{
                cout << "Push START to open the MENU!" << endl;
                cin.ignore();
                cout << "The SAVE option is on the MENU screen" << endl;
                cin.ignore();
                break;
            }
            case '6':{
                cout << "Those are POke balls." << endl;
                cin.ignore();
                cout << "They contain POKeMON!" << endl;
                break;
            }
            case '7':{
              cout << "You exit Professor Oak's Laboratory" << endl;
              PalletTown();
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
    }while(choice != '7');
}