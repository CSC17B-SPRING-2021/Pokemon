/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pokemon.h
 * 
 *
 * Created on April 9, 2021, 5:57 PM
 */

#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <string>
using namespace std;

//Base class\
//Main pokemonclass

class PokemonClass {

public:
    string pokeName; //string variable to hold Pokemon Name
    string pokeType, pokeTypeOne; //string variables to hold Pokemon Types
    int healthStat, currentHealth, baseAttack, baseSpeed, //int values that hold Pokemon
    baseSpecial, baseDef, pokemonNum;//Health stat, current Health, Base attack damge, base speed, base special attack damage, base defense, and pokemon number ID 
    void attackMenu(); //void function that displays the attack menu used in the Combat Class
    void pokemonInfo(); //Displays pokemon information
    void HealPoke(int); //Heals pokemon using an item 
    void DmgPoke(int, string);//void function that checks whether a pokemon will revice extra damage based on what type it's going up against
    void ShowHP(); //void function that displays the pokemon's health
    
    //struct that defines a pokemon's moveset
    struct move {
        string Name; //string variable that defines a pokemon's moveset name
        string type; //string variable that defines a pokemon's moveset type
        int dmg; //int variable that defines a pokemon's damage amount 
        int accuracy; //int variable that defines a pokemon's move's accuaray 
    };
    move Move1; //move object that defines a pokemon's moveset
    move Move2; //move object that defines a pokemon's moveset
    
    //PokemonClass defulat constructor that setups a PokemonClass object
    PokemonClass() {
        this->pokeName = "None";
    }

    //Void function that setups the various Pokemon
    void SetUp(int Pokemon) {
        switch (Pokemon) {
          //if Pokemon number is 1 then create a Pikachu Pokemon Object
            case 1:
                pokeName = "Pikachu"; //Pokemon name
                pokeType = "Electric"; //Pokemon type
                pokeTypeOne = ""; //Pokemon type two
                healthStat = 35; //Pokemon health stat
                currentHealth = healthStat; //Current health is equal to the pokemon's health stat
                baseAttack = 55; //Pokemon's base attack damage
                baseSpeed = 40; //Pokemon's base speed
                baseDef = 30; //Pokemon's base defense
                baseSpecial = 50; //Pokemon's base special attack damage
                pokemonNum = 1; //Pokemon number in the pokedex

                Move1.Name = "Tackle"; //Pokemon's first move name
                Move1.type = "Normal"; //Type of attack the move is
                Move1.accuracy = 95; //Arruracy of the move
                Move1.dmg = 40 * this->baseAttack / 100; //Damage of the move
                
                //Setting up the pokemon's second move, which basically
                //is the same process as the first move
                Move2.Name = "Thunder Shock";
                Move2.type = "Electric";
                Move2.accuracy = 95;
                Move2.dmg = 40 * this->baseSpecial / 100;
                break;
            //if Pokemon number is 2 then create a Bulbasaur Pokemon Object
            case 2:
                pokeName = "Bulbasaur";
                pokeType = "Grass";
                pokeTypeOne = "Poison";
                healthStat = 45;
                currentHealth = healthStat;
                baseAttack = 49;
                baseDef = 49;
                baseSpeed = 45;
                baseSpecial = 65;
                pokemonNum = 2;

                Move1.Name = "Tackle";
                Move1.type = "Normal";
                Move1.accuracy = 95;
                Move1.dmg = 40 * this->baseAttack / 100;
                Move2.Name = "Vine Whip";
                Move2.type = "Grass";
                Move2.accuracy = 95;
                Move2.dmg = 40 * this->baseSpecial / 100;
                break;

            //if Pokemon number is 3 then create a Charmander Pokemon Object and so on   
            case 3:
                pokeName = "Charmander";
                pokeType = "Fire";
                pokeTypeOne = "";
                healthStat = 39;
                currentHealth = healthStat;
                baseAttack = 52;
                baseDef = 43;
                baseSpeed = 65;
                baseSpecial = 50;
                pokemonNum = 3;

                Move1.Name = "Scratch";
                Move1.type = "Normal";
                Move1.accuracy = 95;
                Move1.dmg = 40 * this->baseAttack / 100;

                Move2.Name = "Ember";
                Move2.type = "Fire";
                Move2.accuracy = 95;
                Move2.dmg = 40 * this->baseSpecial / 100;
                break;
            case 4:
                pokeName = "Squirtle";
                pokeType = "Water";
                pokeTypeOne = "";
                healthStat = 44;
                currentHealth = healthStat;
                baseAttack = 48;
                baseDef = 65;
                baseSpeed = 43;
                baseSpecial = 50;
                pokemonNum = 4;

                Move1.Name = "Tackle";
                Move1.type = "Normal";
                Move1.accuracy = 95;
                Move1.dmg = 40 * this->baseAttack / 100;

                Move2.Name = "Water Gun";
                Move2.type = "Water";
                Move2.accuracy = 95;
                Move2.dmg = 40 * this->baseSpecial / 100;
                break;
            case 5:
                pokeName = "Rattata";
                pokeType = "Normal";
                pokeTypeOne = "";
                healthStat = 30;
                currentHealth = healthStat;
                baseAttack = 56;
                baseDef = 35;
                baseSpeed = 72;
                baseSpecial = 25;
                pokemonNum = 5;

                Move1.Name = "Tackle";
                Move1.type = "Normal";
                Move1.accuracy = 95;
                Move1.dmg = 40 * this->baseAttack / 100;


                Move2.Name = "Chomp";
                Move2.type = "Normal";
                Move2.accuracy = 85;
                Move2.dmg = 60 * this->baseAttack / 100;
                break;
            case 6:
                pokeName = "Spearow";
                pokeType = "Flying";
                pokeTypeOne = "Normal";
                healthStat = 40;
                currentHealth = healthStat;
                baseAttack = 60;
                baseDef = 30;
                baseSpeed = 70;
                baseSpecial = 31;
                pokemonNum = 6;


                Move1.Name = "Scratch";
                Move1.type = "Normal";
                Move1.accuracy = 95;
                Move1.dmg = 40 * this->baseAttack / 100;
                Move2.Name = "Peck";
                Move2.type = "Flying";
                Move2.accuracy = 95;
                Move2.dmg = 40 * this->baseAttack / 100;
                break;
            case 7:
                pokeName = "Pidgey";
                pokeType = "Flying";
                pokeTypeOne = "Normal";
                healthStat = 40;
                currentHealth = healthStat;
                baseAttack = 45;
                baseDef = 40;
                baseSpeed = 56;
                baseSpecial = 35;
                pokemonNum = 7;

                Move1.Name = "Scratch";
                Move1.type = "Normal";
                Move1.accuracy = 95;
                Move1.dmg = 40 * this->baseAttack / 100;
                Move2.Name = "Peck";
                Move2.type = "Flying";
                Move2.accuracy = 95;
                Move2.dmg = 40 * this->baseAttack / 100;
                break;
            case 8:
                pokeName = "Onyx";
                pokeType = "Rock";
                pokeTypeOne = "Ground";
                healthStat = 35;
                currentHealth = healthStat;
                baseAttack = 45;
                baseDef = 60;
                baseSpeed = 45;
                baseSpecial = 30;
                pokemonNum = 8;

                Move1.Name = "Mud Slap";
                Move1.type = "Ground";
                Move1.accuracy = 95;
                Move1.dmg = 30 * this->baseAttack / 100;
                Move2.Name = "Rock Throw";
                Move2.type = "Rock";
                Move2.accuracy = 90;
                Move2.dmg = 40 * this->baseSpecial / 100;
                break;
            case 9:
                pokeName = "Geodude";
                pokeType = "Rock";
                pokeTypeOne = "Ground";
                healthStat = 40;
                currentHealth = healthStat;
                baseAttack = 30;
                baseDef = 50;
                baseSpeed = 20;
                baseSpecial = 30;
                pokemonNum = 9;

                Move1.Name = "Tackle";
                Move1.type = "Normal";
                Move1.accuracy = 95;
                Move1.dmg = 40 * this->baseAttack / 100;
                Move2.Name = "Rock Throw";
                Move2.type = "Rock";
                Move2.accuracy = 90;
                Move2.dmg = 40 * this->baseSpecial / 100;
                break;
            case 10:
                pokeName = "NidoranMale";
                pokeType = "Poison";
                pokeTypeOne = "";
                //gender = "Male";
                healthStat = 46;
                currentHealth = healthStat;
                baseAttack = 57;
                baseDef = 40;
                baseSpeed = 50;
                baseSpecial = 40;
                pokemonNum = 10;

                Move1.Name = "Scratch";
                Move1.type = "Normal";
                Move1.accuracy = 95;
                Move1.dmg = 40 * this->baseAttack / 100;

                Move2.Name = "Poison Sting";
                Move2.type = "Poison";
                Move2.accuracy = 95;
                Move2.dmg = 40 * this->baseAttack / 100;
                break;
            case 11:
                pokeName = "NidoranFemale";
                pokeType = "Poison";
                pokeTypeOne = "";
                //gender = "Female";
                healthStat = 55;
                currentHealth = healthStat;
                baseAttack = 47;
                baseDef = 52;
                baseSpeed = 41;
                baseSpecial = 40;
                pokemonNum = 11;

                Move1.Name = "Scratch";
                Move1.type = "Normal";
                Move1.accuracy = 95;
                Move1.dmg = 40 * this->baseAttack / 100;

                Move2.Name = "Poison Sting";
                Move2.type = "Poison";
                Move2.accuracy = 95;
                Move2.dmg = 40 * this->baseAttack / 100;
                break;
            case 12:
                pokeName = "Weedle";
                pokeType = "Bug";
                pokeTypeOne = "Poison";
                healthStat = 40;
                currentHealth = healthStat;
                baseAttack = 35;
                baseDef = 30;
                baseSpeed = 50;
                baseSpecial = 20;
                pokemonNum = 12;

                Move1.Name = "Bug Bite";
                Move1.type = "Bug";
                Move1.accuracy = 95;
                Move1.dmg = 40 * this->baseAttack / 100;
                Move2.Name = "Poison Sting";
                Move2.type = "Poison";
                Move2.accuracy = 95;
                Move2.dmg = 40 * this->baseAttack / 100;
                break;
            case 13:
                pokeName = "Caterpie";
                pokeType = "Bug";
                pokeTypeOne = "";
                healthStat = 45;
                currentHealth = healthStat;
                baseAttack = 30;
                baseDef = 35;
                baseSpeed = 45;
                baseSpecial = 20;
                pokemonNum = 13;

                Move1.Name = "Tackle";
                Move1.type = "Normal";
                Move1.accuracy = 95;
                Move1.dmg = 40 * this->baseAttack / 100;
                Move2.Name = "Bug Bite";
                Move2.type = "Bug";
                Move2.accuracy = 95;
                Move2.dmg = 40 * this->baseAttack / 100;
                break;
            default:
                
                cout << endl;
        }
    }
};


//Void function that checks affectivness against all types of pokemon
void PokemonClass::DmgPoke(int dmg, string MoveType) {
    int affectiveness = 1;
    if(this->pokeType=="Normal") {
            // Checks move affectiveness for Normal type
            if (MoveType == "Ghost") {
                dmg *= 0;
                cout << "There was no effect...";
            } else if (MoveType == "Fighting") {
                dmg *= 2;
                affectiveness++;
            } else {
                dmg *= 1;
            }
    }else if (this->pokeType=="Poison") {

            //checks move affectiveness for Poison
            if (MoveType == "Grass" || MoveType == "Poison") {
                dmg *= 0.5;
                affectiveness--;
            } else if (MoveType == "Bug" || MoveType == "Ground") {
                dmg *= 2;
                affectiveness++;
            } else {
                dmg *= 1;
            }
    }else if (this->pokeType=="Ground") {
        
            //check affectiveness for Ground Type
            if (MoveType == "Rock" || MoveType == "Poison") {
                dmg *= 0.5;
                affectiveness--;
            } else if (MoveType == "Water" || MoveType == "Grass") {
                dmg *= 2;
                affectiveness++;
            } else {
                dmg *= 1;
            }
    }else if (this->pokeType=="Electric") {
        
            // Checks move affectiveness for Electric
            if (MoveType == "Flying" || MoveType == "Electric") {
                dmg *= 0.5;
                affectiveness--;
            } else if (MoveType == "Ground") {
                dmg *= 2;
                affectiveness++;
            } else {
                dmg *= 1;
            }
    }else if(this->pokeType=="Grass") {

            //affectiveness check for Grass Type
            if (MoveType == "Water" || MoveType == "Ground" || MoveType == "Grass" || MoveType == "Electric") {
                dmg *= 0.5;
                affectiveness--;
            } else if (MoveType == "Flying" || MoveType == "Poison" || MoveType == "Bug" || MoveType == "Fire") {
                dmg *= 2;
                affectiveness++;
            } else {
                dmg *= 1;
            }
    }else if (this->pokeType=="Fire") {

            //checks move affectiveness for Fire
            if (MoveType == "Bug" || MoveType == "Fire" || MoveType == "Grass") {
                dmg *= 0.5;
                affectiveness--;
            } else if (MoveType == "Ground" || MoveType == "Rock" || MoveType == "Water") {
                dmg *= 2;
                affectiveness++;
            } else {
                dmg *= 1;
            }
    }else if (this->pokeType=="Water") {

            // Checks move affectiveness for Water
            if (MoveType == "Water" || MoveType == "Fire") {
                dmg *= 0.5;
                affectiveness--;
            } else if (MoveType == "Grass" || MoveType == "Electric") {
                dmg *= 2;
                affectiveness++;
            } else {
                dmg *= 1;
            }
    }else if (this->pokeType=="Flying") {
        
            if (MoveType == "Bug" || MoveType == "Grass") {
                dmg *= 0.5;
                affectiveness--;
            } else if (MoveType == "Electric" || MoveType == "Rock") {
                dmg *= 2;
                affectiveness++;
            } else {
                dmg *= 1;
            }
    }else if (this->pokeType=="Rock") {
        
            //affectiveness check for Rock Type
            if (MoveType == "Normal" || MoveType == "Flying" || MoveType == "Poison" || MoveType == "Fire") {
                dmg *= 0.5;
                affectiveness--;
            } else if (MoveType == "Fighting" || MoveType == "Ground" || MoveType == "Water" || MoveType == "Grass") {
                dmg *= 2;
                affectiveness++;
            } else {
                dmg *= 1;
            }
    }else if (this->pokeType=="Bug") {
        
            //affectiveness check for Bug Type
            if (MoveType == "Grass" || MoveType == "Ground" || MoveType == "Fighting") {
                dmg *= 0.5;
                affectiveness--;
            } else if (MoveType == "Flying" || MoveType == "Poison" || MoveType == "Rock" || MoveType == "Fire") {
                dmg *= 2;
                affectiveness++;
            } else {
                dmg *= 1;
            }
    }else {
            cout << endl;
    }
    //this must run a second time, checking for the 2nd pokemon type
    if (this->pokeTypeOne == "Normal") {

        // Checks move affectiveness for Normal type
        if (MoveType == "Ghost") {
            dmg *= 0;
            cout << "There was no effect...";
        } else if (MoveType == "Fighting") {
            dmg *= 2;
            affectiveness++;
        } else {
            dmg *= 1;
        }
    } else if (this->pokeTypeOne == "Poison") {

        //checks move affectiveness for Poison
        if (MoveType == "Grass" || MoveType == "Poison") {
            dmg *= 0.5;
            affectiveness--;
        } else if (MoveType == "Bug" || MoveType == "Ground") {
            dmg *= 2;
            affectiveness++;
        } else {
            dmg *= 1;
        }
    } else if (this->pokeTypeOne == "Ground") {

        //check affectiveness for Ground Type
        if (MoveType == "Rock" || MoveType == "Poison") {
            dmg *= 0.5;
            affectiveness--;
        } else if (MoveType == "Water" || MoveType == "Grass") {
            dmg *= 2;
            affectiveness++;
        } else {
            dmg *= 1;
        }
    } else if (this->pokeTypeOne == "Electric") {

        // Checks move affectiveness for Electric
        if (MoveType == "Flying" || MoveType == "Electric") {
            dmg *= 0.5;
            affectiveness--;
        } else if (MoveType == "Ground") {
            dmg *= 2;
            affectiveness++;
        } else {
            dmg *= 1;
        }
    } else if (this->pokeTypeOne == "Grass") {

        //affectiveness check for Grass Type
        if (MoveType == "Water" || MoveType == "Ground" || MoveType == "Grass" || MoveType == "Electric") {
            dmg *= 0.5;
            affectiveness--;
        } else if (MoveType == "Flying" || MoveType == "Poison" || MoveType == "Bug" || MoveType == "Fire") {
            dmg *= 2;
            affectiveness++;
        } else {
            dmg *= 1;
        }
    } else if (this->pokeTypeOne == "Fire") {
        //checks move affectiveness for Fire
        if (MoveType == "Bug" || MoveType == "Fire" || MoveType == "Grass") {
            dmg *= 0.5;
            affectiveness--;
        } else if (MoveType == "Ground" || MoveType == "Rock" || MoveType == "Water") {
            dmg *= 2;
            affectiveness++;
        } else {
            dmg *= 1;
        }
    } else if (this->pokeTypeOne == "Water") {

        // Checks move affectiveness for Water
        if (MoveType == "Water" || MoveType == "Fire") {
            dmg *= 0.5;
            affectiveness--;
        } else if (MoveType == "Grass" || MoveType == "Electric") {
            dmg *= 2;
            affectiveness++;
        } else {
            dmg *= 1;
        }
    } else if (this->pokeTypeOne == "Flying") {
        if (MoveType == "Bug" || MoveType == "Grass") {
            dmg *= 0.5;
            affectiveness--;
        } else if (MoveType == "Electric" || MoveType == "Rock") {
            dmg *= 2;
            affectiveness++;
        } else {
            dmg *= 1;
        }
    } else if (this->pokeTypeOne == "Rock") {
        //affectiveness check for Rock Type
        if (MoveType == "Normal" || MoveType == "Flying" || MoveType == "Poison" || MoveType == "Fire") {
            dmg *= 0.5;
            affectiveness--;
        } else if (MoveType == "Fighting" || MoveType == "Ground" || MoveType == "Water" || MoveType == "Grass") {
            dmg *= 2;
            affectiveness++;
        } else {
            dmg *= 1;
        }
    } else if (this->pokeTypeOne == "Bug") {
        //affectiveness check for Bug Type
        if (MoveType == "Grass" || MoveType == "Ground" || MoveType == "Fighting") {
            dmg *= 0.5;
            affectiveness--;
        } else if (MoveType == "Flying" || MoveType == "Poison" || MoveType == "Rock" || MoveType == "Fire") {
            dmg *= 2;
            affectiveness++;
        } else {
            dmg *= 1;
        }
    } else {
        cout << endl;
    }
    //sets the damage equal to a value based on the pokemon's defense
    dmg = dmg * (1 - (this->baseDef / 100));
    if (dmg <= 0) {
        dmg = 1;
    }
    //Checks if the attack set the pokemon's health to zero
    //Else subtract the amount the attack did to from the pokemon's current health
    if (currentHealth - dmg <= 0) {
        currentHealth = 0;
    } else currentHealth -= dmg;
    //Checks whether an attack was very affective based on the affectivness variable
    //set up in the begin, which was added throughout lines 352 - 587
    //If affective then print it was affective, else print it wasn't affective
    if (affectiveness < 1) {
        cout << "That attack was not very affective...\n";
    } else if (affectiveness > 1) {
        cout << "That attack was super affective!\n";
    }
    //Displays the amount of damage the attack did after all the checks
    cout << "The attack did " << dmg << "damage!\n";

}

//void function that displays pokemon information
void PokemonClass::pokemonInfo() {
    cout << pokeName << endl;
    cout << "No." << pokemonNum << endl;
    cout << pokeType << endl;
    cout << "Health: " << healthStat << endl;
    cout << "Attack: " << baseAttack << endl;
    cout << "Speed: " << baseSpeed << endl;
};

//void function that heals the pokemon
void PokemonClass::HealPoke(int healed) {
  //if the current health plus the amount heal is greater than 
  //the health stat of the poke then set the current health to 
  //the pokemon's health stat
  //Else heal the pokemon 
    if (currentHealth + healed >= healthStat) {
        currentHealth = healthStat;
    } else
        currentHealth += healed;
}

//void function that displays the pokemon's current health 
void PokemonClass::ShowHP() {
    cout << currentHealth << "/" << healthStat;
}

//void function that displays the attack menu for pokemon
void PokemonClass::attackMenu() {
    cout << "1. " << this->Move1.Name << "    Type:" << this->Move1.type << "    Accuracy: " << this->Move1.accuracy << endl;
    cout << "2. " << this->Move2.Name << "    Type:" << this->Move2.type << "    Accuracy: " << this->Move2.accuracy << endl;
}
#endif /* POKEMON_H */

