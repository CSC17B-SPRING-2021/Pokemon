#include <iostream>
#include "player.h"

using namespace std;


int main() 
{
	object drug, ball, revival;
	vector<object> bag;

	//Ten bottles of potin were given at the beginning.
	drug.num = 10;
	drug.name = "potion";

	//Transfer the data of the quantity and name of the liquid medicine into the vector
	bag.push_back(drug);

	//ten poke ball were given at the beginning.
	ball.num = 10;
	ball.name = "pokeball";
	bag.push_back(ball);

	//five revives were given at the beginning
	revival.num = 5;
	revival.name = "revival";
	bag.push_back(revival);

	pokemon po;
	//allow user to change the nickname for pokemon
	cout << "Please enter your pokemon's nickname: ";
	cin >> po.nickname;

	vector<pokemon> poke(6);
	poke.push_back(po);
	return 0;
	}

