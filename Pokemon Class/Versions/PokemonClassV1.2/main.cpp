#include <iostream>
#include "PokemonClass.h"
#include <iostream>
using namespace std;
int main() {

  Pikachu pika;
  Charmander charmander;
  Geodude geodue;
  Caterpie caterpie;
  //testing function call
  pika.pokemonInfo();
  charmander.pokemonInfo();

  cout << geodue.damageMulti(geodue, caterpie) << endl;

  return 0;
}