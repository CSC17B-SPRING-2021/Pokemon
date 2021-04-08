#ifndef MAP_H
#define MAP_H
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

//the idea here is that you'll have a map class that has all the functions to call each section of the map
class Map {
private:
    string rName, pName, pokeName;            //rival and player names
    char choice;
    int RoomNav, tile;
    bool hasPokemon = false, end;
public:
    Map();
    void GetPlayer();
    void GetRival();
    void PlayerHouse();
    void PlayerRoom();
    void PalletTown();
    void ProfessorOak1();
    void ProfessorOak2();
    void Route1();
    void RandomEncounter();
    void ViridianCity();
    void PokemonCenter();
    void PokemonMart();
    void PokemonGym();
};

#endif /* MAP_H */

