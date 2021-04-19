#ifndef POKEMONCLASS_H
#define POKEMONCLASS_H
#include <string>
using namespace std;

//Base class\
//Main pokemonclass
class PokemonClass{
//private
//add another pokemon type variable
//create function to check types against eachother 
//add type class
  public:
    string pokeName;
    string pokeType, pokeTypeOne;
    int healthStat,baseAttack, baseSpeed,
    baseSpecial,baseDef,pokemonNum;
    void pokemonInfo();
    float damageMulti(PokemonClass pokemonOne,PokemonClass pokemonTwo);
};

class fireType:public PokemonClass{
  public:
  float damageMulti(PokemonClass pokemonTwo);
};

class electricType:public PokemonClass{
  public:
    float damageMulti(PokemonClass pokemonTwo);

};

class waterType:public PokemonClass{
  public:
    float damageMulti(PokemonClass pokemonTwo);

};

class grassType: public PokemonClass{
  public:
    float damageMulti(PokemonClass pokemonTwo);
  
};

class poisonType:public PokemonClass{
  public: 
    float damageMulti(PokemonClass pokemonTwo);
  
};

class normalType:public PokemonClass{
  public: 
    float damageMulti(PokemonClass pokemonTwo);
};

class flyingType:public PokemonClass{
  public: 
    float damageMulti(PokemonClass pokemonTwo);

};

class bugType:public PokemonClass{
  public: 
    float damageMulti(PokemonClass pokemonTwo);
};

class rockType:public PokemonClass{
  public: 
    float damageMulti(PokemonClass pokemonTwo);
};

class groundType:public PokemonClass{
  public: 
    float damageMulti(PokemonClass pokemonTwo);

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
class Charmander:public PokemonClass{
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