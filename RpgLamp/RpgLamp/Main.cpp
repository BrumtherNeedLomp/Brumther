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

int cpuChoice;

int user;

int skill[6] = { 10, 10, 5, 4, 5, 0 };



int skillSet(int sklPts, string name, int sklChoice, int skillPointInput, int xp) {




	do {


		cout << name << ", You have " << sklPts << " skill points left, what skill would you like to upgrade." << endl;
		cout << "1 = HP\n2 = Power\n3 = Agility\n4 = Stamina\n5 = Charisma\n6 = Lumpther (Ultimate and 40 + xp required)" << endl;
		cin >> sklChoice;
		if (sklChoice == 1)
		{
			cout << "How many points would you like to put into Health?\n >> ";
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

int quest()
{
	int spookyLamp[5] = { 15 , 6, 15, 6, 2 };
	int dangerNoodle[5] = { 5, 20, 11, 2, 2 };
	int pokeyfish[5] = { 20, 5, 2, 5, 2, };
	int indianMan[5] = { 5, 5, 5, 5, 25 };
	int swegsavagejr[5] = { 50, 1, 1, 1, 1 };
	int bowsette[5] = { 20, 3, 2, 5, 15 };
	int chocomalk[5] = { 10, 5, 2, 10, 2 };
	int lordFarquad[5] = { 28, 6, 4, 8, 21 };





	system("CLS");

	cout << skill[0] << " - HP" << endl << skill[1] << " - Power" << endl << skill[2] << " - Agility" << endl << skill[3] << " - Stamina" << endl << skill[4] << " - Chrasima" << endl << skill[5] << " - Lumpther" << endl;

	cout << "The Moth King, King of all LAMP, approaches you. He asks you to go to the cave and 'defeet' the monster there!\n";
	cout << "The king tells you it is south, so you go on your way.\n";
	cout << "As you enter the cave you here strage noises\n";

	randUno();
	if (getNum() == 1 || getNum() == 8)
	{
		cout << "Danger Noodles stats are:\n " << dangerNoodle[0] << " - HP\n " << dangerNoodle[1] << " - Power\n " << dangerNoodle[2] << " - Agility\n " << dangerNoodle[3] << " - Stamina\n " << dangerNoodle[4] << " - Charisma\n";
		if (dangerNoodle[2] > skill[2])
		{
			do {
				srand(time(NULL));
				cpuChoice = 1 + (rand() % 2);
				if (cpuChoice == 1)
				{
					skill[0] = skill[0] - dangerNoodle[1];
					dangerNoodle[3] = dangerNoodle[3] - 2;
					if (skill[0] == 0)
					{
						cout << "YOU LOST";
						system("stop");
					}
				}
				else if (cpuChoice == 2);
				{
					if (dangerNoodle[4] > skill[4]) {}
				}

				if (dangerNoodle[3] == 1 || dangerNoodle[3] == 0)
				{
					cout << "Danger Noodle is out of stamina!!" << endl;

					cout << "What would you like to do?\n1 - Attack\n2 - Seduce\n3 - Run";
					cin >> user;

					if (user == 1)
					{
						dangerNoodle[0] = dangerNoodle[0] - skill[1];
					}
					else if (user == 2) {
						if (skill[4] > dangerNoodle[4])
						{
							cout << "You dance like a macho man! And it WORKS!!!" << endl;
						}
						else if (skill[4] < dangerNoodle[4])
						{
							cout << "You dance like nobody is watching...... which nobody is!" << endl;
						}

					}

				}
				else if (dangerNoodle[3] == 1 || dangerNoodle[3] == 0)
				{

				}
			} while (skill[0] != 0 || dangerNoodle[0] != 0);
			{

			}
		}






	}

	else if (getNum() == 2 || getNum() == 9)
	{
		cout << "SPOOOOOOOOOOOOOOOOOOOOOOOOOKY L-A-M-P stats are:\n " << spookyLamp[0] << " - HP\n " << spookyLamp[1] << " - Power\n " << spookyLamp[2] << " - Agility\n " << spookyLamp[3] << " - Stamina\n " << spookyLamp[4] << " - Charisma\n";
	}
	else if (getNum() == 3 || getNum() == 10)
	{
		cout << "Pokey Fish stats are:\n " << pokeyfish[0] << " - HP\n " << pokeyfish[1] << " - Power\n " << pokeyfish[2] << " - Agility\n " << pokeyfish[3] << " - Stamina\n " << pokeyfish[4] << " - Charisma\n";
	}
	else if (getNum() == 4 || getNum() == 11)
	{
		cout << "The Indian Man stats are:\n " << indianMan[0] << " - HP\n " << indianMan[1] << " - Power\n " << indianMan[2] << " - Agility\n " << indianMan[3] << " - Stamina\n " << indianMan[4] << " - Charisma\n";
	}
	else if (getNum() == 5 || getNum() == 12)
	{
		cout << "SWEGSAVAGEJR stats are:\n " << swegsavagejr[0] << " - HP\n " << swegsavagejr[1] << " - Power\n " << swegsavagejr[2] << " - Agility\n " << swegsavagejr[3] << " - Stamina\n " << swegsavagejr[4] << " - Charisma\n";
	}
	else if (getNum() == 6 || getNum() == 13)
	{
		cout << "CHOCOMALK stats are:\n " << chocomalk[0] << " - HP\n " << chocomalk[1] << " - Power\n " << chocomalk[2] << " - Agility\n " << chocomalk[3] << " - Stamina\n " << chocomalk[4] << " - Charisma\n";
	}
	else if (getNum() == 7 || getNum() == 14)
	{
		cout << "BOWSETTE stats are:\n " << bowsette[0] << " - HP\n " << bowsette[1] << " - Power\n " << bowsette[2] << " - Agility\n " << bowsette[3] << " - Stamina\n " << bowsette[4] << " - Charisma\n";
	}
	else
	{
		cout << "why broke";
	}
	return 0;
}
int getSkill0()
{
	return skill[0];
}
int getSkill1()
{
	return skill[1];
}
int getSkill2()
{
	return skill[2];
}
int getSkill3()
{
	return skill[3];
}
int getSkill4()
{
	return skill[4];
}
int getSkill5()
{
	return skill[5];
}


int main()
{
	string name;

	int xp = 0;
	int gold = 0;
	int lomps = 0;
	int sklPts = 10;
	int sklChoice = 0;
	int skillPointInput = 0;
	int goBack;

	cout << "What is your name Stranger Moth?\n >> ";
	cin >> name;

	skillSet(sklPts, name, sklChoice, skillPointInput, xp);

	quest();

	system("pause");
	return 0;
}