#include <string>
#include <iostream>
#include <thread>
#include <chrono>
#include <time.h>
#define HEADER_H_
#include "Header.h"
#include <stdio.h>     
#include <stdlib.h>

using namespace std;



	int lomp[5] = { 5, 5, 5, 5, 5 };

int shop()

{
	int quotes;
	int choice;
	int merchant;
	int sword;
	int ring;
	int gorl;
	int shrekpaste;
	int gaintsToe;

	srand(time(NULL));
	quotes = 1 + (rand() % 7);

	if (quotes == 1) {
		cout << " Whaddaya buyin'? " << endl;
	}
	else if (quotes == 2) {
		cout << " Over here, stranger! " << endl;
	}
	else if (quotes == 3) {
		cout << " Got some rare things on sale, stranger! " << endl;
	}
	else if (quotes == 4) {
		cout << " Welcome! " << endl;
	}
	else if (quotes == 5) {
		cout << " Got somethin' that might interest ya'. " << endl;
	}
	else if (quotes == 6) {
		cout << " Got a selection of good things on sale, stranger. " << endl;
	}
	else if (quotes == 7) {
		cout << " Over here, stranger! " << endl;
	}
	cout << " What would you like to buy stranger? " << endl;
	cout << " _________________________________________ " << endl;
	cout << " || 1 -- ShrekPaste |+5 Hp      | [10G] || " << endl;
	cout << " || 2 -- Sword      |+5 Power   | [10G] ||" << endl;
	cout << " || 3 -- Ring       |+5 Agility | [10G] ||" << endl;
	cout << " || 4 -- Gorl       |+5 Stamina | [10G] ||" << endl;
	cout << " || 5 -- GaintsToe  |+5 Charisma| [10G] ||" << endl;
	cout << " _________________________________________" << endl;
	cin >> choice;


	if (choice == 1) {

	 getSkill0();

	 skill[0] = skill[0] + 5;

	}
	else if (choice == 2) {
	 getSkill1();
	 skill[1] = skill[1] + 5;
	}
	else if (choice == 3) {

	 getSkill2();

	 skill[2] = skill[2] + 5;
	}
	else if (choice == 4) {

	 getSkill3();

	 skill[3] = skill[3] + 5;
	
	}
	else if (choice == 5) {
		
	 getSkill4();

	 skill[4] = skill[4] + 5;

	}

	for (int i = 0; i < size(skill); i++) {
		cout << skill[i];
	}
	

	system("pause");
	return 0;
}