#include <iostream>
#include "PokemonClass.h"
#include <iostream>
using namespace std;
int main() {

  Pikachu pika;
  Geodude geodue;
  Caterpie caterpie;
  Charmander charmander;
  //testing function call
  pika.pokemonInfo();
  charmander.pokemonInfo();
  cout << "--------------" << endl;
  cout << geodue.damageMulti(geodue, caterpie) << endl;

  return 0;
}