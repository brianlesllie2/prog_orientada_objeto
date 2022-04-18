//============================================================================
// Name        : dice_game.cpp
// Author      : brian
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
using namespace std;

class dice{
private:
	int _face_value;

public:
	int get_face_value();
	void roll();
};

class dice_game{
private:
	dice _dado1;
	dice _dado2;

public:
	bool play();
};


int main() {
	cout << "Ola Marilene" << endl; // prints !!!Hello World!!!

	dice_game game;

	if(game.play()){
		cout << "Vitoria!" << endl;
	}
	else{
		cout << "Derrota!" << endl;
	};

	return 0;
}

int dice::get_face_value(){
	return _face_value;
};

void dice::roll(){
	_face_value=(rand() % 6)+1;
};

bool dice_game::play(){
	int d1, d2;
	_dado1.roll();
	d1=_dado1.get_face_value();
	_dado2.roll();
	d2=_dado2.get_face_value();

	cout << "Dado 1: " << d1 <<", Dado 2: " << d2 <<endl;
	if((d1+d2)==7){
		return true;
	}
	else{
		return false;
	}
};
