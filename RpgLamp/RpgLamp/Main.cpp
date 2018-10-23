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

int xp = 0;

int gold = 0;

int user;

int skill[6] = { 10, 10, 5, 4, 5, 0 };
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

	system("cls");

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


		skill[0] = skill[0] + 5;

	}
	else if (choice == 2) {

		skill[1] = skill[1] + 5;
	}
	else if (choice == 3) {


		skill[2] = skill[2] + 5;
	}
	else if (choice == 4) {



		skill[3] = skill[3] + 5;

	}
	else if (choice == 5) {


		skill[4] = skill[4] + 5;

	}


	cout <<endl << skill[0] << " - HP" << endl << skill[1] << " - Power" << endl << skill[2] << " - Agility" << endl << skill[3] << " - Stamina" << endl << skill[4] << " - Chrasima" << endl << skill[5] << " - Lumpther" << endl;


	system("pause");
	system("STOP");
	return 0;
}

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
	cout << skill[0] << " - HP" << endl << skill[1] << " - Power" << endl << skill[2] << " - Agility" << endl << skill[3] << " - Stamina" << endl << skill[4] << " - Chrasima" << endl << skill[5] << " - Lumpther" << endl << endl;

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
			do 
			{
				if (dangerNoodle[3] != 1 || dangerNoodle[3] != 0)
				{
					srand(time(NULL)); // rng
					cpuChoice = 1 + (rand() % 2);
					if (cpuChoice == 1)
					{
						cout << "Danger Noodle decided to attack.\nIt did " << dangerNoodle[1] / 2 << " damage!\n";
						skill[0] = skill[0] - (dangerNoodle[1] / 2);
						cout << "You have " << skill[0] << " - HP left!\n";
						dangerNoodle[3] = dangerNoodle[3] - 1;
						if (skill[0] <= 0)
						{
							DeathScreen();
						}
						
					}
					else if (cpuChoice == 2)
					{
						cout << "Danger Noodle decided to charm you.\n";
						if (dangerNoodle[4] < skill[4] || dangerNoodle[4] == skill[4])
						{
							cout << "The charm did not work!\n";
							dangerNoodle[3] = dangerNoodle[3] - 1;
						}
						else if (dangerNoodle[4] > skill[4] && skill[1] > 5)
						{
							cout << "The charm worked!\nYou lost 2 attack.\n";
							skill[1] = skill[1] - 2;
							cout << "You have " << skill[1] << " - Attack now!\n";
							dangerNoodle[3] = dangerNoodle[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!\n";
					}
				}
				else if (dangerNoodle[3] == 1 || dangerNoodle[3] == 0)
				{
					cout << "Danger Noodle can't attack!\n";
					dangerNoodle[3] = dangerNoodle[3] + 2;
				}

				cout << "What would you like to do?\n1 - Attack\n2 - Charm \n>>";
				cin >> user;
				
				if (skill[3] != 1 || skill[3] != 0)
				{
					if (user == 1)
					{
						cout << "You decided to attack!\nYou did "<< skill[1] / 2 << " damage!\n";
						dangerNoodle[0] = dangerNoodle[0] - (skill[1] / 2);
						cout << "Danger Noodle has " << dangerNoodle[0] << " - HP left!\n";
						skill[3] = skill[3] - 1;
						if (dangerNoodle[0] <= 0)
						{
							shop();
						}

					}
					else if (user == 2)
					{
						cout << "You decided to charm Danger Noodle.\n";
						if (dangerNoodle[4] < skill[4] || dangerNoodle[4] == skill[4] && dangerNoodle[1] > 5)
						{
							cout << "The charm worked!\nDanger Noodle lost 2 attack.\n";
							dangerNoodle[1] = dangerNoodle[1] - 2;
							cout << "Danger Noodle has " << dangerNoodle[1] << " - Attack now!\n";
							skill[3] = skill[3] - 1;
						}
						else if (dangerNoodle[4] > skill[4])
						{
							cout << "The charm did not work!\n";
							skill[3] = skill[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!";
					}
				}
				else if (skill[3] == 1 || skill[3] == 0)
				{
					cout << "You cant attack can't attack!\n";
					skill[3] = skill[3] + 2;
				}
				else
				{
					cout << "Broke";
				}
			} while (skill[0] != 0 || dangerNoodle[0] != 0);
		}
		else if (dangerNoodle[2] < skill[2])
		{
			do
			{
				cout << "What would you like to do?\n1 - Attack\n2 - Charm \n>>";
				cin >> user;

				if (skill[3] != 1 || skill[3] != 0)
				{
					if (user == 1)
					{
						cout << "You decided to attack!\nYou did " << skill[1] / 2 << " damage!\n";
						dangerNoodle[0] = dangerNoodle[0] - (skill[1] / 2);
						cout << "Danger Noodle has " << dangerNoodle[0] << " - HP left!\n";
						skill[3] = skill[3] - 1;
						if (dangerNoodle[0] <= 0)
						{
							shop();
						}


					}
					else if (user == 2)
					{
						cout << "You decided to charm Danger Noodle.\n";
						if (dangerNoodle[4] < skill[4] || dangerNoodle[4] == skill[4] && dangerNoodle[1] > 5)
						{
							cout << "The charm worked!\nDanger Noodle lost 2 attack.\n";
							dangerNoodle[1] = dangerNoodle[1] - 2;
							cout << "Danger Noodle has " << dangerNoodle[1] << " - Attack now!\n";
							skill[3] = skill[3] - 1;
						}
						else if (dangerNoodle[4] > skill[4])
						{
							cout << "The charm did not work!\n";
							skill[3] = skill[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!";
					}
				}
				else if (skill[3] == 1 || skill[3] == 0)
				{
					cout << "You cant attack can't attack!\n";
				
					skill[3] = skill [3] + 2;
				}
				else
				{
					cout << "Broke";
				}
				if (dangerNoodle[3] != 1 || dangerNoodle[3] != 0)
				{
					srand(time(NULL)); // rng
					cpuChoice = 1 + (rand() % 2);
					if (cpuChoice == 1)
					{
						cout << "Danger Noodle decided to attack.\nIt did " << dangerNoodle[1] / 2 << " damage!\n";
						skill[0] = skill[0] - (dangerNoodle[1] / 2);
						cout << "You have " << skill[0] << " - HP left!\n";
						dangerNoodle[3] = dangerNoodle[3] - 1;
						if (skill[0] <= 0)
						{
							DeathScreen();
						}
					}
					else if (cpuChoice == 2)
					{
						cout << "Danger Noodle decided to charm you.\n";
						if (dangerNoodle[4] < skill[4] || dangerNoodle[4] == skill[4])
						{
							cout << "The charm did not work!\n";
							dangerNoodle[3] = dangerNoodle[3] - 1;
						}
						else if (dangerNoodle[4] > skill[4] && skill[1] > 5)
						{
							cout << "The charm worked!\nYou lost 2 attack.\n";
							skill[1] = skill[1] - 2;
							cout << "You have " << skill[1] << " - Attack now!\n";
							dangerNoodle[3] = dangerNoodle[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!\n";
					}
				}
				else if (dangerNoodle[3] == 1 || dangerNoodle[3] == 0)
				{
					cout << "Danger Noodle can't attack!\n";
					dangerNoodle[3] = dangerNoodle[3] + 2;
				}
				else
				{
					cout << "How";
				}


			} while (skill[0] != 0 || dangerNoodle[0] != 0);
		}
		else if (dangerNoodle[2] == skill[2])
		{
		do
		{
			cout << "What would you like to do?\n1 - Attack\n2 - Charm \n>>";
			cin >> user;

			if (skill[3] != 1 || skill[3] != 0)
			{
				if (user == 1)
				{
					cout << "You decided to attack!\nYou did " << skill[1] / 2 << " damage!\n";
					dangerNoodle[0] = dangerNoodle[0] - (skill[1] / 2);
					cout << "Danger Noodle has " << dangerNoodle[0] << " - HP left!\n";
					skill[3] = skill [3] - 1;
					if (dangerNoodle[0] <= 0)
					{
						shop();
					}

				}
				else if (user == 2)
				{
					cout << "You decided to charm Danger Noodle.\n";
					if (dangerNoodle[4] < skill[4] || dangerNoodle[4] == skill[4] && dangerNoodle[1] > 5)
					{
						cout << "The charm worked!\nDanger Noodle lost 2 attack.\n";
						dangerNoodle[1] = dangerNoodle[1] - 2;
						cout << "Danger Noodle has " << dangerNoodle[1] << " - Attack now!\n";
						skill[3] = skill[3] - 1;
					}
					else if (dangerNoodle[4] > skill[4])
					{
						cout << "The charm did not work!\n";
						skill[3] = skill[3] - 1;
					}
					else
					{
						cout << "HOW!";
					}
				}
				else
				{
					cout << "HOW!";
				}
			}
			else if (skill[3] == 1 || skill[3] == 0)
			{
				cout << "You cant attack can't attack!\n";
				skill[3] = skill[3] + 2;
			}
			else
			{
				cout << "Broke";
			}
			if (dangerNoodle[3] != 1 || dangerNoodle[3] != 0)
			{
				srand(time(NULL)); // rng
				cpuChoice = 1 + (rand() % 2);
				if (cpuChoice == 1)
				{
					cout << "Danger Noodle decided to attack.\nIt did " << dangerNoodle[1] / 2 << " damage!\n";
					skill[0] = skill[0] - (dangerNoodle[1] / 2);
					cout << "You have " << skill[0] << " - HP left!\n";
					dangerNoodle[3] = dangerNoodle[3] - 1;
					if (skill[0] <= 0)
					{
						DeathScreen();
					}
				}
				else if (cpuChoice == 2)
				{
					cout << "Danger Noodle decided to charm you.\n";
					if (dangerNoodle[4] < skill[4] || dangerNoodle[4] == skill[4])
					{
						cout << "The charm did not work!\n";
						dangerNoodle[3] = dangerNoodle[3] - 1;
					}
					else if (dangerNoodle[4] > skill[4] && skill[1] > 5)
					{
						cout << "The charm worked!\nYou lost 2 attack.\n";
						skill[1] = skill[1] - 2;
						cout << "You have " << skill[1] << " - Attack now!\n";
						dangerNoodle[3] = dangerNoodle[3] - 1;
					}
					else
					{
						cout << "HOW!";
					}
				}
				else
				{
					cout << "HOW!\n";
				}
			}
			else if (dangerNoodle[3] == 1 || dangerNoodle[3] == 0)
			{
				cout << "Danger Noodle can't attack!\n";
				dangerNoodle[3] = dangerNoodle[3] + 2;
			}
			else
			{
				cout << "How";
			}


		} while (skill[0] != 0 || dangerNoodle[0] != 0);
		}
		else
		{
			cout << "HOW!";
		}
		cout << "You barely make it out alive and as you exit the cave two strangers walk past you and you try to warn them whats in there but it looks like they are prepared." << endl;
	}
	

	else if (getNum() == 2 || getNum() == 9)
	{
		cout << "SPOOOOOOOOOOOOOOOOOOOOOOOOOKY L-A-M-P stats are:\n " << spookyLamp[0] << " - HP\n " << spookyLamp[1] << " - Power\n " << spookyLamp[2] << " - Agility\n " << spookyLamp[3] << " - Stamina\n " << spookyLamp[4] << " - Charisma\n";
		if (spookyLamp[2] > spookyLamp[2])
		{
			do
			{
				if (spookyLamp[3] != 1 || spookyLamp[3] != 0)
				{
					srand(time(NULL)); // rng
					cpuChoice = 1 + (rand() % 1);
					if (cpuChoice == 1)
					{
						cout << "Danger Noodle decided to attack.\nIt did " << spookyLamp[1] / 2 << " damage!\n";
						skill[0] = skill[0] - (spookyLamp[1] / 2);
						cout << "You have " << skill[0] << " - HP left!\n";
						spookyLamp[3] = spookyLamp[3] - 1;
						if (skill[0] <= 0)
						{
							DeathScreen();
						}

					}
					else if (cpuChoice == 2)
					{
						cout << "Danger Noodle decided to charm you.\n";
						if (spookyLamp[4] < skill[4] || spookyLamp[4] == skill[4])
						{
							cout << "The charm did not work!\n";
							spookyLamp[3] = spookyLamp[3] - 1;
						}
						else if (spookyLamp[4] > skill[4] && skill[1] > 5)
						{
							cout << "The charm worked!\nYou lost 2 attack.\n";
							skill[1] = skill[1] - 2;
							cout << "You have " << skill[1] << " - Attack now!\n";
							spookyLamp[3] = spookyLamp[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!\n";
					}
				}
				else if (spookyLamp[3] == 1 || spookyLamp[3] == 0)
				{
					cout << "Danger Noodle can't attack!\n";
					spookyLamp[3] = spookyLamp[3] + 2;
				}

				cout << "What would you like to do?\n1 - Attack\n2 - Charm \n>>";
				cin >> user;

				if (skill[3] != 1 || skill[3] != 0)
				{
					if (user == 1)
					{
						cout << "You decided to attack!\nYou did " << skill[1] / 2 << " damage!\n";
						spookyLamp[0] = spookyLamp[0] - (skill[1] / 2);
						cout << "Danger Noodle has " << spookyLamp[0] << " - HP left!\n";
						skill[3] = skill[3] - 1;
						if (spookyLamp[0] <= 0)
						{
							shop();
						}

					}
					else if (user == 2)
					{
						cout << "You decided to charm Danger Noodle.\n";
						if (spookyLamp[4] < skill[4] || spookyLamp[4] == skill[4] && spookyLamp[1] > 5)
						{
							cout << "The charm worked!\nDanger Noodle lost 2 attack.\n";
							spookyLamp[1] = spookyLamp[1] - 2;
							cout << "Danger Noodle has " << spookyLamp[1] << " - Attack now!\n";
							skill[3] = skill[3] - 1;
						}
						else if (spookyLamp[4] > skill[4])
						{
							cout << "The charm did not work!\n";
							skill[3] = skill[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!";
					}
				}
				else if (skill[3] == 1 || skill[3] == 0)
				{
					cout << "You cant attack can't attack!\n";
					skill[3] = skill[3] + 2;
				}
				else
				{
					cout << "Broke";
				}
			} while (skill[0] != 0 || spookyLamp[0] != 0);
		}
		else if (spookyLamp[2] < skill[2])
		{
			do
			{
				cout << "What would you like to do?\n1 - Attack\n2 - Charm \n>>";
				cin >> user;

				if (skill[3] != 1 || skill[3] != 0)
				{
					if (user == 1)
					{
						cout << "You decided to attack!\nYou did " << skill[1] / 2 << " damage!\n";
						spookyLamp[0] = spookyLamp[0] - (skill[1] / 2);
						cout << "Danger Noodle has " << spookyLamp[0] << " - HP left!\n";
						skill[3] = skill[3] - 1;
						if (spookyLamp[0] <= 0)
						{
							shop();
						}


					}
					else if (user == 2)
					{
						cout << "You decided to charm Danger Noodle.\n";
						if (spookyLamp[4] < skill[4] || spookyLamp[4] == skill[4] && spookyLamp[1] > 5)
						{
							cout << "The charm worked!\nDanger Noodle lost 2 attack.\n";
							spookyLamp[1] = spookyLamp[1] - 2;
							cout << "Danger Noodle has " << spookyLamp[1] << " - Attack now!\n";
							skill[3] = skill[3] - 1;
						}
						else if (spookyLamp[4] > skill[4])
						{
							cout << "The charm did not work!\n";
							skill[3] = skill[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!";
					}
				}
				else if (skill[3] == 1 || skill[3] == 0)
				{
					cout << "You cant attack can't attack!\n";

					skill[3] = skill[3] + 2;
				}
				else
				{
					cout << "Broke";
				}
				if (spookyLamp[3] != 1 || spookyLamp[3] != 0)
				{
					srand(time(NULL)); // rng
					cpuChoice = 1 + (rand() % 2);
					if (cpuChoice == 1)
					{
						cout << "Danger Noodle decided to attack.\nIt did " << spookyLamp[1] / 2 << " damage!\n";
						skill[0] = skill[0] - (spookyLamp[1] / 2);
						cout << "You have " << skill[0] << " - HP left!\n";
						spookyLamp[3] = spookyLamp[3] - 1;
						if (skill[0] <= 0)
						{
							DeathScreen();
						}
					}
					else if (cpuChoice == 2)
					{
						cout << "Danger Noodle decided to charm you.\n";
						if (spookyLamp[4] < skill[4] || spookyLamp[4] == skill[4])
						{
							cout << "The charm did not work!\n";
							spookyLamp[3] = spookyLamp[3] - 1;
						}
						else if (spookyLamp[4] > skill[4] && skill[1] > 5)
						{
							cout << "The charm worked!\nYou lost 2 attack.\n";
							skill[1] = skill[1] - 2;
							cout << "You have " << skill[1] << " - Attack now!\n";
							spookyLamp[3] = spookyLamp[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!\n";
					}
				}
				else if (spookyLamp[3] == 1 || spookyLamp[3] == 0)
				{
					cout << "Danger Noodle can't attack!\n";
					spookyLamp[3] = spookyLamp[3] + 2;
				}
				else
				{
					cout << "How";
				}


			} while (skill[0] != 0 || spookyLamp[0] != 0);
		}
		else if (spookyLamp[2] == skill[2])
		{
			do
			{
				cout << "What would you like to do?\n1 - Attack\n2 - Charm \n>>";
				cin >> user;

				if (skill[3] != 1 || skill[3] != 0)
				{
					if (user == 1)
					{
						cout << "You decided to attack!\nYou did " << skill[1] / 2 << " damage!\n";
						spookyLamp[0] = spookyLamp[0] - (skill[1] / 2);
						cout << "Danger Noodle has " << spookyLamp[0] << " - HP left!\n";
						skill[3] = skill[3] - 1;
						if (spookyLamp[0] <= 0)
						{
							shop();
						}

					}
					else if (user == 2)
					{
						cout << "You decided to charm Danger Noodle.\n";
						if (spookyLamp[4] < skill[4] || spookyLamp[4] == skill[4] && spookyLamp[1] > 5)
						{
							cout << "The charm worked!\nDanger Noodle lost 2 attack.\n";
							spookyLamp[1] = spookyLamp[1] - 2;
							cout << "Danger Noodle has " << spookyLamp[1] << " - Attack now!\n";
							skill[3] = skill[3] - 1;
						}
						else if (spookyLamp[4] > skill[4])
						{
							cout << "The charm did not work!\n";
							skill[3] = skill[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!";
					}
				}
				else if (skill[3] == 1 || skill[3] == 0)
				{
					cout << "You cant attack can't attack!\n";
					skill[3] = skill[3] + 2;
				}
				else
				{
					cout << "Broke";
				}
				if (spookyLamp[3] != 1 || spookyLamp[3] != 0)
				{
					srand(time(NULL)); // rng
					cpuChoice = 1 + (rand() % 2);
					if (cpuChoice == 1)
					{
						cout << "Danger Noodle decided to attack.\nIt did " << spookyLamp[1] / 2 << " damage!\n";
						skill[0] = skill[0] - (spookyLamp[1] / 2);
						cout << "You have " << skill[0] << " - HP left!\n";
						spookyLamp[3] = spookyLamp[3] - 1;
						if (skill[0] <= 0)
						{
							DeathScreen();
						}
					}
					else if (cpuChoice == 2)
					{
						cout << "Danger Noodle decided to charm you.\n";
						if (spookyLamp[4] < skill[4] || spookyLamp[4] == skill[4])
						{
							cout << "The charm did not work!\n";
							spookyLamp[3] = spookyLamp[3] - 1;
						}
						else if (spookyLamp[4] > skill[4] && skill[1] > 5)
						{
							cout << "The charm worked!\nYou lost 2 attack.\n";
							skill[1] = skill[1] - 2;
							cout << "You have " << skill[1] << " - Attack now!\n";
							spookyLamp[3] = spookyLamp[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!\n";
					}
				}
				else if (spookyLamp[3] == 1 || spookyLamp[3] == 0)
				{
					cout << "Danger Noodle can't attack!\n";
					spookyLamp[3] = spookyLamp[3] + 2;
				}
				else
				{
					cout << "How";
				}


			} while (skill[0] != 0 || spookyLamp[0] != 0);
		}
		else
		{
			cout << "HOW!";
		}
		cout << "You feel like you are going to have nightmarres tonight after the fight...... maybe it's because the lamp cursed you." << endl;
	
	}
	else if (getNum() == 3 || getNum() == 10)
	{
		cout << "Pokey Fish stats are:\n " << pokeyfish[0] << " - HP\n " << pokeyfish[1] << " - Power\n " << pokeyfish[2] << " - Agility\n " << pokeyfish[3] << " - Stamina\n " << pokeyfish[4] << " - Charisma\n";
		if (pokeyfish[2] > pokeyfish[2])
		{
			do
			{
				if (pokeyfish[3] != 1 || pokeyfish[3] != 0)
				{
					srand(time(NULL)); // rng
					cpuChoice = 1 + (rand() % 2);
					if (cpuChoice == 1)
					{
						cout << "Danger Noodle decided to attack.\nIt did " << pokeyfish[1] / 2 << " damage!\n";
						skill[0] = skill[0] - (pokeyfish[1] / 2);
						cout << "You have " << skill[0] << " - HP left!\n";
						pokeyfish[3] = pokeyfish[3] - 1;
						if (skill[0] <= 0)
						{
							DeathScreen();
						}

					}
					else if (cpuChoice == 2)
					{
						cout << "Danger Noodle decided to charm you.\n";
						if (pokeyfish[4] < skill[4] || pokeyfish[4] == skill[4])
						{
							cout << "The charm did not work!\n";
							pokeyfish[3] = pokeyfish[3] - 1;
						}
						else if (pokeyfish[4] > skill[4] && skill[1] > 5)
						{
							cout << "The charm worked!\nYou lost 2 attack.\n";
							skill[1] = skill[1] - 2;
							cout << "You have " << skill[1] << " - Attack now!\n";
							pokeyfish[3] = pokeyfish[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!\n";
					}
				}
				else if (pokeyfish[3] == 1 || pokeyfish[3] == 0)
				{
					cout << "Danger Noodle can't attack!\n";
					pokeyfish[3] = pokeyfish[3] + 2;
				}

				cout << "What would you like to do?\n1 - Attack\n2 - Charm \n>>";
				cin >> user;

				if (skill[3] != 1 || skill[3] != 0)
				{
					if (user == 1)
					{
						cout << "You decided to attack!\nYou did " << skill[1] / 2 << " damage!\n";
						pokeyfish[0] = pokeyfish[0] - (skill[1] / 2);
						cout << "Danger Noodle has " << pokeyfish[0] << " - HP left!\n";
						skill[3] = skill[3] - 1;
						if (pokeyfish[0] <= 0)
						{
							shop();
						}

					}
					else if (user == 2)
					{
						cout << "You decided to charm Danger Noodle.\n";
						if (pokeyfish[4] < skill[4] || pokeyfish[4] == skill[4] && pokeyfish[1] > 5)
						{
							cout << "The charm worked!\nDanger Noodle lost 2 attack.\n";
							pokeyfish[1] = pokeyfish[1] - 2;
							cout << "Danger Noodle has " << pokeyfish[1] << " - Attack now!\n";
							skill[3] = skill[3] - 1;
						}
						else if (pokeyfish[4] > skill[4])
						{
							cout << "The charm did not work!\n";
							skill[3] = skill[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!";
					}
				}
				else if (skill[3] == 1 || skill[3] == 0)
				{
					cout << "You cant attack can't attack!\n";
					skill[3] = skill[3] + 2;
				}
				else
				{
					cout << "Broke";
				}
			} while (skill[0] != 0 || pokeyfish[0] != 0);
		}
		else if (pokeyfish[2] < skill[2])
		{
			do
			{
				cout << "What would you like to do?\n1 - Attack\n2 - Charm \n>>";
				cin >> user;

				if (skill[3] != 1 || skill[3] != 0)
				{
					if (user == 1)
					{
						cout << "You decided to attack!\nYou did " << skill[1] / 2 << " damage!\n";
						pokeyfish[0] = pokeyfish[0] - (skill[1] / 2);
						cout << "Danger Noodle has " << pokeyfish[0] << " - HP left!\n";
						skill[3] = skill[3] - 1;
						if (pokeyfish[0] <= 0)
						{
							shop();
						}


					}
					else if (user == 2)
					{
						cout << "You decided to charm Danger Noodle.\n";
						if (pokeyfish[4] < skill[4] || pokeyfish[4] == skill[4] && pokeyfish[1] > 5)
						{
							cout << "The charm worked!\nDanger Noodle lost 2 attack.\n";
							pokeyfish[1] = pokeyfish[1] - 2;
							cout << "Danger Noodle has " << pokeyfish[1] << " - Attack now!\n";
							skill[3] = skill[3] - 1;
						}
						else if (pokeyfish[4] > skill[4])
						{
							cout << "The charm did not work!\n";
							skill[3] = skill[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!";
					}
				}
				else if (skill[3] == 1 || skill[3] == 0)
				{
					cout << "You cant attack can't attack!\n";

					skill[3] = skill[3] + 2;
				}
				else
				{
					cout << "Broke";
				}
				if (pokeyfish[3] != 1 || pokeyfish[3] != 0)
				{
					srand(time(NULL)); // rng
					cpuChoice = 1 + (rand() % 2);
					if (cpuChoice == 1)
					{
						cout << "Danger Noodle decided to attack.\nIt did " << pokeyfish[1] / 2 << " damage!\n";
						skill[0] = skill[0] - (pokeyfish[1] / 2);
						cout << "You have " << skill[0] << " - HP left!\n";
						pokeyfish[3] = pokeyfish[3] - 1;
						if (skill[0] <= 0)
						{
							DeathScreen();
						}
					}
					else if (cpuChoice == 2)
					{
						cout << "Danger Noodle decided to charm you.\n";
						if (pokeyfish[4] < skill[4] || pokeyfish[4] == skill[4])
						{
							cout << "The charm did not work!\n";
							pokeyfish[3] = pokeyfish[3] - 1;
						}
						else if (pokeyfish[4] > skill[4] && skill[1] > 5)
						{
							cout << "The charm worked!\nYou lost 2 attack.\n";
							skill[1] = skill[1] - 2;
							cout << "You have " << skill[1] << " - Attack now!\n";
							pokeyfish[3] = pokeyfish[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!\n";
					}
				}
				else if (pokeyfish[3] == 1 || pokeyfish[3] == 0)
				{
					cout << "Danger Noodle can't attack!\n";
					pokeyfish[3] = pokeyfish[3] + 2;
				}
				else
				{
					cout << "How";
				}


			} while (skill[0] != 0 || pokeyfish[0] != 0);
		}
		else if (pokeyfish[2] == skill[2])
		{
			do
			{
				cout << "What would you like to do?\n1 - Attack\n2 - Charm \n>>";
				cin >> user;

				if (skill[3] != 1 || skill[3] != 0)
				{
					if (user == 1)
					{
						cout << "You decided to attack!\nYou did " << skill[1] / 2 << " damage!\n";
						pokeyfish[0] = pokeyfish[0] - (skill[1] / 2);
						cout << "Danger Noodle has " << pokeyfish[0] << " - HP left!\n";
						skill[3] = skill[3] - 1;
						if (pokeyfish[0] <= 0)
						{
							shop();
						}

					}
					else if (user == 2)
					{
						cout << "You decided to charm Danger Noodle.\n";
						if (pokeyfish[4] < skill[4] || pokeyfish[4] == skill[4] && pokeyfish[1] > 5)
						{
							cout << "The charm worked!\nDanger Noodle lost 2 attack.\n";
							pokeyfish[1] = pokeyfish[1] - 2;
							cout << "Danger Noodle has " << pokeyfish[1] << " - Attack now!\n";
							skill[3] = skill[3] - 1;
						}
						else if (pokeyfish[4] > skill[4])
						{
							cout << "The charm did not work!\n";
							skill[3] = skill[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!";
					}
				}
				else if (skill[3] == 1 || skill[3] == 0)
				{
					cout << "You cant attack can't attack!\n";
					skill[3] = skill[3] + 2;
				}
				else
				{
					cout << "Broke";
				}
				if (pokeyfish[3] != 1 || pokeyfish[3] != 0)
				{
					srand(time(NULL)); // rng
					cpuChoice = 1 + (rand() % 2);
					if (cpuChoice == 1)
					{
						cout << "Danger Noodle decided to attack.\nIt did " << pokeyfish[1] / 2 << " damage!\n";
						skill[0] = skill[0] - (pokeyfish[1] / 2);
						cout << "You have " << skill[0] << " - HP left!\n";
						pokeyfish[3] = pokeyfish[3] - 1;
						if (skill[0] <= 0)
						{
							DeathScreen();
						}
					}
					else if (cpuChoice == 2)
					{
						cout << "Danger Noodle decided to charm you.\n";
						if (pokeyfish[4] < skill[4] || pokeyfish[4] == skill[4])
						{
							cout << "The charm did not work!\n";
							pokeyfish[3] = pokeyfish[3] - 1;
						}
						else if (pokeyfish[4] > skill[4] && skill[1] > 5)
						{
							cout << "The charm worked!\nYou lost 2 attack.\n";
							skill[1] = skill[1] - 2;
							cout << "You have " << skill[1] << " - Attack now!\n";
							pokeyfish[3] = pokeyfish[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!\n";
					}
				}
				else if (pokeyfish[3] == 1 || pokeyfish[3] == 0)
				{
					cout << "Danger Noodle can't attack!\n";
					pokeyfish[3] = pokeyfish[3] + 2;
				}
				else
				{
					cout << "How";
				}


			} while (skill[0] != 0 || pokeyfish[0] != 0);
		}
		else
		{
			cout << "HOW!";
		}
		cout << "You fell stinging in your veins as you leave the cave....... maybe its from POKEYFISH's venom." << endl;
	}
	else if (getNum() == 4 || getNum() == 11)
	{
		cout << "The Indian Man stats are:\n " << indianMan[0] << " - HP\n " << indianMan[1] << " - Power\n " << indianMan[2] << " - Agility\n " << indianMan[3] << " - Stamina\n " << indianMan[4] << " - Charisma\n";
		if (indianMan[2] > indianMan[2])
		{
			do
			{
				if (indianMan[3] != 1 || indianMan[3] != 0)
				{
					srand(time(NULL)); // rng
					cpuChoice = 1 + (rand() % 2);
					if (cpuChoice == 1)
					{
						cout << "Danger Noodle decided to attack.\nIt did " << indianMan[1] / 2 << " damage!\n";
						skill[0] = skill[0] - (indianMan[1] / 2);
						cout << "You have " << skill[0] << " - HP left!\n";
						indianMan[3] = indianMan[3] - 1;
						if (skill[0] <= 0)
						{
							DeathScreen();
						}

					}
					else if (cpuChoice == 2)
					{
						cout << "Danger Noodle decided to charm you.\n";
						if (indianMan[4] < skill[4] || indianMan[4] == skill[4])
						{
							cout << "The charm did not work!\n";
							indianMan[3] = indianMan[3] - 1;
						}
						else if (indianMan[4] > skill[4] && skill[1] > 5)
						{
							cout << "The charm worked!\nYou lost 2 attack.\n";
							skill[1] = skill[1] - 2;
							cout << "You have " << skill[1] << " - Attack now!\n";
							indianMan[3] = indianMan[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!\n";
					}
				}
				else if (indianMan[3] == 1 || indianMan[3] == 0)
				{
					cout << "Danger Noodle can't attack!\n";
					indianMan[3] = indianMan[3] + 2;
				}

				cout << "What would you like to do?\n1 - Attack\n2 - Charm \n>>";
				cin >> user;

				if (skill[3] != 1 || skill[3] != 0)
				{
					if (user == 1)
					{
						cout << "You decided to attack!\nYou did " << skill[1] / 2 << " damage!\n";
						indianMan[0] = indianMan[0] - (skill[1] / 2);
						cout << "Danger Noodle has " << indianMan[0] << " - HP left!\n";
						skill[3] = skill[3] - 1;
						if (indianMan[0] <= 0)
						{
							shop();
						}

					}
					else if (user == 2)
					{
						cout << "You decided to charm Danger Noodle.\n";
						if (indianMan[4] < skill[4] || indianMan[4] == skill[4] && indianMan[1] > 5)
						{
							cout << "The charm worked!\nDanger Noodle lost 2 attack.\n";
							indianMan[1] = indianMan[1] - 2;
							cout << "Danger Noodle has " << indianMan[1] << " - Attack now!\n";
							skill[3] = skill[3] - 1;
						}
						else if (indianMan[4] > skill[4])
						{
							cout << "The charm did not work!\n";
							skill[3] = skill[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!";
					}
				}
				else if (skill[3] == 1 || skill[3] == 0)
				{
					cout << "You cant attack can't attack!\n";
					skill[3] = skill[3] + 2;
				}
				else
				{
					cout << "Broke";
				}
			} while (skill[0] != 0 || indianMan[0] != 0);
		}
		else if (indianMan[2] < skill[2])
		{
			do
			{
				cout << "What would you like to do?\n1 - Attack\n2 - Charm \n>>";
				cin >> user;

				if (skill[3] != 1 || skill[3] != 0)
				{
					if (user == 1)
					{
						cout << "You decided to attack!\nYou did " << skill[1] / 2 << " damage!\n";
						indianMan[0] = indianMan[0] - (skill[1] / 2);
						cout << "Danger Noodle has " << indianMan[0] << " - HP left!\n";
						skill[3] = skill[3] - 1;
						if (indianMan[0] <= 0)
						{
							shop();
						}


					}
					else if (user == 2)
					{
						cout << "You decided to charm Danger Noodle.\n";
						if (indianMan[4] < skill[4] || indianMan[4] == skill[4] && indianMan[1] > 5)
						{
							cout << "The charm worked!\nDanger Noodle lost 2 attack.\n";
							indianMan[1] = indianMan[1] - 2;
							cout << "Danger Noodle has " << indianMan[1] << " - Attack now!\n";
							skill[3] = skill[3] - 1;
						}
						else if (indianMan[4] > skill[4])
						{
							cout << "The charm did not work!\n";
							skill[3] = skill[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!";
					}
				}
				else if (skill[3] == 1 || skill[3] == 0)
				{
					cout << "You cant attack can't attack!\n";

					skill[3] = skill[3] + 2;
				}
				else
				{
					cout << "Broke";
				}
				if (indianMan[3] != 1 || indianMan[3] != 0)
				{
					srand(time(NULL)); // rng
					cpuChoice = 1 + (rand() % 2);
					if (cpuChoice == 1)
					{
						cout << "Danger Noodle decided to attack.\nIt did " << indianMan[1] / 2 << " damage!\n";
						skill[0] = skill[0] - (indianMan[1] / 2);
						cout << "You have " << skill[0] << " - HP left!\n";
						indianMan[3] = indianMan[3] - 1;
						if (skill[0] <= 0)
						{
							DeathScreen();
						}
					}
					else if (cpuChoice == 2)
					{
						cout << "Danger Noodle decided to charm you.\n";
						if (indianMan[4] < skill[4] || indianMan[4] == skill[4])
						{
							cout << "The charm did not work!\n";
							indianMan[3] = indianMan[3] - 1;
						}
						else if (indianMan[4] > skill[4] && skill[1] > 5)
						{
							cout << "The charm worked!\nYou lost 2 attack.\n";
							skill[1] = skill[1] - 2;
							cout << "You have " << skill[1] << " - Attack now!\n";
							indianMan[3] = indianMan[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!\n";
					}
				}
				else if (indianMan[3] == 1 || indianMan[3] == 0)
				{
					cout << "Danger Noodle can't attack!\n";
					indianMan[3] = indianMan[3] + 2;
				}
				else
				{
					cout << "How";
				}


			} while (skill[0] != 0 || indianMan[0] != 0);
		}
		else if (indianMan[2] == skill[2])
		{
			do
			{
				cout << "What would you like to do?\n1 - Attack\n2 - Charm \n>>";
				cin >> user;

				if (skill[3] != 1 || skill[3] != 0)
				{
					if (user == 1)
					{
						cout << "You decided to attack!\nYou did " << skill[1] / 2 << " damage!\n";
						indianMan[0] = indianMan[0] - (skill[1] / 2);
						cout << "Danger Noodle has " << indianMan[0] << " - HP left!\n";
						skill[3] = skill[3] - 1;
						if (indianMan[0] <= 0)
						{
							shop();
						}

					}
					else if (user == 2)
					{
						cout << "You decided to charm Danger Noodle.\n";
						if (indianMan[4] < skill[4] || indianMan[4] == skill[4] && indianMan[1] > 5)
						{
							cout << "The charm worked!\nDanger Noodle lost 2 attack.\n";
							indianMan[1] = indianMan[1] - 2;
							cout << "Danger Noodle has " << indianMan[1] << " - Attack now!\n";
							skill[3] = skill[3] - 1;
						}
						else if (indianMan[4] > skill[4])
						{
							cout << "The charm did not work!\n";
							skill[3] = skill[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!";
					}
				}
				else if (skill[3] == 1 || skill[3] == 0)
				{
					cout << "You cant attack can't attack!\n";
					skill[3] = skill[3] + 2;
				}
				else
				{
					cout << "Broke";
				}
				if (indianMan[3] != 1 || indianMan[3] != 0)
				{
					srand(time(NULL)); // rng
					cpuChoice = 1 + (rand() % 2);
					if (cpuChoice == 1)
					{
						cout << "Danger Noodle decided to attack.\nIt did " << indianMan[1] / 2 << " damage!\n";
						skill[0] = skill[0] - (indianMan[1] / 2);
						cout << "You have " << skill[0] << " - HP left!\n";
						indianMan[3] = indianMan[3] - 1;
						if (skill[0] <= 0)
						{
							DeathScreen();
						}
					}
					else if (cpuChoice == 2)
					{
						cout << "Danger Noodle decided to charm you.\n";
						if (indianMan[4] < skill[4] || indianMan[4] == skill[4])
						{
							cout << "The charm did not work!\n";
							indianMan[3] = indianMan[3] - 1;
						}
						else if (indianMan[4] > skill[4] && skill[1] > 5)
						{
							cout << "The charm worked!\nYou lost 2 attack.\n";
							skill[1] = skill[1] - 2;
							cout << "You have " << skill[1] << " - Attack now!\n";
							indianMan[3] = indianMan[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!\n";
					}
				}
				else if (indianMan[3] == 1 || indianMan[3] == 0)
				{
					cout << "Danger Noodle can't attack!\n";
					indianMan[3] = indianMan[3] + 2;
				}
				else
				{
					cout << "How";
				}


			} while (skill[0] != 0 || indianMan[0] != 0);
		}
		else
		{
			cout << "HOW!";
		}
		cout << "After the fight you try to get on your phone..... but it looks like the INDIAN MAN blocked your internet!" << endl;
	}
	else if (getNum() == 5 || getNum() == 12)
	{
		cout << "SWEGSAVAGEJR stats are:\n " << swegsavagejr[0] << " - HP\n " << swegsavagejr[1] << " - Power\n " << swegsavagejr[2] << " - Agility\n " << swegsavagejr[3] << " - Stamina\n " << swegsavagejr[4] << " - Charisma\n";
		if (swegsavagejr[2] > swegsavagejr[2])
		{
			do
			{
				if (swegsavagejr[3] != 1 || swegsavagejr[3] != 0)
				{
					srand(time(NULL)); // rng
					cpuChoice = 1 + (rand() % 2);
					if (cpuChoice == 1)
					{
						cout << "Danger Noodle decided to attack.\nIt did " << swegsavagejr[1] / 2 << " damage!\n";
						skill[0] = skill[0] - (swegsavagejr[1] / 2);
						cout << "You have " << skill[0] << " - HP left!\n";
						swegsavagejr[3] = swegsavagejr[3] - 1;
						if (skill[0] <= 0)
						{
							DeathScreen();
						}

					}
					else if (cpuChoice == 2)
					{
						cout << "Danger Noodle decided to charm you.\n";
						if (swegsavagejr[4] < skill[4] || swegsavagejr[4] == skill[4])
						{
							cout << "The charm did not work!\n";
							swegsavagejr[3] = swegsavagejr[3] - 1;
						}
						else if (swegsavagejr[4] > skill[4] && skill[1] > 5)
						{
							cout << "The charm worked!\nYou lost 2 attack.\n";
							skill[1] = skill[1] - 2;
							cout << "You have " << skill[1] << " - Attack now!\n";
							swegsavagejr[3] = swegsavagejr[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!\n";
					}
				}
				else if (swegsavagejr[3] == 1 || swegsavagejr[3] == 0)
				{
					cout << "Danger Noodle can't attack!\n";
					swegsavagejr[3] = swegsavagejr[3] + 2;
				}

				cout << "What would you like to do?\n1 - Attack\n2 - Charm \n>>";
				cin >> user;

				if (skill[3] != 1 || skill[3] != 0)
				{
					if (user == 1)
					{
						cout << "You decided to attack!\nYou did " << skill[1] / 2 << " damage!\n";
						swegsavagejr[0] = swegsavagejr[0] - (skill[1] / 2);
						cout << "Danger Noodle has " << swegsavagejr[0] << " - HP left!\n";
						skill[3] = skill[3] - 1;
						if (swegsavagejr[0] <= 0)
						{
							shop();
						}

					}
					else if (user == 2)
					{
						cout << "You decided to charm Danger Noodle.\n";
						if (swegsavagejr[4] < skill[4] || swegsavagejr[4] == skill[4] && swegsavagejr[1] > 5)
						{
							cout << "The charm worked!\nDanger Noodle lost 2 attack.\n";
							swegsavagejr[1] = swegsavagejr[1] - 2;
							cout << "Danger Noodle has " << swegsavagejr[1] << " - Attack now!\n";
							skill[3] = skill[3] - 1;
						}
						else if (swegsavagejr[4] > skill[4])
						{
							cout << "The charm did not work!\n";
							skill[3] = skill[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!";
					}
				}
				else if (skill[3] == 1 || skill[3] == 0)
				{
					cout << "You cant attack can't attack!\n";
					skill[3] = skill[3] + 2;
				}
				else
				{
					cout << "Broke";
				}
			} while (skill[0] != 0 || swegsavagejr[0] != 0);
		}
		else if (swegsavagejr[2] < skill[2])
		{
			do
			{
				cout << "What would you like to do?\n1 - Attack\n2 - Charm \n>>";
				cin >> user;

				if (skill[3] != 1 || skill[3] != 0)
				{
					if (user == 1)
					{
						cout << "You decided to attack!\nYou did " << skill[1] / 2 << " damage!\n";
						swegsavagejr[0] = swegsavagejr[0] - (skill[1] / 2);
						cout << "Danger Noodle has " << swegsavagejr[0] << " - HP left!\n";
						skill[3] = skill[3] - 1;
						if (swegsavagejr[0] <= 0)
						{
							shop();
						}


					}
					else if (user == 2)
					{
						cout << "You decided to charm Danger Noodle.\n";
						if (swegsavagejr[4] < skill[4] || swegsavagejr[4] == skill[4] && swegsavagejr[1] > 5)
						{
							cout << "The charm worked!\nDanger Noodle lost 2 attack.\n";
							swegsavagejr[1] = swegsavagejr[1] - 2;
							cout << "Danger Noodle has " << swegsavagejr[1] << " - Attack now!\n";
							skill[3] = skill[3] - 1;
						}
						else if (swegsavagejr[4] > skill[4])
						{
							cout << "The charm did not work!\n";
							skill[3] = skill[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!";
					}
				}
				else if (skill[3] == 1 || skill[3] == 0)
				{
					cout << "You cant attack can't attack!\n";

					skill[3] = skill[3] + 2;
				}
				else
				{
					cout << "Broke";
				}
				if (swegsavagejr[3] != 1 || swegsavagejr[3] != 0)
				{
					srand(time(NULL)); // rng
					cpuChoice = 1 + (rand() % 2);
					if (cpuChoice == 1)
					{
						cout << "Danger Noodle decided to attack.\nIt did " << swegsavagejr[1] / 2 << " damage!\n";
						skill[0] = skill[0] - (swegsavagejr[1] / 2);
						cout << "You have " << skill[0] << " - HP left!\n";
						swegsavagejr[3] = swegsavagejr[3] - 1;
						if (skill[0] <= 0)
						{
							DeathScreen();
						}
					}
					else if (cpuChoice == 2)
					{
						cout << "Danger Noodle decided to charm you.\n";
						if (swegsavagejr[4] < skill[4] || swegsavagejr[4] == skill[4])
						{
							cout << "The charm did not work!\n";
							swegsavagejr[3] = swegsavagejr[3] - 1;
						}
						else if (swegsavagejr[4] > skill[4] && skill[1] > 5)
						{
							cout << "The charm worked!\nYou lost 2 attack.\n";
							skill[1] = skill[1] - 2;
							cout << "You have " << skill[1] << " - Attack now!\n";
							swegsavagejr[3] = swegsavagejr[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!\n";
					}
				}
				else if (swegsavagejr[3] == 1 || swegsavagejr[3] == 0)
				{
					cout << "Danger Noodle can't attack!\n";
					swegsavagejr[3] = swegsavagejr[3] + 2;
				}
				else
				{
					cout << "How";
				}


			} while (skill[0] != 0 || swegsavagejr[0] != 0);
		}
		else if (swegsavagejr[2] == skill[2])
		{
			do
			{
				cout << "What would you like to do?\n1 - Attack\n2 - Charm \n>>";
				cin >> user;

				if (skill[3] != 1 || skill[3] != 0)
				{
					if (user == 1)
					{
						cout << "You decided to attack!\nYou did " << skill[1] / 2 << " damage!\n";
						swegsavagejr[0] = swegsavagejr[0] - (skill[1] / 2);
						cout << "Danger Noodle has " << swegsavagejr[0] << " - HP left!\n";
						skill[3] = skill[3] - 1;
						if (swegsavagejr[0] <= 0)
						{
							shop();
						}

					}
					else if (user == 2)
					{
						cout << "You decided to charm Danger Noodle.\n";
						if (swegsavagejr[4] < skill[4] || swegsavagejr[4] == skill[4] && swegsavagejr[1] > 5)
						{
							cout << "The charm worked!\nDanger Noodle lost 2 attack.\n";
							swegsavagejr[1] = swegsavagejr[1] - 2;
							cout << "Danger Noodle has " << swegsavagejr[1] << " - Attack now!\n";
							skill[3] = skill[3] - 1;
						}
						else if (swegsavagejr[4] > skill[4])
						{
							cout << "The charm did not work!\n";
							skill[3] = skill[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!";
					}
				}
				else if (skill[3] == 1 || skill[3] == 0)
				{
					cout << "You cant attack can't attack!\n";
					skill[3] = skill[3] + 2;
				}
				else
				{
					cout << "Broke";
				}
				if (swegsavagejr[3] != 1 || swegsavagejr[3] != 0)
				{
					srand(time(NULL)); // rng
					cpuChoice = 1 + (rand() % 2);
					if (cpuChoice == 1)
					{
						cout << "Danger Noodle decided to attack.\nIt did " << swegsavagejr[1] / 2 << " damage!\n";
						skill[0] = skill[0] - (spookyLamp[1] / 2);
						cout << "You have " << skill[0] << " - HP left!\n";
						spookyLamp[3] = spookyLamp[3] - 1;
						if (skill[0] <= 0)
						{
							DeathScreen();
						}
					}
					else if (cpuChoice == 2)
					{
						cout << "Danger Noodle decided to charm you.\n";
						if (swegsavagejr[4] < skill[4] || swegsavagejr[4] == skill[4])
						{
							cout << "The charm did not work!\n";
							swegsavagejr[3] = swegsavagejr[3] - 1;
						}
						else if (swegsavagejr[4] > skill[4] && skill[1] > 5)
						{
							cout << "The charm worked!\nYou lost 2 attack.\n";
							skill[1] = skill[1] - 2;
							cout << "You have " << skill[1] << " - Attack now!\n";
							swegsavagejr[3] = swegsavagejr[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!\n";
					}
				}
				else if (swegsavagejr[3] == 1 || swegsavagejr[3] == 0)
				{
					cout << "Danger Noodle can't attack!\n";
					swegsavagejr[3] = swegsavagejr[3] + 2;
				}
				else
				{
					cout << "How";
				}


			} while (skill[0] != 0 || swegsavagejr[0] != 0);
		}
		else
		{
			cout << "HOW!";
		}
		cout << "When you leave the cave two strangers try to talk to you...... but you can't hear them after the screaming of SWEGSAVAGEJR!" << endl;
	}
	else if (getNum() == 6 || getNum() == 13)
	{ 
		
		cout << "CHOCOMALK stats are:\n " << chocomalk [0] << " - HP\n " << chocomalk[1] << " - Power\n " << chocomalk[2] << " - Agility\n " << chocomalk[3] << " - Stamina\n " << chocomalk[4] << " - Charisma\n";
		if (chocomalk[2] > chocomalk[2])
		{
			do
			{
				if (chocomalk[3] != 1 || chocomalk[3] != 0)
				{
					srand(time(NULL)); // rng
					cpuChoice = 1 + (rand() % 2);
					if (cpuChoice == 1)
					{
						cout << "Chocomalk decided to attack.\nIt did " << chocomalk[1] / 2 << " damage!\n";
						skill[0] = skill[0] - (chocomalk[1] / 2);
						cout << "You have " << skill[0] << " - HP left!\n";
						chocomalk[3] = chocomalk[3] - 1;
						if (skill[0] <= 0)
						{
							DeathScreen();
						}

					}
					else if (cpuChoice == 2)
					{
						cout << "Chocomalk decided to charm you.\n";
						if (chocomalk[4] < skill[4] || chocomalk[4] == skill[4])
						{
							cout << "The charm did not work!\n";
							chocomalk[3] = chocomalk[3] - 1;
						}
						else if (chocomalk[4] > skill[4] && skill[1] > 5)
						{
							cout << "The charm worked!\nYou lost 2 attack.\n";
							skill[1] = skill[1] - 2;
							cout << "You have " << skill[1] << " - Attack now!\n";
							chocomalk[3] = chocomalk[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!\n";
					}
				}
				else if (chocomalk[3] == 1 || chocomalk[3] == 0)
				{
					cout << "Chocomalk can't attack!\n";
					chocomalk[3] = chocomalk[3] + 2;
				}

				cout << "What would you like to do?\n1 - Attack\n2 - Charm \n>>";
				cin >> user;

				if (skill[3] != 1 || skill[3] != 0)
				{
					if (user == 1)
					{
						cout << "You decided to attack!\nYou did " << skill[1] / 2 << " damage!\n";
						chocomalk[0] = chocomalk[0] - (skill[1] / 2);
						cout << "Chocomalk has " << chocomalk[0] << " - HP left!\n";
						skill[3] = skill[3] - 1;
						if (chocomalk[0] <= 0)
						{
							shop();
						}

					}
					else if (user == 2)
					{
						cout << "You decided to charm Chocomalk.\n";
						if (chocomalk[4] < skill[4] || chocomalk[4] == skill[4] && chocomalk[1] > 5)
						{
							cout << "The charm worked!\nChocomalk lost 2 attack.\n";
							chocomalk[1] = chocomalk[1] - 2;
							cout << "Chocomalk has " << chocomalk[1] << " - Attack now!\n";
							skill[3] = skill[3] - 1;
						}
						else if (chocomalk[4] > skill[4])
						{
							cout << "The charm did not work!\n";
							skill[3] = skill[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!";
					}
				}
				else if (skill[3] == 1 || skill[3] == 0)
				{
					cout << "You cant attack can't attack!\n";
					skill[3] = skill[3] + 2;
				}
				else
				{
					cout << "Broke";
				}
			} while (skill[0] != 0 || chocomalk[0] != 0);
		}
		else if (chocomalk[2] < skill[2])
		{
			do
			{
				cout << "What would you like to do?\n1 - Attack\n2 - Charm \n>>";
				cin >> user;

				if (skill[3] != 1 || skill[3] != 0)
				{
					if (user == 1)
					{
						cout << "You decided to attack!\nYou did " << skill[1] / 2 << " damage!\n";
						chocomalk[0] = chocomalk[0] - (skill[1] / 2);
						cout << "Chocomalk has " << chocomalk[0] << " - HP left!\n";
						skill[3] = skill[3] - 1;
						if (chocomalk[0] <= 0)
						{
							shop();
						}


					}
					else if (user == 2)
					{
						cout << "You decided to charm Chocomalk.\n";
						if (chocomalk[4] < skill[4] || chocomalk[4] == skill[4] && chocomalk[1] > 5)
						{
							cout << "The charm worked!\nChocomalk lost 2 attack.\n";
							chocomalk[1] = chocomalk[1] - 2;
							cout << "Chocomalk has " << chocomalk[1] << " - Attack now!\n";
							skill[3] = skill[3] - 1;
						}
						else if (chocomalk[4] > skill[4])
						{
							cout << "The charm did not work!\n";
							skill[3] = skill[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!";
					}
				}
				else if (skill[3] == 1 || skill[3] == 0)
				{
					cout << "You cant attack can't attack!\n";

					skill[3] = skill[3] + 2;
				}
				else
				{
					cout << "Broke";
				}
				if (chocomalk[3] != 1 || chocomalk[3] != 0)
				{
					srand(time(NULL)); // rng
					cpuChoice = 1 + (rand() % 2);
					if (cpuChoice == 1)
					{
						cout << "Chocomalk decided to attack.\nIt did " << chocomalk[1] / 2 << " damage!\n";
						skill[0] = skill[0] - (chocomalk[1] / 2);
						cout << "You have " << skill[0] << " - HP left!\n";
						chocomalk[3] = chocomalk[3] - 1;
						if (skill[0] <= 0)
						{
							DeathScreen();
						}
					}
					else if (cpuChoice == 2)
					{
						cout << "Chocomalk decided to charm you.\n";
						if (chocomalk[4] < skill[4] || chocomalk[4] == skill[4])
						{
							cout << "The charm did not work!\n";
							chocomalk[3] = chocomalk[3] - 1;
						}
						else if (chocomalk[4] > skill[4] && skill[1] > 5)
						{
							cout << "The charm worked!\nYou lost 2 attack.\n";
							skill[1] = skill[1] - 2;
							cout << "You have " << skill[1] << " - Attack now!\n";
							chocomalk[3] = chocomalk[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!\n";
					}
				}
				else if (chocomalk[3] == 1 || chocomalk[3] == 0)
				{
					cout << "Chocomalk can't attack!\n";
					chocomalk[3] = chocomalk[3] + 2;
				}
				else
				{
					cout << "How";
				}


			} while (skill[0] != 0 || chocomalk[0] != 0);
		}
		else if (chocomalk[2] == skill[2])
		{
			do
			{
				cout << "What would you like to do?\n1 - Attack\n2 - Charm \n>>";
				cin >> user;

				if (skill[3] != 1 || skill[3] != 0)
				{
					if (user == 1)
					{
						cout << "You decided to attack!\nYou did " << skill[1] / 2 << " damage!\n";
						chocomalk[0] = chocomalk[0] - (skill[1] / 2);
						cout << "Chocomalk has " << chocomalk[0] << " - HP left!\n";
						skill[3] = skill[3] - 1;
						if (chocomalk[0] <= 0)
						{
							shop();
						}

					}
					else if (user == 2)
					{
						cout << "You decided to charm Chocomalk.\n";
						if (chocomalk[4] < skill[4] || chocomalk[4] == skill[4] && chocomalk[1] > 5)
						{
							cout << "The charm worked!\nChocomalk lost 2 attack.\n";
							chocomalk[1] = chocomalk[1] - 2;
							cout << "Chocomalk has " << chocomalk[1] << " - Attack now!\n";
							skill[3] = skill[3] - 1;
						}
						else if (chocomalk[4] > skill[4])
						{
							cout << "The charm did not work!\n";
							skill[3] = skill[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!";
					}
				}
				else if (skill[3] == 1 || skill[3] == 0)
				{
					cout << "You cant attack can't attack!\n";
					skill[3] = skill[3] + 2;
				}
				else
				{
					cout << "Broke";
				}
				if (chocomalk[3] != 1 || chocomalk[3] != 0)
				{
					srand(time(NULL)); // rng
					cpuChoice = 1 + (rand() % 2);
					if (cpuChoice == 1)
					{
						cout << "Chocomalk decided to attack.\nIt did " << chocomalk[1] / 2 << " damage!\n";
						skill[0] = skill[0] - (chocomalk[1] / 2);
						cout << "You have " << skill[0] << " - HP left!\n";
						chocomalk[3] = chocomalk[3] - 1;
						if (skill[0] <= 0)
						{
							DeathScreen();
						}
					}
					else if (cpuChoice == 2)
					{
						cout << "Chocomalk decided to charm you.\n";
						if (chocomalk[4] < skill[4] || chocomalk[4] == skill[4])
						{
							cout << "The charm did not work!\n";
							chocomalk[3] = chocomalk[3] - 1;
						}
						else if (chocomalk[4] > skill[4] && skill[1] > 5)
						{
							cout << "The charm worked!\nYou lost 2 attack.\n";
							skill[1] = skill[1] - 2;
							cout << "You have " << skill[1] << " - Attack now!\n";
							chocomalk[3] = chocomalk[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!\n";
					}
				}
				else if (chocomalk[3] == 1 || chocomalk[3] == 0)
				{
					cout << "Chocomalk can't attack!\n";
					chocomalk[3] = chocomalk[3] + 2;
				}
				else
				{
					cout << "How";
				}


			} while (skill[0] != 0 || chocomalk[0] != 0);
		}
		else
		{
			cout << "HOW!";
		}
		cout << "You try to get a drink from the cave's river but your thirst can't be quenched by water........ only by chocolate milk....... you have been cursed by Chocomalk!" << endl;

	}
	else if (getNum() == 7 || getNum() == 14)
	{
		cout << "BOWSETTE stats are:\n " << bowsette[0] << " - HP\n " << bowsette[1] << " - Power\n " << bowsette[2] << " - Agility\n " << bowsette[3] << " - Stamina\n " << bowsette[4] << " - Charisma\n";
		if (bowsette[2] > bowsette[2])
		{
			do
			{
				if (bowsette[3] != 1 || bowsette[3] != 0)
				{
					srand(time(NULL)); // rng
					cpuChoice = 1 + (rand() % 2);
					if (cpuChoice == 1)
					{
						cout << "Bowsette decided to attack.\nIt did " << bowsette[1] / 2 << " damage!\n";
						skill[0] = skill[0] - (bowsette[1] / 2);
						cout << "You have " << skill[0] << " - HP left!\n";
						bowsette[3] = bowsette[3] - 1;
						if (skill[0] <= 0)
						{
							DeathScreen();
						}

					}
					else if (cpuChoice == 2)
					{
						cout << "Bowsette decided to charm you.\n";
						if (bowsette[4] < skill[4] || bowsette[4] == skill[4])
						{
							cout << "The charm did not work!\n";
							bowsette[3] = bowsette[3] - 1;
						}
						else if (bowsette[4] > skill[4] && skill[1] > 5)
						{
							cout << "The charm worked!\nYou lost 2 attack.\n";
							skill[1] = skill[1] - 2;
							cout << "You have " << skill[1] << " - Attack now!\n";
							bowsette[3] = bowsette[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!\n";
					}
				}
				else if (bowsette[3] == 1 || bowsette[3] == 0)
				{
					cout << "Bowsette can't attack!\n";
					bowsette[3] = bowsette[3] + 2;
				}

				cout << "What would you like to do?\n1 - Attack\n2 - Charm \n>>";
				cin >> user;

				if (skill[3] != 1 || skill[3] != 0)
				{
					if (user == 1)
					{
						cout << "You decided to attack!\nYou did " << skill[1] / 2 << " damage!\n";
						bowsette[0] = bowsette[0] - (skill[1] / 2);
						cout << "Bowsette has " << bowsette[0] << " - HP left!\n";
						skill[3] = skill[3] - 1;
						if (bowsette[0] <= 0)
						{
							shop();
						}

					}
					else if (user == 2)
					{
						cout << "You decided to charm Bowsette.\n";
						if (bowsette[4] < skill[4] || bowsette[4] == skill[4] && bowsette[1] > 5)
						{
							cout << "The charm worked!\nBowsette lost 2 attack.\n";
							bowsette[1] = bowsette[1] - 2;
							cout << "Bowsette has " << bowsette[1] << " - Attack now!\n";
							skill[3] = skill[3] - 1;
						}
						else if (bowsette[4] > skill[4])
						{
							cout << "The charm did not work!\n";
							skill[3] = skill[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!";
					}
				}
				else if (skill[3] == 1 || skill[3] == 0)
				{
					cout << "You cant attack can't attack!\n";
					skill[3] = skill[3] + 2;
				}
				else
				{
					cout << "Broke";
				}
			} while (skill[0] != 0 || bowsette[0] != 0);
		}
		else if (bowsette[2] < skill[2])
		{
			do
			{
				cout << "What would you like to do?\n1 - Attack\n2 - Charm \n>>";
				cin >> user;

				if (skill[3] != 1 || skill[3] != 0)
				{
					if (user == 1)
					{
						cout << "You decided to attack!\nYou did " << skill[1] / 2 << " damage!\n";
						bowsette[0] = bowsette[0] - (skill[1] / 2);
						cout << "Bowsette has " << bowsette[0] << " - HP left!\n";
						skill[3] = skill[3] - 1;
						if (bowsette[0] <= 0)
						{
							shop();
						}


					}
					else if (user == 2)
					{
						cout << "You decided to charm Bowsette.\n";
						if (bowsette[4] < skill[4] || bowsette[4] == skill[4] && bowsette[1] > 5)
						{
							cout << "The charm worked!\nBowsette lost 2 attack.\n";
							bowsette[1] = bowsette[1] - 2;
							cout << "Bowsette has " << bowsette[1] << " - Attack now!\n";
							skill[3] = skill[3] - 1;
						}
						else if (bowsette[4] > skill[4])
						{
							cout << "The charm did not work!\n";
							skill[3] = skill[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!";
					}
				}
				else if (skill[3] == 1 || skill[3] == 0)
				{
					cout << "You cant attack can't attack!\n";

					skill[3] = skill[3] + 2;
				}
				else
				{
					cout << "Broke";
				}
				if (bowsette[3] != 1 || bowsette[3] != 0)
				{
					srand(time(NULL)); // rng
					cpuChoice = 1 + (rand() % 2);
					if (cpuChoice == 1)
					{
						cout << "Bowsette decided to attack.\nIt did " << bowsette[1] / 2 << " damage!\n";
						skill[0] = skill[0] - (bowsette[1] / 2);
						cout << "You have " << skill[0] << " - HP left!\n";
						bowsette[3] = bowsette[3] - 1;
						if (skill[0] <= 0)
						{
							DeathScreen();
						}
					}
					else if (cpuChoice == 2)
					{
						cout << "Bowsette decided to charm you.\n";
						if (bowsette[4] < skill[4] || bowsette[4] == skill[4])
						{
							cout << "The charm did not work!\n";
							bowsette[3] = bowsette[3] - 1;
						}
						else if (bowsette[4] > skill[4] && skill[1] > 5)
						{
							cout << "The charm worked!\nYou lost 2 attack.\n";
							skill[1] = skill[1] - 2;
							cout << "You have " << skill[1] << " - Attack now!\n";
							bowsette[3] = bowsette[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!\n";
					}
				}
				else if (bowsette[3] == 1 || bowsette[3] == 0)
				{
					cout << "Bowsette can't attack!\n";
					bowsette[3] = bowsette[3] + 2;
				}
				else
				{
					cout << "How";
				}


			} while (skill[0] != 0 || bowsette[0] != 0);
		}
		else if (bowsette[2] == skill[2])
		{
			do
			{
				cout << "What would you like to do?\n1 - Attack\n2 - Charm \n>>";
				cin >> user;

				if (skill[3] != 1 || skill[3] != 0)
				{
					if (user == 1)
					{
						cout << "You decided to attack!\nYou did " << skill[1] / 2 << " damage!\n";
						bowsette[0] = bowsette[0] - (skill[1] / 2);
						cout << "Bowsette has " << bowsette[0] << " - HP left!\n";
						skill[3] = skill[3] - 1;
						if (bowsette[0] <= 0)
						{
							shop();
						}

					}
					else if (user == 2)
					{
						cout << "You decided to charm Bowsette.\n";
						if (bowsette[4] < skill[4] || bowsette[4] == skill[4] && bowsette[1] > 5)
						{
							cout << "The charm worked!\nBowsette lost 2 attack.\n";
							bowsette[1] = bowsette[1] - 2;
							cout << "Bowsette has " << bowsette[1] << " - Attack now!\n";
							skill[3] = skill[3] - 1;
						}
						else if (bowsette[4] > skill[4])
						{
							cout << "The charm did not work!\n";
							skill[3] = skill[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!";
					}
				}
				else if (skill[3] == 1 || skill[3] == 0)
				{
					cout << "You cant attack can't attack!\n";
					skill[3] = skill[3] + 2;
				}
				else
				{
					cout << "Broke";
				}
				if (bowsette[3] != 1 || bowsette[3] != 0)
				{
					srand(time(NULL)); // rng
					cpuChoice = 1 + (rand() % 2);
					if (cpuChoice == 1)
					{
						cout << "Bowsette decided to attack.\nIt did " << bowsette[1] / 2 << " damage!\n";
						skill[0] = skill[0] - (bowsette[1] / 2);
						cout << "You have " << skill[0] << " - HP left!\n";
						bowsette[3] = bowsette[3] - 1;
						if (skill[0] <= 0)
						{
							DeathScreen();
						}
					}
					else if (cpuChoice == 2)
					{
						cout << "Bowsette decided to charm you.\n";
						if (bowsette[4] < skill[4] || bowsette[4] == skill[4])
						{
							cout << "The charm did not work!\n";
							bowsette[3] = bowsette[3] - 1;
						}
						else if (bowsette[4] > skill[4] && skill[1] > 5)
						{
							cout << "The charm worked!\nYou lost 2 attack.\n";
							skill[1] = skill[1] - 2;
							cout << "You have " << skill[1] << " - Attack now!\n";
							bowsette[3] = bowsette[3] - 1;
						}
						else
						{
							cout << "HOW!";
						}
					}
					else
					{
						cout << "HOW!\n";
					}
				}
				else if (bowsette[3] == 1 || bowsette[3] == 0)
				{
					cout << "Bowsette can't attack!\n";
					bowsette[3] = bowsette[3] + 2;
				}
				else
				{
					cout << "How";
				}


			} while (skill[0] != 0 || bowsette[0] != 0);
		}
		else
		{
			cout << "HOW!";
		}
		cout << "You leave the cave with a huge buldge in your pants, as you walk by two strangers they looks disgusted, with further examination they realise it's just the banana you were saving for later. OMEGALUL. " << endl;
	}
	else
	{
		cout << "why broke";
	}


	

	//shop();
	return 0;

}


int main()
{
	string name;

	
	

	int sklPts = 10;
	int sklChoice =0;
	int skillPointInput = 0;
	int goBack;

	cout << "What is your name Stranger Moth?\n >> ";
	cin >> name;

	skillSet( sklPts,  name,  sklChoice,  skillPointInput, xp);
	
	quest();

	system("pause");
	return 0;

}