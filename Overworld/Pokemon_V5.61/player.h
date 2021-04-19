/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   player.h
 * Author: daysk
 *
 * Created on 2021年4月5日, 下午7:34
 */

#ifndef PLAYER_H
#define PLAYER_H
#ifndef PLAYERCLASS_H
#define PLAYERCLASS_H
#include <string>
#include <vector>
#include <iostream>
#include "PokemonClass.h"

using namespace std;

//Suppose there is a Pokemon class
/*
class PokemonClass {

};
*/

//create a object class
class itemclass {
private:
    //Set the name and quantity of the item
    int ItemNum;
    string ItemName;

public:

    itemclass(string name, int num) {
        this->ItemName = name;
        this->ItemNum = num;
    }
    //Get the corresponding quantity of the item
    int getNum();
    //Get the corresponding name of the item
    string getName();
    //Display item information
    void showItem();
    //Get the number of corresponding items(initial value)
    void setNum(int);
};

class playerclass {
private:
    vector<itemclass> bag;//Backpack for storing items
    vector<PokemonClass> CarryPoke;//This is related to Pokemon class
    vector<PokemonClass> Computer;//could save 11 pokemons
    vector<PokemonClass> fightingpoke;//Pokemon used in battle
public:
    int playerArray[6] = {0,0,0,0,0,0};
    void insertPoke(int pos, int pokeNum) {
      playerArray[pos] = pokeNum;
    }
    //Get item information
    void getitem(itemclass);
    //Use items
    bool useItem(string itemName, int num);
    //Display item information
    void ShowItemInfo();
    //Add Pokemon that needs to be around
    bool addpokemonToCarry(PokemonClass pokemon) {
        //It is forbidden to carry more than 6 Pokemon around
        if (CarryPoke.size() == 6) {
            cout << "Error! You can't carry more than 6 pokemons!" << endl;
            return false;
        }
        this->CarryPoke.push_back(pokemon);
        cout << "Add successfully!" << endl;
        return true;
    }

    bool addpokemontoComp(PokemonClass pokemon) {
        this->CarryPoke.push_back(pokemon);
        cout << "Add successfully!" << endl;
        return true;
    }

    void bagupdate(itemclass object) {
        this->bag.push_back(object);
    }

    //Choose the pokemon to fight (the first one by default)
    void fightingPoke() {
        int numOfpoke = CarryPoke.size();
        if (numOfpoke <= 0) {};
        fightingpoke.push_back(CarryPoke.at(0));
        auto it = CarryPoke.begin();
        CarryPoke.erase(it);
    }

    void FightPoke(PokemonClass* ptr) {
        ptr = &fightingpoke.at(0);
    }
    
    //Pokemon can be replaced in battle
    void changepoketofight(int poke) {
        PokemonClass pokeInbattle;
        int bagSize = CarryPoke.size() + fightingpoke.size();
        pokeInbattle = fightingpoke.at(0);
        CarryPoke.push_back(pokeInbattle);
        if (poke < 0 || poke > 5) {}; //position out of size
        pokeInbattle = CarryPoke.at(poke);
        fightingpoke.push_back(pokeInbattle);
    }

    //Outside the battle, you can exchange the Pokemon in the computer with the Pokemon around you.
    bool changePokemonfromComp(int posInBag, int posInComp) {
        if (posInBag > CarryPoke.size() || posInComp > Computer.size()) {
            return false;
        }
        PokemonClass temp;
        temp = CarryPoke[posInBag - 1];
        Computer[posInComp - 1] = CarryPoke[posInBag - 1];
        Computer[posInComp - 1] = temp;
        return true;
    }

};



#endif /* PLAYER_H */
#endif
