//============================================================================
// Name        : dice_game.cpp
// Author      : brian
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Dice{
private:
	int _face_value;

public:
	Dice(){
		srand(time(NULL));
		roll();
	}
	int get_face_value();
	void roll();
};

class Dice_game{
private:
	Dice _dado1;
	Dice _dado2;

public:
	bool play();
};


int main() {
	cout << "Ola Marilene" << endl; // prints Ola Marilene
	int vit=0, der=0;

	Dice_game game;
	for(int i=0; i<100; i++){
		if(game.play()){
			cout << "Vitoria!" << endl;
			vit++;
		}
		else{
			cout << "Derrota!" << endl;
			der++;
		};
	}
	cout << "Vitorias: " << vit <<", Derrotas: " << der <<endl;

	return 0;
}

int Dice::get_face_value(){
	return _face_value;
};

void Dice::roll(){
	//srand(time(NULL));
	_face_value=(rand() % 6)+1;
};

bool Dice_game::play(){
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
