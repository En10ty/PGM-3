#include "wall.h"
#include<iostream>
#include<string>
#include<iomanip>
#include <cstdlib>
#include <ctime>  //use to generate a randon number
#include<windows.h> //used to pause a windows display
using namespace std; 

wall::wall(string userName)
{
	name = userName; 
	position = 0; 
}

string wall::getname() const
{
	return name;
}

int wall::getposition() const
{
	return position; 
}

void wall::climb()
{
	int climbResult;
	climbResult = (rand() % 3) + 1;
	position = climbResult + position; 
	
}

void wall::drop()
{
	int dropResult; 
	dropResult = (rand() % 3) + 1; 
	position = position - dropResult; 

	if (position < 0) {
		position = 0; 
	}
}



