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


int skillSet(int sklPts, string name, int sklChoice, int skillPointInput, int xp) {
	
	
	int skill[6] = {10, 10, 10, 10, 10, 0 };
	
	do {

		
		cout << name << ", You have " << sklPts << " skill points left, what skill would you like to upgrade." << endl;
		cout << "1 = HP\n2 = Power\n3 = Agility\n4 = Stamina\n5 = Charisma\n6 = Lumpther (Ultimate)" << endl;
		cin >> sklChoice;
		if (sklChoice == 1)
		{
			cout << "How many points would you like to put into Power?\n >> ";
			cin >> skillPointInput;
			if (skillPointInput > sklPts)
			{
				cout << "You have " << sklPts << " , you need " << skillPointInput << endl;
			}
			else if (skillPointInput < 0)
			{
				cout << "Error not possible!";
			}
			else
			{
				skill[0] = skill[0] + skillPointInput;
				sklPts = sklPts - skillPointInput;
			}

		}
		else if (sklChoice == 2)
		{
			cout << "How many points would you like to put into Power?\n >> ";
			cin >> skillPointInput;
			if (skillPointInput > sklPts)
			{
				cout << "You have " << sklPts << " , you need " << skillPointInput << endl;
			}
			else if (skillPointInput < 0)
			{
				cout << "Error not possible!";
			}
			else
			{
				skill[1] = skill[1] + skillPointInput;
				sklPts = sklPts - skillPointInput;
			}

		}
		else if (sklChoice == 3)
		{
			cout << "How many points would you like to put into Agilty?\n >> ";
			cin >> skillPointInput;
			if (skillPointInput > sklPts)
			{
				cout << "You have " << sklPts << " , you need " << skillPointInput << endl;
			}
			else if (skillPointInput < 0)
			{
				cout << "Error not possible!";
			}
			else
			{
				skill[2] = skill[2] + skillPointInput;
				sklPts = sklPts - skillPointInput;
			}
		}
		else if (sklChoice == 4)
		{
			cout << "How many points would you like to put into Stamina?\n >> ";
			cin >> skillPointInput;
			if (skillPointInput > sklPts)
			{
				cout << "You have " << sklPts << " , you need " << skillPointInput << endl;
			}
			else if (skillPointInput < 0)
			{
				cout << "Error not possible!";
			}
			else
			{
				skill[3] = skill[3] + skillPointInput;
				sklPts = sklPts - skillPointInput;
			}
		}
		else if (sklChoice == 5)
		{
			cout << "How many points would you like to put into Chraisma?\n >> ";
			cin >> skillPointInput;
			if (skillPointInput > sklPts)
			{
				cout << "You have " << sklPts << " , you need " << skillPointInput << endl;
			}
			else if (skillPointInput < 0)
			{
				cout << "Error not possible!";
			}
			else
			{
				skill[4] = skill[4] + skillPointInput;
				sklPts = sklPts - skillPointInput;
			}
		}
		else if (sklChoice == 6 && xp >= 50)
		{
			cout << "How many points would you like to put into Lumpther?\n >> ";
			cin >> skillPointInput;
			if (skillPointInput > sklPts)
			{
				cout << "You have " << sklPts << " , you need " << skillPointInput << endl;
			}
			else if (skillPointInput < 0)
			{
				cout << "Error not possible!";
			}
			else
			{
				skill[5] = skill[5] + skillPointInput;
				sklPts = sklPts - skillPointInput;
			}
		}
		else
		{
			cout << "Big Gay";
		}
	} while (sklPts != 0);
	cout << skill[0] << " - HP" << endl << skill[1] << " - Power" << endl << skill[2] << " - Agility" << endl << skill[3] << " - Stamina" << endl << skill[4] << " - Chrasima" << endl << skill[5] << " - Lumpther" << endl;

	return 0;
}
		
		


int main()
{
	string name;

	int xp = 0;
	int gold = 0;
	int lomps = 0;
	int sklPts = 10;
	int sklChoice =0;
	int skillPointInput = 0;
	int goBack;

	

	cout << "What is your name Stranger Moth?\n >> ";
	cin >> name;


	skillSet( sklPts,  name,  sklChoice,  skillPointInput, xp);
	

	cout << "The Moth King, King of all LAMP, approaches you. He asks you to go to the cave and 'defeet' the monster there!\n";
	cout << "The king tells you it is south, so you go on your way.\n";
	cout << "As you enter the cave you here strage noises\n";
	randUno();

	system("pause");
	return 0;

}