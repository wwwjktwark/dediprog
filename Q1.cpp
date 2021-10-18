#include<stdio.h>
#include<stdlib.h>
#include <iostream>
#include <string>

using namespace std;

class vehicle{
public:
	vehicle(){
	}
	string whatisit(){
		return " is vehicle ";	
	}
	virtual int howmanywheel(){
		return 0;
	}
};
class car : public vehicle{
public:
	car(){
		 wheel=4;
	}
	int howmanywheel(){
		return wheel;
	}
private:
	int wheel;
};

class motor : public vehicle{
public:
    	motor(){
		 wheel=2;
   	}
	int howmanywheel(){
		return wheel;
	}
private:
	int wheel;
};

int main()
{
   
   car bugatti;
   motor ducati;
   cout << "Bugatti" << bugatti.whatisit() << "with " << bugatti.howmanywheel() << " wheels" <<endl;
   cout << "Ducati" << ducati.whatisit() << "with " << ducati.howmanywheel() << " wheels" <<endl;
   
}
