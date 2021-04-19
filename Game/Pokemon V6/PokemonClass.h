/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pokemon.h
 * Author: Mario & Andrew
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
    void SetUp(int Pokemon);
    PokemonClass();
    //struct that defines a pokemon's moveset
    struct move {
        string Name; //string variable that defines a pokemon's moveset name
        string type; //string variable that defines a pokemon's moveset type
        int dmg; //int variable that defines a pokemon's damage amount 
        int accuracy; //int variable that defines a pokemon's move's accuaray 
    };
    move Move1; //move object that defines a pokemon's moveset
    move Move2; //move object that defines a pokemon's moveset
 
 
};

#endif /* POKEMON_H */

