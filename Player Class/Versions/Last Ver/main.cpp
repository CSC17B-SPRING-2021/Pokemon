/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: daysk
 *
 * Created on 2021年4月5日, 下午7:33
 */

#include <cstdlib>
#include "player.h"
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

	playerclass player;

	itemclass drug("potion", 10);

	itemclass ball("pokeball", 10);

	itemclass revival("revival", 5);

	player.bagupdate(drug);
	player.bagupdate(ball);
	player.bagupdate(revival);





/*drug::drug() :itemclass(10, "potion") {
}

pokeball::pokeball() : itemclass(10, "pokeball") {
}

revival::revival() : itemclass(10, "revival") {
}*/
    return 0;
}

