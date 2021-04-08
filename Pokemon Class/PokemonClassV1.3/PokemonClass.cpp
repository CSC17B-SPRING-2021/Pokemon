#include "PokemonClass.h"
#include "iostream"
using namespace std;



//Default Pikachu constructor
Pikachu::Pikachu(){
  pokeName = "Pikachu";
  pokeType = "Electric";
  pokeTypeOne = "";
  healthStat = 35;
  baseAttack = 55;
  baseSpeed = 40;
  baseDef = 30;
  baseSpecial = 50;
  pokemonNum = 025;
};


//Defualt Charmander constrcutor
Charmander::Charmander(){
  pokeName = "Charmander";
  pokeType = "Fire";
  pokeTypeOne = "";
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
  pokeTypeOne = "";
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
  pokeTypeOne = "";
  healthStat = 30;
  baseAttack = 56;
  baseDef = 35;
  baseSpeed = 72;
  baseSpecial = 25;
  pokemonNum = 19;
};


Spearow::Spearow(){
  pokeName = "Spearow";
  pokeType = "Flying";
  pokeTypeOne = "Normal";
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
  pokeTypeOne = "Normal";
  healthStat = 40;
  baseAttack = 45;
  baseDef = 40;
  baseSpeed = 56;
  baseSpecial = 35;
  pokemonNum = 017;
};

Bulbasaur::Bulbasaur(){
  pokeName = "Bulbasaur";
  pokeType = "Grass";
  pokeTypeOne = "Poison";
  healthStat = 45;
  baseAttack = 49;
  baseDef = 49;
  baseSpeed = 45;
  baseSpecial = 65;
  pokemonNum = 001;
};

Weedle::Weedle(){
  pokeName = "Weedle";
  pokeType = "Bug";
  pokeTypeOne = "Poison";
  healthStat = 40;
  baseAttack = 35;
  baseDef = 30;
  baseSpeed = 50;
  baseSpecial = 20;
  pokemonNum = 013;
};

Onyx::Onyx(){
  pokeName = "Onyx";
  pokeType = "Rock";
  pokeTypeOne = "Ground";
  healthStat = 35;
  baseAttack = 45;
  baseDef = 160;
  baseSpeed = 70;
  baseSpecial = 30;
  pokemonNum = 95;
};

NidoranMale::NidoranMale(){
  pokeName = "NidoranMale";
  pokeType = "Poison";
  pokeTypeOne = "";
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
  pokeType = "Poison";
  pokeTypeOne = "";
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
  pokeTypeOne = "";
  healthStat = 45	;
  baseAttack = 30;
  baseDef = 35;
  baseSpeed = 45;
  baseSpecial = 20;
  pokemonNum = 010;
};

Geodude::Geodude(){
  pokeName = "Geodude";
  pokeType = "Rock";
  pokeTypeOne = "Ground";
  healthStat = 40	;
  baseAttack = 80;
  baseDef = 100;
  baseSpeed = 20;
  baseSpecial = 30;
  pokemonNum = 074;
};

float PokemonClass::damageMulti(PokemonClass pokemonOne, PokemonClass pokemonTwo){
  float result = 1;
    if(pokemonOne.pokeType == "Rock" && pokemonTwo.pokeType == "Bug"){
      result *= 0.5;
      cout << "test1" << endl;
    }
    else{
       cout <<" test" << endl;
    }
    return result;
};

float fireType::damageMulti(PokemonClass pokemonTwo){
  float result = 0;
  if(pokemonTwo.pokeType == "Bug" || pokemonTwo.pokeTypeOne == "Bug"  || 
    pokemonTwo.pokeType == "Fire" || pokemonTwo.pokeTypeOne == "Fire"   ||
    pokemonTwo.pokeType == "Grass" || pokemonTwo.pokeTypeOne == "Grass"){
    result += 0.5;
  }
  else if(pokemonTwo.pokeType == "Ground" || pokemonTwo.pokeTypeOne == "Ground" ||
          pokemonTwo.pokeType == "Rock" || pokemonTwo.pokeTypeOne == "Rock" ||
          pokemonTwo.pokeType == "Water" || pokemonTwo.pokeType == "Water"){
    result += 2;
  }
  else{
    result += 1;
  }

  return result;
};

float waterType::damageMulti(PokemonClass pokemonTwo){
  float result = 0;
  if(pokemonTwo.pokeType == "Water" || pokemonTwo.pokeTypeOne == "Water"  || 
    pokemonTwo.pokeType == "Fire" || pokemonTwo.pokeTypeOne == "Fire"){
    result += 0.5;
  }
  else if(pokemonTwo.pokeType == "Grass" || pokemonTwo.pokeTypeOne == "Grass" ||
          pokemonTwo.pokeType == "Electric" || pokemonTwo.pokeTypeOne == "Electric"){
    result += 2;
  }
  else{
    result += 1;
  }

  return result;
};

float grassType::damageMulti(PokemonClass pokemonTwo){
  float result = 0;
  if(pokemonTwo.pokeType == "Ground" || pokemonTwo.pokeTypeOne == "Ground"  || 
    pokemonTwo.pokeType == "Water" || pokemonTwo.pokeTypeOne == "Water"   ||
    pokemonTwo.pokeType == "Grass" || pokemonTwo.pokeTypeOne == "Grass" ||
    pokemonTwo.pokeType == "Electric" || pokemonTwo.pokeTypeOne == "Electric"){
    result += 0.5;
  }
  else if(pokemonTwo.pokeType == "Flying" || pokemonTwo.pokeTypeOne == "Flying" ||
          pokemonTwo.pokeType == "Poison" || pokemonTwo.pokeTypeOne == "Poison" ||
          pokemonTwo.pokeType == "Bug" || pokemonTwo.pokeType == "Bug" ||
          pokemonTwo.pokeType == "Fire" || pokemonTwo.pokeType == "Fire"){
    result += 2;
  }
  else{
    result += 1;
  }

  return result;
};

float flyingType::damageMulti(PokemonClass pokemonTwo){
  float result = 0;
  if(pokemonTwo.pokeType == "Bug" || pokemonTwo.pokeTypeOne == "Bug"  ||
    pokemonTwo.pokeType == "Grass" || pokemonTwo.pokeTypeOne == "Grass"){
    result += 0.5;
  }
  else if(pokemonTwo.pokeType == "Flying" || pokemonTwo.pokeTypeOne == "Flying"){
    result += 2;
  }
  else{
    result += 1;
  }

  return result;
};
float electricType::damageMulti(PokemonClass pokemonTwo){
  float result = 0;
  if(pokemonTwo.pokeType == "Flying" || pokemonTwo.pokeTypeOne == "Flying" ||
    pokemonTwo.pokeType == "Electric" || pokemonTwo.pokeTypeOne == "Electric"){
    result += 0.5;
  }
  else if(pokemonTwo.pokeType == "Ground" || pokemonTwo.pokeTypeOne == "Ground"){
    result += 2;
  }
  else{
    result += 1;
  }

  return result;
};

float poisonType::damageMulti(PokemonClass pokemonTwo){
  float result = 0;
  if(pokemonTwo.pokeType == "Poison" || pokemonTwo.pokeTypeOne == "Poison"  || 
    pokemonTwo.pokeType == "Grass" || pokemonTwo.pokeTypeOne == "Grass"){
    result += 0.5;
  }
  else if(pokemonTwo.pokeType == "Ground" || pokemonTwo.pokeTypeOne == "Ground" ||
          pokemonTwo.pokeType == "Bug" || pokemonTwo.pokeType == "Bug"){
    result += 2;
  }
  else{
    result += 1;
  }

  return result;
};

float bugType::damageMulti(PokemonClass pokemonTwo){
  float result = 0;
  if(pokemonTwo.pokeType == "Fight" || pokemonTwo.pokeTypeOne == "Fight"  || 
    pokemonTwo.pokeType == "Ground" || pokemonTwo.pokeTypeOne == "Ground"   ||
    pokemonTwo.pokeType == "Grass" || pokemonTwo.pokeTypeOne == "Grass"){
    result += 0.5;
  }
  else if(pokemonTwo.pokeType == "Flying" || pokemonTwo.pokeTypeOne == "Flying" ||
          pokemonTwo.pokeType == "Poison" || pokemonTwo.pokeTypeOne == "Poison" ||
          pokemonTwo.pokeType == "Rock" || pokemonTwo.pokeType == "Rock" ||
          pokemonTwo.pokeType == "Fire" || pokemonTwo.pokeType == "Fire"){
    result += 2;
  }
  else{
    result += 1;
  }

  return result;
};

float normalType::damageMulti(PokemonClass pokemonTwo){
  float result = 0;
  if(pokemonTwo.pokeType == "Fight" || pokemonTwo.pokeTypeOne == "Fight"){
    result += 2;
  }
  else{
    result += 1;
  }

  return result;
};

float rockType::damageMulti(PokemonClass pokemonTwo){
  float result = 0;
  if(pokemonTwo.pokeType == "Normal" || pokemonTwo.pokeTypeOne == "Normal"  || 
    pokemonTwo.pokeType == "Flying" || pokemonTwo.pokeTypeOne == "Flying"   ||
    pokemonTwo.pokeType == "Poison" || pokemonTwo.pokeTypeOne == "Poison"   ||
    pokemonTwo.pokeType == "Fire" || pokemonTwo.pokeTypeOne == "Fire"){
    result += 0.5;
  }
  else if(pokemonTwo.pokeType == "Fight" || pokemonTwo.pokeTypeOne == "Fight"   ||
          pokemonTwo.pokeType == "Ground" || pokemonTwo.pokeTypeOne == "Ground" ||
          pokemonTwo.pokeType == "Water" || pokemonTwo.pokeType == "Water"      ||
          pokemonTwo.pokeType == "Grass" || pokemonTwo.pokeType == "Grass"){
    result += 2;
  }
  else{
    result += 1;
  }
  return result;
};
float groundType::damageMulti(PokemonClass pokemonTwo){
  float result = 0;
  if(pokemonTwo.pokeType == "Poison" || pokemonTwo.pokeTypeOne == "Poison"  || 
    pokemonTwo.pokeType == "Rock" || pokemonTwo.pokeTypeOne == "Rock"){
    result += 0.5;
  }
  else if(pokemonTwo.pokeType == "Water" || pokemonTwo.pokeType == "Water"||
          pokemonTwo.pokeType == "Grass" || pokemonTwo.pokeType == "Grass"){
    result += 2;
  }
  else{
    result += 1;
  }

  return result;
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