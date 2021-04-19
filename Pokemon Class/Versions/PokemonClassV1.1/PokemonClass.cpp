#include "PokemonClass.h"
#include "iostream"
using namespace std;

//Default Pikachu constructor
Pikachu::Pikachu(){
  pokeName = "Pikachu";
  pokeType = "Electric";
  healthStat = 35;
  baseAttack = 55;
  baseSpeed = 40;
  baseDef = 30;
  baseSpecial = 50;
  pokemonNum = 025;
};

//Defulat Charmander constrcutor
Charmander::Charmander(){
  pokeName = "Charmander";
  pokeType = "Fire";
  healthStat = 39;
  baseAttack = 52;
  baseDef = 43;
  baseSpeed = 65;
  baseSpecial = 50;
  pokemonNum = 005;
};

//Default Squirtle constructor 
Squirtle::Squirtle(){
  pokeName = "Squirtle";
  pokeType = "Water";
  healthStat = 44;
  baseAttack = 48;
  baseDef = 65;
  baseSpeed = 43;
  baseSpecial = 50;
  pokemonNum = 007;
};

Rattata::Rattata(){
  pokeName = "Rattata";
  pokeType = "Normal";
  healthStat = 30;
  baseAttack = 56;
  baseDef = 35;
  baseSpeed = 72;
  baseSpecial = 25;
  pokemonNum = 19;
};


Spearow::Spearow(){
  pokeName = "Spearow";
  pokeType = "Flying/Normal";
  healthStat = 40;
  baseAttack = 60;
  baseDef = 30;
  baseSpeed = 70;
  baseSpecial = 31;
  pokemonNum = 021;
};

Pidgey::Pidgey(){
  pokeName = "Pidgey";
  pokeType = "Flying";
  healthStat = 40;
  baseAttack = 45;
  baseDef = 40;
  baseSpeed = 56;
  baseSpecial = 35;
  pokemonNum = 017;
};

Bulbasaur::Bulbasaur(){
  pokeName = "Bulbasaur";
  pokeType = "Grass/Poison";
  healthStat = 45;
  baseAttack = 49;
  baseDef = 49;
  baseSpeed = 45;
  baseSpecial = 65;
  pokemonNum = 001;
};

Weedle::Weedle(){
  pokeName = "Weedle";
  pokeType = "Bug/Poison";
  healthStat = 40;
  baseAttack = 35;
  baseDef = 30;
  baseSpeed = 50;
  baseSpecial = 20;
  pokemonNum = 013;
};

Onyx::Onyx(){
  pokeName = "Onyx";
  pokeType = "Rock/Ground";
  healthStat = 35;
  baseAttack = 45;
  baseDef = 160;
  baseSpeed = 70;
  baseSpecial = 30;
  pokemonNum = 95;
};

NidoranMale::NidoranMale(){
  pokeName = "NidoranMale";
  pokeType = "Posion";
  //gender = "Male";
  healthStat = 46;
  baseAttack = 57;
  baseDef = 40;
  baseSpeed = 50;
  baseSpecial = 40;
  pokemonNum = 032;
};

NidoranFemale::NidoranFemale(){
  pokeName = "NidoranFemale";
  pokeType = "Posion";
  //gender = "Female";
  healthStat = 55;
  baseAttack = 47;
  baseDef = 52;
  baseSpeed = 41;
  baseSpecial = 40;
  pokemonNum = 030;
};

Caterpie::Caterpie(){
  pokeName = "Caterpie";
  pokeType = "Bug";
  healthStat = 45	;
  baseAttack = 30;
  baseDef = 35;
  baseSpeed = 45;
  baseSpecial = 20;
  pokemonNum = 010;
};

Geodude::Geodude(){
  pokeName = "Geodude";
  pokeType = "Rock/Ground";
  healthStat = 40	;
  baseAttack = 80;
  baseDef = 100;
  baseSpeed = 20;
  baseSpecial = 30;
  pokemonNum = 074;
};

//PokemonClass function to display pokemon information
void PokemonClass::pokemonInfo(){
  cout << pokeName << endl;
  cout <<"No." << pokemonNum << endl;
  cout << pokeType << endl;
  cout << "Health: " << healthStat << endl;
  cout << "Attack: " << baseAttack << endl;
  cout << "Speed: " << baseSpeed << endl;
};
