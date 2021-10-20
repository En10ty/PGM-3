
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>  //use to generate a randon number
#include<windows.h> //used to pause a windows display
using namespace std; 

class wall {
public:
	wall(string userName); 
	string getname() const; 
	int getposition() const;  
	void climb(); //mutator  
	void drop(); //mutator 

private:
	string name; 
	int position; 
};




