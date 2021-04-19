#ifndef POKEMONCLASS_H
#define POKEMONCLASS_H
#include <string>
using namespace std;

//Base class\
//Main pokemonclass
class PokemonClass{
//private
  public:
    string pokeName;
    string pokeType;
    int healthStat,baseAttack, baseSpeed,
    baseSpecial,baseDef,pokemonNum, pokemonIDNum;
    void pokemonInfo();

};

//Dervied pokemon class Pikachu
//the main way to dervie pokemon
class Pikachu: public PokemonClass{
  public:
    Pikachu();
};

//Dervied pokemon class Charmander
class Charmander: public PokemonClass{
  public:
    Charmander();

}

//Derived Pokemon class Squirtle
class Squirtle: public PokemonClass{
  public:
    Squirtle();
    
  
}






#endif