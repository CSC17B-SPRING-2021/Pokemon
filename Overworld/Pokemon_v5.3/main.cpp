//Programmer:		Joshua Buckles, Zachary Romero
//Assignment:		Pokemon Group Project

//Description:		The purpose of this program is to create a C++ game as a group


//PreProcessor Directive
//This line of code causes the contents of another file to be
//inserted into the program

#include <cstdlib>                      //include C Standard General Utilities Library
#include <iomanip>                      //include iomanip liberary
#include <iostream>                     //include iostream
#include "Intro.h"                      //includes header to run Intro class
#include "Route1.h"                     //includes header to run Route1 class
#include "DefaultTowns.h"               //includes header to run DefaultTowns class



using namespace std; 

//Function Definition



int main() {                            //The following line of code begins every C++ Program

    static bool end = false;            //hold static bool for do while loop break
    
    
    Intro PlayerIntro;                  //creates object from Intro class
  PlayerIntro.GameIntro();              //Runs GameIntro from PlayerIntro Object
  PlayerIntro.GetPlayer();              //Runs member function from PlayerIntro Object
    PlayerIntro.GetRival();             //Runs member function from PlayerIntro Object
  PlayerIntro.Playerroom();             //Runs member function from PlayerIntro Object
  PlayerIntro.Playerhouse();             //Runs member function from PlayerIntro Object;
  PlayerIntro.PalletTown();             //Runs member function from PlayerIntro Object
  PlayerIntro.ProfessorOak();           //Runs member function from PlayerIntro Object
  Route1 Route1;                        //creates Route1 from Intro class
  Route1.Route1Intro();                 //Runs member function from Route1 Object
  Route1.Route1Defualt();               //Runs member function from Route1 Object
  DefaultTowns Towns;                   //Runs member function from Route1 Object
  do{  
    if(Route1.tile > 5){                //Check if the tile > 5 then you go into Viridian City, else you get put into Pallet Town
        Towns.ViridianCity();           //Runs ViridianCity from Towns object
        end = true;
    }
    else if(Route1.tile < 0){           
        Route1.DefaultPalletTown();     //Runs DefaultPalletTown from Route1 object
    }
  }while(end == false);                 //Ensures Check on Tile Variable to activate argument in Do/while loop
	return 0;
}
