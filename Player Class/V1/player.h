#pragma once
//library
#ifndef PLAYERCLASS_H
#define PLAYERCLASS_H
#include <string>
#include <vector>

using namespace std;

//create a object class
class object 
{
private:
	int max_num = 99;

public:
	int num;
	string name;
	void objectinfo();
};

class pokemon
{
private:
	int max_poke = 6;
public:
	string name;
	string nickname;

};



#endif // !PLAYERCLASS_H
