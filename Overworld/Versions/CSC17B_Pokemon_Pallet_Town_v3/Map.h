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
    string rName, pName;            //rival and player names
    char choice;
    int RoomNav;
    bool hasPokemon = false;
public:
    Map();
    void GetPlayer();
    void GetRival();
    void PlayerHouse();
    void PlayerRoom();
    void PalletTown();
    void ProfessorOak();
};

#endif /* MAP_H */

