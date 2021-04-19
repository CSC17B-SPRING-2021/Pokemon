/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   player.cpp
 * Author: daysk
 *
 * Created on 2021年4月5日, 下午7:34
 */

#include <iostream>
#include "player.h"


int itemclass::getNum() {
	return this->ItemNum;
}

string itemclass::getName() {
	return this->ItemName;
}

void itemclass::setNum(int num) {
	this->ItemNum = num;
}

void itemclass::showItem() {
	cout << "Item name: " << this->ItemName << endl;
	cout << "Quantity: " << this->ItemNum << endl;
}


void playerclass::ShowItemInfo() {
	for (int i = 0; i < this->bag.size(); i++) {
		this->bag[i].showItem();
		cout << endl;
	}
}
//
//void playerclass::getitem(itemclass) {
//	this->bag.push_back(drug);
//	this->bag.push_back(pokeball);
//	this->bag.push_back(revival);
//}

bool playerclass::useItem(string itemName, int num) {
	for (int i = 0; i < this->bag.size(); i++) {
		if (this->bag[i].getName() == itemName) {
			int presentCnt = this->bag[i].getNum();
			if (presentCnt < num)
			{
				cout << "Insufficient quantity, failed to use." << endl;
				return false;
			}
			else
			{
				int newNum = this->bag[i].getNum() - num;
				this->bag[i].setNum(newNum);
				cout << "successful use." << endl;
				return true;
			}
		}
		else
			continue;
	}
}



