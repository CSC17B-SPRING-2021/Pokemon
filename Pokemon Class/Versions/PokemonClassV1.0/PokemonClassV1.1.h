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
    baseSpecial,baseDef,pokemonNum;
    void pokemonInfo();

};

//Dervied pokemon class Pikachu
//the main way to dervie pokemon
class Pikachu: public PokemonClass{
  public:
    Pikachu();
};

class Bulbasaur: public PokemonClass{
  public:
    Bulbasaur();
};

//Dervied pokemon class Charmander
class Charmander: public PokemonClass{
  public:
    Charmander();
};

//Derived Pokemon class Squirtle
class Squirtle: public PokemonClass{
  public:
    Squirtle();
};

//Derived Pokemon class Squirtle
class Rattata: public PokemonClass{
  public:
    Rattata();
};

class Spearow: public PokemonClass{
  public:
    Spearow();
}; 


class Pidgey: public PokemonClass{
  public:
    Pidgey();
}; 

class NidoranMale:public PokemonClass{
  public:
    NidoranMale();

};

class NidoranFemale: public PokemonClass{
  public:
    NidoranFemale();
}; 

class Weedle: public PokemonClass{
  public:
    Weedle();
}; 

class Caterpie: public PokemonClass{
  public:
    Caterpie();
};

class Geodude: public PokemonClass{
  public:
    Geodude();
};

class Onyx: public PokemonClass{
  public:
    Onyx();
}; 
#endif
