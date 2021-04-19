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
    //private
    //add another pokemon type variable
    //create function to check types against eachother 
    //add type class
public:
    string pokeName;
    string pokeType, pokeTypeOne;
    int healthStat, currentHealth, baseAttack, baseSpeed,
    baseSpecial, baseDef, pokemonNum;
    void attackMenu();
    void pokemonInfo();
    void HealPoke(int);
    void DmgPoke(int, string);
    void ShowHP();

    struct move {
        string Name;
        string type;
        int dmg;
        int accuracy;
    };
    move Move1;
    move Move2;

    void SetUp(int Pokemon) {
        switch (Pokemon) {
            case 25:
                pokeName = "Pikachu";
                pokeType = "Electric";
                pokeTypeOne = "";
                healthStat = 35;
                currentHealth = healthStat;
                baseAttack = 55;
                baseSpeed = 40;
                baseDef = 30;
                baseSpecial = 50;
                pokemonNum = 025;

                Move1.Name = "Tackle";
                Move1.type = "Normal";
                Move1.accuracy = 90;
                Move1.dmg = 40 * this->baseAttack / 100;

                Move2.Name = "Thunder Shock";
                Move2.type = "Electric";
                Move2.accuracy = 90;
                Move2.dmg = 40 * this->baseSpecial / 100;
                break;
            case 1:
                pokeName = "Bulbasaur";
                pokeType = "Grass";
                pokeTypeOne = "Poison";
                healthStat = 45;
                currentHealth = healthStat;
                baseAttack = 49;
                baseDef = 49;
                baseSpeed = 45;
                baseSpecial = 65;
                pokemonNum = 001;

                Move1.Name = "Tackle";
                Move1.type = "Normal";
                Move1.accuracy = 90;
                Move1.dmg = 40 * this->baseAttack / 100;
                Move2.Name = "Vine Whip";
                Move2.type = "Grass";
                Move2.accuracy = 90;
                Move2.dmg = 40 * this->baseSpecial / 100;
                break;
            case 4:
                pokeName = "Charmander";
                pokeType = "Fire";
                pokeTypeOne = "";
                healthStat = 39;
                currentHealth = healthStat;
                baseAttack = 52;
                baseDef = 43;
                baseSpeed = 65;
                baseSpecial = 50;
                pokemonNum = 004;

                Move1.Name = "Scratch";
                Move1.type = "Normal";
                Move1.accuracy = 90;
                Move1.dmg = 40 * this->baseAttack / 100;

                Move2.Name = "Ember";
                Move2.type = "Fire";
                Move2.accuracy = 90;
                Move2.dmg = 40 * this->baseSpecial / 100;
                break;
            case 7:
                pokeName = "Squirtle";
                pokeType = "Water";
                pokeTypeOne = "";
                healthStat = 44;
                currentHealth = healthStat;
                baseAttack = 48;
                baseDef = 65;
                baseSpeed = 43;
                baseSpecial = 50;
                pokemonNum = 007;

                Move1.Name = "Tackle";
                Move1.type = "Normal";
                Move1.accuracy = 90;
                Move1.dmg = 40 * this->baseAttack / 100;

                Move2.Name = "Water Gun";
                Move2.type = "Water";
                Move2.accuracy = 90;
                Move2.dmg = 40 * this->baseSpecial / 100;
                break;
            case 19:
                pokeName = "Rattata";
                pokeType = "Normal";
                pokeTypeOne = "";
                healthStat = 30;
                currentHealth = healthStat;
                baseAttack = 56;
                baseDef = 35;
                baseSpeed = 72;
                baseSpecial = 25;
                pokemonNum = 19;

                Move1.Name = "Tackle";
                Move1.type = "Normal";
                Move1.accuracy = 90;
                Move1.dmg = 40 * this->baseAttack / 100;


                Move2.Name = "Chomp";
                Move2.type = "Normal";
                Move2.accuracy = 80;
                Move2.dmg = 60 * this->baseAttack / 100;
                break;
            case 21:
                pokeName = "Spearow";
                pokeType = "Flying";
                pokeTypeOne = "Normal";
                healthStat = 40;
                currentHealth = healthStat;
                baseAttack = 60;
                baseDef = 30;
                baseSpeed = 70;
                baseSpecial = 31;
                pokemonNum = 021;


                Move1.Name = "Scratch";
                Move1.type = "Normal";
                Move1.accuracy = 90;
                Move1.dmg = 40 * this->baseAttack / 100;
                Move2.Name = "Peck";
                Move2.type = "Flying";
                Move2.accuracy = 90;
                Move2.dmg = 40 * this->baseAttack / 100;
                break;
            case 17:
                pokeName = "Pidgey";
                pokeType = "Flying";
                pokeTypeOne = "Normal";
                healthStat = 40;
                currentHealth = healthStat;
                baseAttack = 45;
                baseDef = 40;
                baseSpeed = 56;
                baseSpecial = 35;
                pokemonNum = 017;

                Move1.Name = "Scratch";
                Move1.type = "Normal";
                Move1.accuracy = 90;
                Move1.dmg = 40 * this->baseAttack / 100;
                Move2.Name = "Peck";
                Move2.type = "Flying";
                Move2.accuracy = 90;
                Move2.dmg = 40 * this->baseAttack / 100;
                break;
            case 95:
                pokeName = "Onyx";
                pokeType = "Rock";
                pokeTypeOne = "Ground";
                healthStat = 35;
                currentHealth = healthStat;
                baseAttack = 45;
                baseDef = 60;
                baseSpeed = 45;
                baseSpecial = 30;
                pokemonNum = 95;

                Move1.Name = "Mud Slap";
                Move1.type = "Ground";
                Move1.accuracy = 95;
                Move1.dmg = 30 * this->baseAttack / 100;
                Move2.Name = "Rock Throw";
                Move2.type = "Rock";
                Move2.accuracy = 85;
                Move2.dmg = 40 * this->baseSpecial / 100;
                break;
            case 74:
                pokeName = "Geodude";
                pokeType = "Rock";
                pokeTypeOne = "Ground";
                healthStat = 40;
                currentHealth = healthStat;
                baseAttack = 30;
                baseDef = 50;
                baseSpeed = 20;
                baseSpecial = 30;
                pokemonNum = 074;

                Move1.Name = "Tackle";
                Move1.type = "Normal";
                Move1.accuracy = 90;
                Move1.dmg = 40 * this->baseAttack / 100;
                Move2.Name = "Rock Throw";
                Move2.type = "Rock";
                Move2.accuracy = 85;
                Move2.dmg = 40 * this->baseSpecial / 100;
                break;
            case 32:
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
                pokemonNum = 032;

                Move1.Name = "Scratch";
                Move1.type = "Normal";
                Move1.accuracy = 90;
                Move1.dmg = 40 * this->baseAttack / 100;

                Move2.Name = "Poison Sting";
                Move2.type = "Poison";
                Move2.accuracy = 90;
                Move2.dmg = 40 * this->baseAttack / 100;
                break;
            case 30:
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
                pokemonNum = 030;

                Move1.Name = "Scratch";
                Move1.type = "Normal";
                Move1.accuracy = 90;
                Move1.dmg = 40 * this->baseAttack / 100;

                Move2.Name = "Poison Sting";
                Move2.type = "Poison";
                Move2.accuracy = 90;
                Move2.dmg = 40 * this->baseAttack / 100;
                break;
            case 13:
                pokeName = "Weedle";
                pokeType = "Bug";
                pokeTypeOne = "Poison";
                healthStat = 40;
                currentHealth = healthStat;
                baseAttack = 35;
                baseDef = 30;
                baseSpeed = 50;
                baseSpecial = 20;
                pokemonNum = 013;

                Move1.Name = "Bug Bite";
                Move1.type = "Bug";
                Move1.accuracy = 90;
                Move1.dmg = 40 * this->baseAttack / 100;
                Move2.Name = "Poison Sting";
                Move2.type = "Poison";
                Move2.accuracy = 90;
                Move2.dmg = 40 * this->baseAttack / 100;
                break;
            case 10:
                pokeName = "Caterpie";
                pokeType = "Bug";
                pokeTypeOne = "";
                healthStat = 45;
                currentHealth = healthStat;
                baseAttack = 30;
                baseDef = 35;
                baseSpeed = 45;
                baseSpecial = 20;
                pokemonNum = 010;

                Move1.Name = "Tackle";
                Move1.type = "Normal";
                Move1.accuracy = 90;
                Move1.dmg = 40 * this->baseAttack / 100;
                Move2.Name = "Bug Bite";
                Move2.type = "Bug";
                Move2.accuracy = 90;
                Move2.dmg = 40 * this->baseAttack / 100;
                break;
            default:
                cout << endl;
        }
    }
};

//Dervied pokemon class Pikachu
//the main way to dervie pokemon

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
    dmg = dmg * (1 - (this->baseDef / 100));
    if (dmg <= 0) {
        dmg = 1;
    }
    if (currentHealth - dmg <= 0) {
        currentHealth = 0;
    } else currentHealth -= dmg;
    if (affectiveness < 1) {
        cout << "That attack was not very affective...";
    } else if (affectiveness > 1) {
        cout << "That attack was super affective!";
    }
    cout << "The attack did " << dmg << "damage!";

}

void PokemonClass::pokemonInfo() {
    cout << pokeName << endl;
    cout << "No." << pokemonNum << endl;
    cout << pokeType << endl;
    cout << "Health: " << healthStat << endl;
    cout << "Attack: " << baseAttack << endl;
    cout << "Speed: " << baseSpeed << endl;
};

void PokemonClass::HealPoke(int healed) {
    if (currentHealth + healed >= healthStat) {
        currentHealth = healthStat;
    } else
        currentHealth += healed;
}

/*
void PokemonClass::DmgPoke(int dmg,) {
    //will be overridden by individual pokemon
    dmg = dmg * (1 - (this->baseDef / 100));
    if (dmg <= 0) {
        dmg = 1;
    }
    if (currentHealth - dmg <= 0) {
        currentHealth = 0;
    } else
        currentHealth -= dmg;
}
 */
void PokemonClass::ShowHP() {
    cout << currentHealth << "/" << healthStat;
}

void PokemonClass::attackMenu() {
    cout << "1. " << this->Move1.Name << "    Type:" << this->Move1.type << "    Accuracy: " << this->Move1.accuracy << endl;
    cout << "2. " << this->Move2.Name << "    Type:" << this->Move2.type << "    Accuracy: " << this->Move2.accuracy << endl;
}

/*
class Pikachu : public PokemonClass {
public:
    Pikachu();
    move Move1;
    move Move2;

    void attackMenu() {
        cout << "1. " << this->Move1.Name << "    Type:" << this->Move1.type << "    Accuracy: " << this->Move1.accuracy << endl;
        cout << "2. " << this->Move2.Name << "    Type:" << this->Move2.type << "    Accuracy: " << this->Move2.accuracy << endl;

    }

    void DmgPoke(int dmg, string MoveType) {
        int affectiveness = 1;
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
        //Damage is then reduced by the defense, then taken off of health
        dmg = dmg * (1 - (this->baseDef / 100));
        if (dmg <= 0) {
            dmg = 1;
        }
        if (currentHealth - dmg <= 0) {
            currentHealth = 0;
        } else
            currentHealth -= dmg;
        if (affectiveness < 1) {
            cout << "That attack was not very affective...";
        } else if (affectiveness > 1) {
            cout << "That attack was super affective!";
        }
        cout << "The attack did " << dmg << "damage!";
    }
};

class Bulbasaur : public PokemonClass {
public:
    Bulbasaur();
    move Move1;
    move Move2;

    void attackMenu() {
        cout << "1. " << this->Move1.Name << "    Type:" << this->Move1.type << "    Accuracy: " << this->Move1.accuracy << endl;
        cout << "2. " << this->Move2.Name << "    Type:" << this->Move2.type << "    Accuracy: " << this->Move2.accuracy << endl;

    }

    void DmgPoke(int dmg, string MoveType) {
        int affectiveness = 1;
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

        //affectiveness check for Poison Type
        if (MoveType == "Grass" || MoveType == "Poison") {
            dmg *= 0.5;
            affectiveness--;
        } else if (MoveType == "Bug" || MoveType == "Ground") {
            dmg *= 2;
            affectiveness++;
        } else {
            dmg *= 1;
        }

        dmg = dmg * (1 - (this->baseDef / 100));
        if (dmg <= 0) {
            dmg = 1;
        }
        if (currentHealth - dmg <= 0) {
            currentHealth = 0;
        } else
            currentHealth -= dmg;
        if (affectiveness < 1) {
            cout << "That attack was not very affective...";
        } else if (affectiveness > 1) {
            cout << "That attack was super affective!";
        }
        cout << "The attack did " << dmg << "damage!";

    }
};

//Dervied pokemon class Charmander

class Charmander : public PokemonClass {
public:
    Charmander();
    move Move1;
    move Move2;

    void attackMenu() {
        cout << "1. " << this->Move1.Name << "    Type:" << this->Move1.type << "    Accuracy: " << this->Move1.accuracy << endl;
        cout << "2. " << this->Move2.Name << "    Type:" << this->Move2.type << "    Accuracy: " << this->Move2.accuracy << endl;

    }

    void DmgPoke(int dmg, string MoveType) {
        //specific to Charmander
        int affectiveness = 1;
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

        dmg = dmg * (1 - (this->baseDef / 100));
        if (dmg <= 0) {
            dmg = 1;
        }
        if (currentHealth - dmg <= 0) {
            currentHealth = 0;
        } else
            currentHealth -= dmg;
        if (affectiveness < 1) {
            cout << "That attack was not very affective...";
        } else if (affectiveness > 1) {
            cout << "That attack was super affective!";
        }
        cout << "The attack did " << dmg << "damage!";
    }
};

//Derived Pokemon class Squirtle

class Squirtle : public PokemonClass {
public:
    Squirtle();
    move Move1;
    move Move2;

    void attackMenu() {
        cout << "1. " << this->Move1.Name << "    Type:" << this->Move1.type << "    Accuracy: " << this->Move1.accuracy << endl;
        cout << "2. " << this->Move2.Name << "    Type:" << this->Move2.type << "    Accuracy: " << this->Move2.accuracy << endl;

    }

    void DmgPoke(int dmg, string MoveType) {
        int affectiveness = 1;
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
        //Damage is then reduced by the defense, then taken off of health
        dmg = dmg * (1 - (this->baseDef / 100));
        if (dmg <= 0) {
            dmg = 1;
        }
        if (currentHealth - dmg <= 0) {
            currentHealth = 0;
        } else
            currentHealth -= dmg;
        if (affectiveness < 1) {
            cout << "That attack was not very affective...";
        } else if (affectiveness > 1) {
            cout << "That attack was super affective!";
        }
        cout << "The attack did " << dmg << "damage!";
    }
};


//Derived Pokemon class Squirtle

class Rattata : public PokemonClass {
public:
    Rattata();
    move Move1;
    move Move2;

    void attackMenu() {
        cout << "1. " << this->Move1.Name << "    Type:" << this->Move1.type << "    Accuracy: " << this->Move1.accuracy << endl;
        cout << "2. " << this->Move2.Name << "    Type:" << this->Move2.type << "    Accuracy: " << this->Move2.accuracy << endl;

    }

    void DmgPoke(int dmg, string MoveType) {
        int affectiveness = 1;
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
        //Damage is then reduced by the defense, then taken off of health
        dmg = dmg * (1 - (this->baseDef / 100));
        if (dmg <= 0) {
            dmg = 1;
        }
        if (currentHealth - dmg <= 0) {
            currentHealth = 0;
        } else
            currentHealth -= dmg;
        if (affectiveness < 1) {
            cout << "That attack was not very affective...";
        } else if (affectiveness > 1) {
            cout << "That attack was super affective!";
        }
        cout << "The attack did " << dmg << "damage!";
    }
};

class Spearow : public PokemonClass {
public:
    Spearow();
    move Move1;
    move Move2;

    void attackMenu() {
        cout << "1. " << this->Move1.Name << "    Type:" << this->Move1.type << "    Accuracy: " << this->Move1.accuracy << endl;
        cout << "2. " << this->Move2.Name << "    Type:" << this->Move2.type << "    Accuracy: " << this->Move2.accuracy << endl;

    }

    void DmgPoke(int dmg, string MoveType) {
        int affectiveness = 1;
        //affectiveness check for flying Type
        if (MoveType == "Bug" || MoveType == "Grass") {
            dmg *= 0.5;
            affectiveness--;
        } else if (MoveType == "Electric" || MoveType == "Rock") {
            dmg *= 2;
            affectiveness++;
        } else {
            dmg *= 1;
        }

        //affectiveness check for Normal Type
        if (MoveType == "Ghost") {
            dmg *= 0;
        } else if (MoveType == "Fighting") {
            dmg *= 2;
            affectiveness++;
        } else {
            dmg *= 1;
        }
        //check affectiveness in case the attack is to do no damage
        if (MoveType == "Ground" || MoveType == "Ghost") {
            dmg = 0;
            affectiveness = 1;
        }
        dmg = dmg * (1 - (this->baseDef / 100));
        if (dmg <= 0) {
            dmg = 1;
        }
        if (currentHealth - dmg <= 0) {
            currentHealth = 0;
        } else
            currentHealth -= dmg;
        if (affectiveness < 1) {
            cout << "That attack was not very affective...";
        } else if (affectiveness > 1) {
            cout << "That attack was super affective!";
        }
        cout << "The attack did " << dmg << "damage!";

    }
};

class Pidgey : public PokemonClass {
public:
    Pidgey();
    move Move1;
    move Move2;

    void attackMenu() {
        cout << "1. " << this->Move1.Name << "    Type:" << this->Move1.type << "    Accuracy: " << this->Move1.accuracy << endl;
        cout << "2. " << this->Move2.Name << "    Type:" << this->Move2.type << "    Accuracy: " << this->Move2.accuracy << endl;

    }

    void DmgPoke(int dmg, string MoveType) {
        int affectiveness = 1;
        //affectiveness check for flying Type
        if (MoveType == "Bug" || MoveType == "Grass") {
            dmg *= 0.5;
            affectiveness--;
        } else if (MoveType == "Electric" || MoveType == "Rock") {
            dmg *= 2;
            affectiveness++;
        } else {
            dmg *= 1;
        }

        //affectiveness check for Normal Type
        if (MoveType == "Ghost") {
            dmg *= 0;
        } else if (MoveType == "Fighting") {
            dmg *= 2;
            affectiveness++;
        } else {
            dmg *= 1;
        }
        //check affectiveness in case the attack is to do no damage
        if (MoveType == "Ground" || MoveType == "Ghost") {
            dmg = 0;
            affectiveness = 1;
        }
        dmg = dmg * (1 - (this->baseDef / 100));
        if (dmg <= 0) {
            dmg = 1;
        }
        if (currentHealth - dmg <= 0) {
            currentHealth = 0;
        } else
            currentHealth -= dmg;
        if (affectiveness < 1) {
            cout << "That attack was not very affective...";
        } else if (affectiveness > 1) {
            cout << "That attack was super affective!";
        }
        cout << "The attack did " << dmg << "damage!";

    }
};

class NidoranMale : public PokemonClass {
public:
    NidoranMale();
    move Move1;
    move Move2;

    void attackMenu() {
        cout << "1. " << this->Move1.Name << "    Type:" << this->Move1.type << "    Accuracy: " << this->Move1.accuracy << endl;
        cout << "2. " << this->Move2.Name << "    Type:" << this->Move2.type << "    Accuracy: " << this->Move2.accuracy << endl;

    }

    void DmgPoke(int dmg, string MoveType) {
        int affectiveness = 1;
        //affectiveness check for Poison Type

        if (MoveType == "Grass" || MoveType == "Poison") {
            dmg *= 0.5;
            affectiveness--;
        } else if (MoveType == "Bug" || MoveType == "Ground") {
            dmg *= 2;
            affectiveness++;
        } else {
            dmg *= 1;
        }

        dmg = dmg * (1 - (this->baseDef / 100));
        if (dmg <= 0) {
            dmg = 1;
        }
        if (currentHealth - dmg <= 0) {
            currentHealth = 0;
        } else
            currentHealth -= dmg;
        if (affectiveness < 1) {
            cout << "That attack was not very affective...";
        } else if (affectiveness > 1) {
            cout << "That attack was super affective!";
        }
        cout << "The attack did " << dmg << "damage!";

    }
};

class NidoranFemale : public PokemonClass {
public:
    NidoranFemale();
    move Move1;
    move Move2;

    void attackMenu() {
        cout << "1. " << this->Move1.Name << "    Type:" << this->Move1.type << "    Accuracy: " << this->Move1.accuracy << endl;
        cout << "2. " << this->Move2.Name << "    Type:" << this->Move2.type << "    Accuracy: " << this->Move2.accuracy << endl;

    }

    void DmgPoke(int dmg, string MoveType) {
        int affectiveness = 1;
        //affectiveness check for Poison Type

        if (MoveType == "Grass" || MoveType == "Poison") {
            dmg *= 0.5;
            affectiveness--;
        } else if (MoveType == "Bug" || MoveType == "Ground") {
            dmg *= 2;
            affectiveness++;
        } else {
            dmg *= 1;
        }

        dmg = dmg * (1 - (this->baseDef / 100));
        if (dmg <= 0) {
            dmg = 1;
        }
        if (currentHealth - dmg <= 0) {
            currentHealth = 0;
        } else
            currentHealth -= dmg;
        if (affectiveness < 1) {
            cout << "That attack was not very affective...";
        } else if (affectiveness > 1) {
            cout << "That attack was super affective!";
        }
        cout << "The attack did " << dmg << "damage!";

    }
};

class Weedle : public PokemonClass {
public:
    Weedle();
    move Move1;
    move Move2;

    void attackMenu() {
        cout << "1. " << this->Move1.Name << "    Type:" << this->Move1.type << "    Accuracy: " << this->Move1.accuracy << endl;
        cout << "2. " << this->Move2.Name << "    Type:" << this->Move2.type << "    Accuracy: " << this->Move2.accuracy << endl;

    }

    void DmgPoke(int dmg, string MoveType) {
        int affectiveness = 1;
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

        //check affectiveness for Poison Type
        if (MoveType == "Grass" || MoveType == "Poison") {
            dmg *= 0.5;
            affectiveness--;
        } else if (MoveType == "Bug" || MoveType == "Ground") {
            dmg *= 2;
            affectiveness++;
        } else {
            dmg *= 1;
        }

        dmg = dmg * (1 - (this->baseDef / 100));
        if (dmg <= 0) {
            dmg = 1;
        }
        if (currentHealth - dmg <= 0) {
            currentHealth = 0;
        } else
            currentHealth -= dmg;
        if (affectiveness < 1) {
            cout << "That attack was not very affective...";
        } else if (affectiveness > 1) {
            cout << "That attack was super affective!";
        }
        cout << "The attack did " << dmg << "damage!";

    }
};

class Caterpie : public PokemonClass {
public:
    Caterpie();
    move Move1;
    move Move2;

    void attackMenu() {
        cout << "1. " << this->Move1.Name << "    Type:" << this->Move1.type << "    Accuracy: " << this->Move1.accuracy << endl;
        cout << "2. " << this->Move2.Name << "    Type:" << this->Move2.type << "    Accuracy: " << this->Move2.accuracy << endl;

    }

    void DmgPoke(int dmg, string MoveType) {
        int affectiveness = 1;
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
        dmg = dmg * (1 - (this->baseDef / 100));
        if (dmg <= 0) {
            dmg = 1;
        }
        if (currentHealth - dmg <= 0) {
            currentHealth = 0;
        } else
            currentHealth -= dmg;
        if (affectiveness < 1) {
            cout << "That attack was not very affective...";
        } else if (affectiveness > 1) {
            cout << "That attack was super affective!";
        }
        cout << "The attack did " << dmg << "damage!";

    }
};

class Geodude : public PokemonClass {
public:
    Geodude();
    move Move1;
    move Move2;

    void attackMenu() {
        cout << "1. " << this->Move1.Name << "    Type:" << this->Move1.type << "    Accuracy: " << this->Move1.accuracy << endl;
        cout << "2. " << this->Move2.Name << "    Type:" << this->Move2.type << "    Accuracy: " << this->Move2.accuracy << endl;

    }

    void DmgPoke(int dmg, string MoveType) {
        int affectiveness = 1;
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

        dmg = dmg * (1 - (this->baseDef / 100));
        if (dmg <= 0) {
            dmg = 1;
        }
        if (currentHealth - dmg <= 0) {
            currentHealth = 0;
        } else
            currentHealth -= dmg;
        if (affectiveness < 1) {
            cout << "That attack was not very affective...";
        } else if (affectiveness > 1) {
            cout << "That attack was super affective!";
        }
        cout << "The attack did " << dmg << "damage!";

    }
};

class Onyx : public PokemonClass {
public:
    Onyx();
    move Move1;
    move Move2;

    void attackMenu() {
        cout << "1. " << this->Move1.Name << "    Type:" << this->Move1.type << "    Accuracy: " << this->Move1.accuracy << endl;
        cout << "2. " << this->Move2.Name << "    Type:" << this->Move2.type << "    Accuracy: " << this->Move2.accuracy << endl;

    }

    void DmgPoke(int dmg, string MoveType) {
        int affectiveness = 1;
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

        dmg = dmg * (1 - (this->baseDef / 100));
        if (dmg <= 0) {
            dmg = 1;
        }
        if (currentHealth - dmg <= 0) {
            currentHealth = 0;
        } else
            currentHealth -= dmg;
        if (affectiveness < 1) {
            cout << "That attack was not very affective...";
        } else if (affectiveness > 1) {
            cout << "That attack was super affective!";
        }
        cout << "The attack did " << dmg << "damage!";

    }
};

Pikachu::Pikachu() {
    pokeName = "Pikachu";
    pokeType = "Electric";
    pokeTypeOne = "";
    healthStat = 35;
    currentHealth = healthStat;
    baseAttack = 55;
    baseSpeed = 40;
    baseDef = 30;
    baseSpecial = 50;
    pokemonNum = 025;

    Move1.Name = "Tackle";
    Move1.type = "Normal";
    Move1.accuracy = 90;
    Move1.dmg = 40 * this->baseAttack / 100;

    Move2.Name = "Thunder Shock";
    Move2.type = "Electric";
    Move2.accuracy = 90;
    Move2.dmg = 40 * this->baseSpecial / 100;
};


//Defualt Charmander constrcutor

Charmander::Charmander() {
    pokeName = "Charmander";
    pokeType = "Fire";
    pokeTypeOne = "";
    healthStat = 39;
    currentHealth = healthStat;
    baseAttack = 52;
    baseDef = 43;
    baseSpeed = 65;
    baseSpecial = 50;
    pokemonNum = 005;

    Move1.Name = "Scratch";
    Move1.type = "Normal";
    Move1.accuracy = 90;
    Move1.dmg = 40 * this->baseAttack / 100;

    Move2.Name = "Ember";
    Move2.type = "Fire";
    Move2.accuracy = 90;
    Move2.dmg = 40 * this->baseSpecial / 100;
};

//Default Squirtle constructor 

Squirtle::Squirtle() {
    pokeName = "Squirtle";
    pokeType = "Water";
    pokeTypeOne = "";
    healthStat = 44;
    currentHealth = healthStat;
    baseAttack = 48;
    baseDef = 65;
    baseSpeed = 43;
    baseSpecial = 50;
    pokemonNum = 007;

    Move1.Name = "Tackle";
    Move1.type = "Normal";
    Move1.accuracy = 90;
    Move1.dmg = 40 * this->baseAttack / 100;

    Move2.Name = "Water Gun";
    Move2.type = "Water";
    Move2.accuracy = 90;
    Move2.dmg = 40 * this->baseSpecial / 100;

};

Rattata::Rattata() {
    pokeName = "Rattata";
    pokeType = "Normal";
    pokeTypeOne = "";
    healthStat = 30;
    currentHealth = healthStat;
    baseAttack = 56;
    baseDef = 35;
    baseSpeed = 72;
    baseSpecial = 25;
    pokemonNum = 19;

    Move1.Name = "Tackle";
    Move1.type = "Normal";
    Move1.accuracy = 90;
    Move1.dmg = 40 * this->baseAttack / 100;


    Move2.Name = "Chomp";
    Move2.type = "Normal";
    Move2.accuracy = 80;
    Move2.dmg = 60 * this->baseAttack / 100;
};

Spearow::Spearow() {
    pokeName = "Spearow";
    pokeType = "Flying";
    pokeTypeOne = "Normal";
    healthStat = 40;
    currentHealth = healthStat;
    baseAttack = 60;
    baseDef = 30;
    baseSpeed = 70;
    baseSpecial = 31;
    pokemonNum = 021;


    Move1.Name = "Scratch";
    Move1.type = "Normal";
    Move1.accuracy = 90;
    Move1.dmg = 40 * this->baseAttack / 100;
    Move2.Name = "Peck";
    Move2.type = "Flying";
    Move2.accuracy = 90;
    Move2.dmg = 40 * this->baseAttack / 100;

};

Pidgey::Pidgey() {
    pokeName = "Pidgey";
    pokeType = "Flying";
    pokeTypeOne = "Normal";
    healthStat = 40;
    currentHealth = healthStat;
    baseAttack = 45;
    baseDef = 40;
    baseSpeed = 56;
    baseSpecial = 35;
    pokemonNum = 017;

    Move1.Name = "Scratch";
    Move1.type = "Normal";
    Move1.accuracy = 90;
    Move1.dmg = 40 * this->baseAttack / 100;
    Move2.Name = "Peck";
    Move2.type = "Flying";
    Move2.accuracy = 90;
    Move2.dmg = 40 * this->baseAttack / 100;

};

Bulbasaur::Bulbasaur() {
    pokeName = "Bulbasaur";
    pokeType = "Grass";
    pokeTypeOne = "Poison";
    healthStat = 45;
    currentHealth = healthStat;
    baseAttack = 49;
    baseDef = 49;
    baseSpeed = 45;
    baseSpecial = 65;
    pokemonNum = 001;

    Move1.Name = "Tackle";
    Move1.type = "Normal";
    Move1.accuracy = 90;
    Move1.dmg = 40 * this->baseAttack / 100;
    Move2.Name = "Vine Whip";
    Move2.type = "Grass";
    Move2.accuracy = 90;
    Move2.dmg = 40 * this->baseSpecial / 100;
};

Weedle::Weedle() {
    pokeName = "Weedle";
    pokeType = "Bug";
    pokeTypeOne = "Poison";
    healthStat = 40;
    currentHealth = healthStat;
    baseAttack = 35;
    baseDef = 30;
    baseSpeed = 50;
    baseSpecial = 20;
    pokemonNum = 013;

    Move1.Name = "Bug Bite";
    Move1.type = "Bug";
    Move1.accuracy = 90;
    Move1.dmg = 40 * this->baseAttack / 100;
    Move2.Name = "Poison Sting";
    Move2.type = "Poison";
    Move2.accuracy = 90;
    Move2.dmg = 40 * this->baseAttack / 100;

};

Onyx::Onyx() {
    pokeName = "Onyx";
    pokeType = "Rock";
    pokeTypeOne = "Ground";
    healthStat = 35;
    currentHealth = healthStat;
    baseAttack = 45;
    baseDef = 60;
    baseSpeed = 45;
    baseSpecial = 30;
    pokemonNum = 95;

    Move1.Name = "Mud Slap";
    Move1.type = "Ground";
    Move1.accuracy = 95;
    Move1.dmg = 30 * this->baseAttack / 100;
    Move2.Name = "Rock Throw";
    Move2.type = "Rock";
    Move2.accuracy = 85;
    Move2.dmg = 40 * this->baseSpecial / 100;
};

NidoranMale::NidoranMale() {
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
    pokemonNum = 032;

    Move1.Name = "Scratch";
    Move1.type = "Normal";
    Move1.accuracy = 90;
    Move1.dmg = 40 * this->baseAttack / 100;

    Move2.Name = "Poison Sting";
    Move2.type = "Poison";
    Move2.accuracy = 90;
    Move2.dmg = 40 * this->baseAttack / 100;
};

NidoranFemale::NidoranFemale() {
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
    pokemonNum = 030;

    Move1.Name = "Scratch";
    Move1.type = "Normal";
    Move1.accuracy = 90;
    Move1.dmg = 40 * this->baseAttack / 100;

    Move2.Name = "Poison Sting";
    Move2.type = "Poison";
    Move2.accuracy = 90;
    Move2.dmg = 40 * this->baseAttack / 100;

};

Caterpie::Caterpie() {
    pokeName = "Caterpie";
    pokeType = "Bug";
    pokeTypeOne = "";
    healthStat = 45;
    currentHealth = healthStat;
    baseAttack = 30;
    baseDef = 35;
    baseSpeed = 45;
    baseSpecial = 20;
    pokemonNum = 010;

    Move1.Name = "Tackle";
    Move1.type = "Normal";
    Move1.accuracy = 90;
    Move1.dmg = 40 * this->baseAttack / 100;
    Move2.Name = "Bug Bite";
    Move2.type = "Bug";
    Move2.accuracy = 90;
    Move2.dmg = 40 * this->baseAttack / 100;

};

Geodude::Geodude() {
    pokeName = "Geodude";
    pokeType = "Rock";
    pokeTypeOne = "Ground";
    healthStat = 40;
    currentHealth = healthStat;
    baseAttack = 30;
    baseDef = 50;
    baseSpeed = 20;
    baseSpecial = 30;
    pokemonNum = 074;

    Move1.Name = "Tackle";
    Move1.type = "Normal";
    Move1.accuracy = 90;
    Move1.dmg = 40 * this->baseAttack / 100;
    Move2.Name = "Rock Throw";
    Move2.type = "Rock";
    Move2.accuracy = 85;
    Move2.dmg = 40 * this->baseSpecial / 100;

};
 */



#endif /* POKEMON_H */

