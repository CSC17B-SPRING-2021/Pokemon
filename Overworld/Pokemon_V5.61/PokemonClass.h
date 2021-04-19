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
    baseSpecial, baseDef, pokemonNum;//Health stat, current Health, Base attack damge, //base speed, base special attack damage, base defense, and pokemon number ID 
    void attackMenu(); //void function that displays the attack menu used in the Combat //Class
    void pokemonInfo(); //Displays pokemon information
    void HealPoke(int); //Heals pokemon using an item 
    void DmgPoke(int, string);//void function that checks whether a pokemon will revice //extra damage based on what type it's going up against
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

#endif /* POKEMON_H */