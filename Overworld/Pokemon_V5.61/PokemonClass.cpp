#include "PokemonClass.h"
//Void function that checks affectivness against all types of pokemon
void PokemonClass::DmgPoke(int dmg, string MoveType) {
    int affectiveness = 1;
    if(this->pokeType=="Normal") {
            // Checks move affectiveness for Normal type
            if (MoveType == "Ghost") {
                dmg *= 0;
                cout << "There was no effect...";
            } else if (MoveType == "Fighting") {
                dmg *= 2;
                affectiveness++;
            } else {
                dmg *= 1;
            }
    }else if (this->pokeType=="Poison") {

            //checks move affectiveness for Poison
            if (MoveType == "Grass" || MoveType == "Poison") {
                dmg *= 0.5;
                affectiveness--;
            } else if (MoveType == "Bug" || MoveType == "Ground") {
                dmg *= 2;
                affectiveness++;
            } else {
                dmg *= 1;
            }
    }else if (this->pokeType=="Ground") {
        
            //check affectiveness for Ground Type
            if (MoveType == "Rock" || MoveType == "Poison") {
                dmg *= 0.5;
                affectiveness--;
            } else if (MoveType == "Water" || MoveType == "Grass") {
                dmg *= 2;
                affectiveness++;
            } else {
                dmg *= 1;
            }
    }else if (this->pokeType=="Electric") {
        
            // Checks move affectiveness for Electric
            if (MoveType == "Flying" || MoveType == "Electric") {
                dmg *= 0.5;
                affectiveness--;
            } else if (MoveType == "Ground") {
                dmg *= 2;
                affectiveness++;
            } else {
                dmg *= 1;
            }
    }else if(this->pokeType=="Grass") {

            //affectiveness check for Grass Type
            if (MoveType == "Water" || MoveType == "Ground" || MoveType == "Grass" || MoveType == "Electric") {
                dmg *= 0.5;
                affectiveness--;
            } else if (MoveType == "Flying" || MoveType == "Poison" || MoveType == "Bug" || MoveType == "Fire") {
                dmg *= 2;
                affectiveness++;
            } else {
                dmg *= 1;
            }
    }else if (this->pokeType=="Fire") {

            //checks move affectiveness for Fire
            if (MoveType == "Bug" || MoveType == "Fire" || MoveType == "Grass") {
                dmg *= 0.5;
                affectiveness--;
            } else if (MoveType == "Ground" || MoveType == "Rock" || MoveType == "Water") {
                dmg *= 2;
                affectiveness++;
            } else {
                dmg *= 1;
            }
    }else if (this->pokeType=="Water") {

            // Checks move affectiveness for Water
            if (MoveType == "Water" || MoveType == "Fire") {
                dmg *= 0.5;
                affectiveness--;
            } else if (MoveType == "Grass" || MoveType == "Electric") {
                dmg *= 2;
                affectiveness++;
            } else {
                dmg *= 1;
            }
    }else if (this->pokeType=="Flying") {
        
            if (MoveType == "Bug" || MoveType == "Grass") {
                dmg *= 0.5;
                affectiveness--;
            } else if (MoveType == "Electric" || MoveType == "Rock") {
                dmg *= 2;
                affectiveness++;
            } else {
                dmg *= 1;
            }
    }else if (this->pokeType=="Rock") {
        
            //affectiveness check for Rock Type
            if (MoveType == "Normal" || MoveType == "Flying" || MoveType == "Poison" || MoveType == "Fire") {
                dmg *= 0.5;
                affectiveness--;
            } else if (MoveType == "Fighting" || MoveType == "Ground" || MoveType == "Water" || MoveType == "Grass") {
                dmg *= 2;
                affectiveness++;
            } else {
                dmg *= 1;
            }
    }else if (this->pokeType=="Bug") {
        
            //affectiveness check for Bug Type
            if (MoveType == "Grass" || MoveType == "Ground" || MoveType == "Fighting") {
                dmg *= 0.5;
                affectiveness--;
            } else if (MoveType == "Flying" || MoveType == "Poison" || MoveType == "Rock" || MoveType == "Fire") {
                dmg *= 2;
                affectiveness++;
            } else {
                dmg *= 1;
            }
    }else {
            cout << endl;
    }
    //this must run a second time, checking for the 2nd pokemon type
    if (this->pokeTypeOne == "Normal") {

        // Checks move affectiveness for Normal type
        if (MoveType == "Ghost") {
            dmg *= 0;
            cout << "There was no effect...";
        } else if (MoveType == "Fighting") {
            dmg *= 2;
            affectiveness++;
        } else {
            dmg *= 1;
        }
    } else if (this->pokeTypeOne == "Poison") {

        //checks move affectiveness for Poison
        if (MoveType == "Grass" || MoveType == "Poison") {
            dmg *= 0.5;
            affectiveness--;
        } else if (MoveType == "Bug" || MoveType == "Ground") {
            dmg *= 2;
            affectiveness++;
        } else {
            dmg *= 1;
        }
    } else if (this->pokeTypeOne == "Ground") {

        //check affectiveness for Ground Type
        if (MoveType == "Rock" || MoveType == "Poison") {
            dmg *= 0.5;
            affectiveness--;
        } else if (MoveType == "Water" || MoveType == "Grass") {
            dmg *= 2;
            affectiveness++;
        } else {
            dmg *= 1;
        }
    } else if (this->pokeTypeOne == "Electric") {

        // Checks move affectiveness for Electric
        if (MoveType == "Flying" || MoveType == "Electric") {
            dmg *= 0.5;
            affectiveness--;
        } else if (MoveType == "Ground") {
            dmg *= 2;
            affectiveness++;
        } else {
            dmg *= 1;
        }
    } else if (this->pokeTypeOne == "Grass") {

        //affectiveness check for Grass Type
        if (MoveType == "Water" || MoveType == "Ground" || MoveType == "Grass" || MoveType == "Electric") {
            dmg *= 0.5;
            affectiveness--;
        } else if (MoveType == "Flying" || MoveType == "Poison" || MoveType == "Bug" || MoveType == "Fire") {
            dmg *= 2;
            affectiveness++;
        } else {
            dmg *= 1;
        }
    } else if (this->pokeTypeOne == "Fire") {
        //checks move affectiveness for Fire
        if (MoveType == "Bug" || MoveType == "Fire" || MoveType == "Grass") {
            dmg *= 0.5;
            affectiveness--;
        } else if (MoveType == "Ground" || MoveType == "Rock" || MoveType == "Water") {
            dmg *= 2;
            affectiveness++;
        } else {
            dmg *= 1;
        }
    } else if (this->pokeTypeOne == "Water") {

        // Checks move affectiveness for Water
        if (MoveType == "Water" || MoveType == "Fire") {
            dmg *= 0.5;
            affectiveness--;
        } else if (MoveType == "Grass" || MoveType == "Electric") {
            dmg *= 2;
            affectiveness++;
        } else {
            dmg *= 1;
        }
    } else if (this->pokeTypeOne == "Flying") {
        if (MoveType == "Bug" || MoveType == "Grass") {
            dmg *= 0.5;
            affectiveness--;
        } else if (MoveType == "Electric" || MoveType == "Rock") {
            dmg *= 2;
            affectiveness++;
        } else {
            dmg *= 1;
        }
    } else if (this->pokeTypeOne == "Rock") {
        //affectiveness check for Rock Type
        if (MoveType == "Normal" || MoveType == "Flying" || MoveType == "Poison" || MoveType == "Fire") {
            dmg *= 0.5;
            affectiveness--;
        } else if (MoveType == "Fighting" || MoveType == "Ground" || MoveType == "Water" || MoveType == "Grass") {
            dmg *= 2;
            affectiveness++;
        } else {
            dmg *= 1;
        }
    } else if (this->pokeTypeOne == "Bug") {
        //affectiveness check for Bug Type
        if (MoveType == "Grass" || MoveType == "Ground" || MoveType == "Fighting") {
            dmg *= 0.5;
            affectiveness--;
        } else if (MoveType == "Flying" || MoveType == "Poison" || MoveType == "Rock" || MoveType == "Fire") {
            dmg *= 2;
            affectiveness++;
        } else {
            dmg *= 1;
        }
    } else {
        cout << endl;
    }
    //sets the damage equal to a value based on the pokemon's defense
    dmg = dmg * (1 - (this->baseDef / 100));
    if (dmg <= 0) {
        dmg = 1;
    }
    //Checks if the attack set the pokemon's health to zero
    //Else subtract the amount the attack did to from the pokemon's current health
    if (currentHealth - dmg <= 0) {
        currentHealth = 0;
    } else currentHealth -= dmg;
    //Checks whether an attack was very affective based on the affectivness variable
    //set up in the begin, which was added throughout lines 352 - 587
    //If affective then print it was affective, else print it wasn't affective
    if (affectiveness < 1) {
        cout << "That attack was not very affective...\n";
    } else if (affectiveness > 1) {
        cout << "That attack was super affective!\n";
    }
    //Displays the amount of damage the attack did after all the checks
    cout << "The attack did " << dmg << "damage!\n";

}

//void function that displays pokemon information
void PokemonClass::pokemonInfo() {
    cout << pokeName << endl;
    cout << "No." << pokemonNum << endl;
    cout << pokeType << endl;
    cout << "Health: " << healthStat << endl;
    cout << "Attack: " << baseAttack << endl;
    cout << "Speed: " << baseSpeed << endl;
};

//void function that heals the pokemon
void PokemonClass::HealPoke(int healed) {
  //if the current health plus the amount heal is greater than 
  //the health stat of the poke then set the current health to 
  //the pokemon's health stat
  //Else heal the pokemon 
    if (currentHealth + healed >= healthStat) {
        currentHealth = healthStat;
    } else
        currentHealth += healed;
}

//void function that displays the pokemon's current health 
void PokemonClass::ShowHP() {
    cout << currentHealth << "/" << healthStat;
}

//void function that displays the attack menu for pokemon
void PokemonClass::attackMenu() {
    cout << "1. " << this->Move1.Name << "    Type:" << this->Move1.type << "    Accuracy: " << this->Move1.accuracy << endl;
    cout << "2. " << this->Move2.Name << "    Type:" << this->Move2.type << "    Accuracy: " << this->Move2.accuracy << endl;
}







