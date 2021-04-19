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
  pokemonNum = 20;
  pokemonIDNum = 345343;
}

//Defulat Charmander constrcutor
Charmander::Charmander(){
  pokeName = "Charmander";
  pokeType = "Electric";
  healthStat = 20;
  baseAttack = 13;
  baseSpeed = 17;
  baseSpecial = 11;
  pokemonNum = 20;
  pokemonIDNum = 564354;
}

//Default Squirtle constructor 
Squirtle::Squirtle(){
  pokeName = "Squirtle";
  pokeType = "Water";
  healthStat = 44;
  baseAttack = 48;
  baseSpeed = 43;
  baseSpecial = 50;
  pokemonNum = 07;
  pokemonIDNum = 546165;
}


//PokemonClass function to display pokemon information
void PokemonClass::pokemonInfo(){
  cout << pokeName << endl;
  cout <<"No." << pokemonNum << endl;
  cout << pokeType << endl;
  cout << "Health: " << healthStat << endl;
  cout << "Attack: " << baseAttack << endl;
  cout << "Speed: " << baseSpeed << endl;
  cout << "IDNo." << pokemonIDNum << endl;
};
