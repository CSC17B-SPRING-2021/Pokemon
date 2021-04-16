#include <cstdlib>
#include <iomanip>
#include <iostream>
#include "Intro.h"
#include "Route1.h"
#include "DefaultTowns.h"



using namespace std;

int main() {
	
	Intro PlayerIntro;
  PlayerIntro.GameIntro();
  PlayerIntro.GetPlayer();
	PlayerIntro.GetRival();
  PlayerIntro.Playerroom();
  PlayerIntro.Playerhouse();
  PlayerIntro.PalletTown();
  PlayerIntro.ProfessorOak();
  Route1 Route1;
  Route1.Route1Intro();
  Route1.Route1Defualt();
   DefaultTowns Towns;
  do{
  if(Route1.tile > 5){                                                                   //if the tile > 5 then you go into Viridian City, else you get put into Pallet Town
        Towns.ViridianCity();
    }
    else if(Route1.tile < 0){
        //PalletTown();
        Route1.DefaultPalletTown();
    }
  }while(Route1.tile < 0);
  Towns.ViridianCity();
	return 0;
}
