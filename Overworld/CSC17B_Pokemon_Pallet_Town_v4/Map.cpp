#include "map.h"

void Map::GetPlayer()
{
    cout << "Oak: First, what is your name?" << endl;
    cout << "------------------------------------" << endl;
    getline(cin, pName);
}

void Map::GetRival()
{
    cout << "Oak: This is my grandson. He's been your rival since you " << endl;
    cin.ignore();
    cout << "were a baby." << endl;
    cin.ignore();
    cout << "Oak: ....Erm, what is his name again?" << endl;
    getline(cin, rName);
}

Map::Map()
{
    GetPlayer();
    GetRival();
    tile = 0;
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
    bool grass;
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
                ProfessorOak1();                                        
                break;
            }
            case '4':{
                //this is when professor oak's scenario would pop up
                grass = false;
                if(hasPokemon == true)
                    Route1();
                else
                    ProfessorOak2();                                                       //this is to leave the area
                break;
            }//return grass;
            default:{
                cout << "Invalid Input, try again." << endl;
                break;
            }
        }
    }while(grass == true);
}

void Map::ProfessorOak1()
{
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
                    }
                }while(end == true);
}

void Map::ProfessorOak2()
{
    char pokemon;
    char rival;
    int roll;
    char choice;
    srand(time(0));                                                         //this is a placeholder randomized number for the fights
    bool picked = false;
    cout << "OAK: Hey wait! Don't go out!" << endl;                         //RED is dragged back to Professor  Oak's house to select their POKeMON
    cin.ignore();
    cout << "It's unsafe! Wild POKeMON live in tall grass!" << endl;
    cin.ignore();
    cout << "You need your own POKeMON for your protection." << endl;
    cin.ignore();
    cout << "I know! Here, come with me!" << endl;
    cin.ignore();
    cout << "Professor Oak drags you back to his laboratory." << endl;
    cin.ignore();
    cout << "As you enter the laboratory you see lab aides conversing next to tall bookcases." << endl;
    cin.ignore();
    cout << "At the end of the room you see your rival " << rName;                   //this is where we'd put the name of the rival
    cin.ignore();
    cout << "and three POKeballs." << endl;
    cin.ignore();
    cout << rName << ": Gramps! I'm fed up with waiting!" << endl;               //RED is at Professor Oak's house, this is the initial bit of dialogue before RED can select their POKeMON
    cin.ignore();
    cout << "OAK:" << rName << "? Let me think..." << endl;
    cin.ignore();
    cout << "Oh, that's right, I told you to come! Just wait!" << endl;
    cin.ignore();
    cout << "Here, " << pName << "! There are 3 POKeMON here!" << endl;
    cin.ignore();
    cout << "Haha! They are inside the POke BALLs. When I was young I was a serious POKeMON trainer!" << endl;
    cin.ignore();
    cout << "In my old age, I have only 3 three left, but you can have one! Choose!" << endl;
    cin.ignore();
    cout << rName << ": Hey! Gramps! What about me?" << endl;
    cin.ignore();
    cout << "OAK: Be patient! " << rName << ", you can have one too!" << endl;         //now RED can choose their POKeMON: charmander, bulbasaur, or squirtle
    cin.ignore();
    cout << "Okay " << pName << ", which one of Professor Oak's three remaining POKeMON would you like to choose?" << endl;
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
            getline(cin, pokeName);
            cin.ignore();
            cout << rName << ": I'll take this one, then!" << endl;
            cin.ignore();
            cout << rName << " received a SQUIRTLE!" << endl;
            rival = 's';
            picked = true;
        }
        else if(pokemon == 's' || pokemon == 'S'){
            cout << "You have chosen SQUIRTLE!" << endl;
            cin.ignore();
            cout << "What would you like to name your POKeMON?" << endl;
            getline(cin, pokeName);
            cin.ignore();
            cout << rName << " : I'll take this one, then!" << endl;
            cin.ignore();
            cout << rName << " received a BULBASAUR!" << endl;
            rival = 'b';
            picked = true;
        }
        else if(pokemon == 'b' || pokemon == 'B'){
            cout << "You have chosen BULBASAUR!" << endl;
            cin.ignore();
            cout << "What would you like to name your POKeMON?" << endl;
            getline(cin, pokeName);
            cin.ignore();
            cout << rName << " : I'll take this one, then!" << endl;
            cin.ignore();
            cout << rName << " received a CHARMANDER!" << endl;
            rival = 'c';
            picked = true;
        }
        else{
            cout << "OAK: You need to pick a POKeMON!" << endl;
        }
        hasPokemon = true;
    }while(picked == false);
    cout << rName << " : Wait " << pName << "! Let's check out our POKeMON! Come on, I'll take you on!" << endl;
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
        cout << "2.) Talk to " << rName << endl;
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
                cout << rName << ": Yo " << pName << "! Gramps isn't around!" << endl;
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

/*
 * so route 1 is basically an area between pallet town and viridian city
 * I'm going to be creating a set of 5 tiles that will essentially act like the player is progressing through the area
 * on the 3rd tile, there will be a mandatory trainer battle.
 * i'm going to try to implement a pokemon catching system??
 * placeholder at least
 */
void Map::Route1()
{
    cout << "You have entered the grass area." << endl;
    cin.ignore();
    cout << pName << ": This is a dangerous place that Professor Oak warned us about." << endl;
    cin.ignore();
    cout << pName << ": Here we should be able to fight and capture POKEMON!" << endl;
    cin.ignore();
    cout << "The grass is a set of 5 tiles that you can move back and forth through." << endl;
    cin.ignore();
    cout << "Each time you move to a tile, there will be a random chance for you to encounter a POKEMON battle." << endl;
    cin.ignore();
    cout << "One of the tiles will have a mandatory POKEMON trainer battle." << endl;
    cin.ignore();
    do{
        cout << "Do you want to move to the next tile or go backward? (press 'f' or 'b')" << endl;
        cin >> choice;
        switch(choice){
            case 'f':{
                tile++;
                cout << "You have moved forward a tile." << endl;
                cin.ignore();
                cout << "You are on tile " << tile << endl;
                cin.ignore();
                
                break;
            }
            case 'b':{
                tile--;
                cout << "You have moved back a tile." << endl;
                cin.ignore();
                cout << "You are on tile " << tile << endl;
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
    }while(tile >= 5 || tile <= 0);
    if(tile > 5){                                                                   //if the tile > 5 then you go into Viridian City, else you get put into Pallet Town
        //VeridianCity();
    }
    else{
        PalletTown();
    }                                                                           
}

void Map::RandomEncounter()
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

/*
 * this is the last part of the game planned for development
 * you'll be walking into this city with some pokemon in hand
 * you'll have some people to talk to, and then go challenge the gym leader Brock
 * once Brock is challenged, you'll fight and then 
 */
void Map::ViridianCity()                                                            
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
                if(choice == 'y' || choice 'Y'){
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
                PokemonCenter();
                break;
            }
            case '4':{                                                                  //enter the pokemart
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
                Route1();
                break;
            }
        }
    }while(end == false);
}

void Map::PokemonCenter()
{
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
            case '3':{                                                          //leave outside to viridan city
                ViridianCity();
                end = true;
            }
            default:
                cout << "Invalid input, please try again." << endl;
        }
    }while(end == false);
}

void Map::PokemonMart()
{
    cout << "You enter the POKEMON MART." << endl;
    cin.ignore();
    cout << "What would you like to do?" << endl;
    cin.ignore();
    do{
        end = false;
        cout << "Talk to customer at the door (press 1)" << endl;
        cout << "Talk to customer in the back (press 2)" << endl;
        cout << "Talk to POKEMON TRAINER (press 3)" << endl;
        cout << "Read the Blackboard (press 4)" << endl;
        cout << "Exit POKEMON MART (press 5)" << endl;
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
                cout << "Fourth Page...The goal for POKEMON trainers is to beat the top " << endl
                cin.ignore();
                cout << "8 POKEMON GYM LEADERS." << endl;
                cin.ignore();
                cout << pName << ": All I want to do is defeat Viridian City's POKEMON GYM LEADER Brock." << endl;
                break;
            }
            case '4':{
                break;
            }
            case '5':{
                ViridianCity();
                end = true;
                break;
            }
        }
    }while(end == false);
}

void Map::PokemonGym()
{
    
}