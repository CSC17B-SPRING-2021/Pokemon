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


using namespace std;


class pokemonClass {

};


//create a object class
class itemclass {
private:
    int ItemNum;
    string ItemName;
public:
    itemclass(string name, int num) {
        this->ItemName = name;
        this->ItemNum = num;
    }
    int getNum();
    string getName();
    void showItem();
    void setNum(int);
};

class playerclass {
private:
    vector<itemclass> bag;
    vector<pokemonClass> CarryPoke;//This is related to Pokemon class
    vector<pokemonClass> Computer;//could save 11 pokemons
    vector<pokemonClass> fightingpoke;
public:
    void getitem(itemclass);

    bool useItem(string itemName, int num);

    void ShowItemInfo();

    bool addpokemonToCarry(pokemonClass pokemon) {
        if (CarryPoke.size() == 6) {
            cout << "Error! You can't carry more than 6 pokemons!" << endl;
            return false;
        }
        this->CarryPoke.push_back(pokemon);
        cout << "Add successfully!" << endl;
        return true;
    }

    bool addpokemontoComp(pokemonClass pokemon) {
        this->CarryPoke.push_back(pokemon);
        cout << "Add successfully!" << endl;
        return true;
    }

    void bagupdate(itemclass object) {
        this->bag.push_back(object);
    }

    void fightingPoke() {
        int numOfpoke = CarryPoke.size();
        if (numOfpoke <= 0) {};
        fightingpoke.push_back(CarryPoke.at(0));
        auto it = CarryPoke.begin();
        CarryPoke.erase(it);
    }

    vector<pokemonClass> getFightingpoke() {
        return fightingpoke;
    }

    void changepoketofight(int poke) {
        pokemonClass pokeInbattle;
        int bagSize = CarryPoke.size() + fightingpoke.size();
        pokeInbattle = fightingpoke.at(0);
        CarryPoke.push_back(pokeInbattle);
        if (poke < 0 || poke > 5) {}; //position out of size
        pokeInbattle = CarryPoke.at(poke);
        fightingpoke.push_back(pokeInbattle);
    }

    bool changePokemonfromComp(int posInBag, int posInComp) {
        if (posInBag > CarryPoke.size() || posInComp > Computer.size()) {
            return false;
        }
        pokemonClass temp;
        temp = CarryPoke[posInBag - 1];
        Computer[posInComp - 1] = CarryPoke[posInBag - 1];
        Computer[posInComp - 1] = temp;
        return true;
    }

};



#endif /* PLAYER_H */

