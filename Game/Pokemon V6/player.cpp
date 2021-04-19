//Programmer:		Thomas
//Assignment:		Pokemon Group Project

//Description:		The purpose of this program is to hold Class member functions


//PreProcessor Directive
//This line of code causes the contents of another file to be
//inserted into the program

#include <cstdlib>
#include <string>
#include <vector>
#include <iostream>
#include "PokemonClass.h"
#include "player.h"

using namespace std;

itemclass::itemclass(string name, int num){
    this->ItemName = name;
    this->ItemNum = num;
}

bool playerclass::addpokemonToCarry(PokemonClass pokemon){
            //It is forbidden to carry more than 6 Pokemon around
        if (CarryPoke.size() == 6) {
            cout << "Error! You can't carry more than 6 pokemons!" << endl;
            return false;
        }
        this->CarryPoke.push_back(pokemon);
        cout << "Add successfully!" << endl;
        return true;
}

bool playerclass::addpokemontoComp(PokemonClass pokemon) {
        this->CarryPoke.push_back(pokemon);
        cout << "Add successfully!" << endl;
        return true;
}

void playerclass::bagupdate(itemclass object) {
        this->bag.push_back(object);
    }

void playerclass::fightingPoke() {
    int numOfpoke = CarryPoke.size();
    if (numOfpoke <= 0) {
    };
    fightingpoke.push_back(CarryPoke.at(0));
    auto it = CarryPoke.begin();
    CarryPoke.erase(it);
}

void playerclass::FightPoke(PokemonClass* ptr) {
        ptr = &fightingpoke.at(0);
}

void playerclass::changepoketofight(int poke) {
    PokemonClass pokeInbattle;
    int bagSize = CarryPoke.size() + fightingpoke.size();
    pokeInbattle = fightingpoke.at(0);
    CarryPoke.push_back(pokeInbattle);
    if (poke < 0 || poke > 5) {
    }; //position out of size
    pokeInbattle = CarryPoke.at(poke);
    fightingpoke.push_back(pokeInbattle);
}

bool playerclass::changePokemonfromComp(int posInBag, int posInComp) {
    if (posInBag > CarryPoke.size() || posInComp > Computer.size()) {
        return false;
    }
    PokemonClass temp;
    temp = CarryPoke[posInBag - 1];
    Computer[posInComp - 1] = CarryPoke[posInBag - 1];
    Computer[posInComp - 1] = temp;
    return true;
}