#include <iostream>
#include <string>
#include "Header.h"

using namespace std;

int main()
{
	string name;
	
	int xp = 0;
	int gold = 0;
	int hp = 10;
	int lomps = 0;
	int sklPts = 10;
	int sklChoice;
	int skillPointInput;
	int goBack;

	int skill[5] = {10, 10, 10, 10, 0};

	cout << "What is your name Stranger Moth?\n >> ";
	cin >> name;
	
	

		do {
			cout << name << ", You have " << sklPts << " skill points left, what skill would you like to upgrade." << endl;
			cout << "1 = Power\n2 = Agility\n3 = Stamina\n4 = Charisma\n5 = Lumpther (Ultimate)" << endl;
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
					 skill[1] = skill[1] + skillPointInput;
					 sklPts = sklPts - skillPointInput;
				 }
			}
			 else if (sklChoice == 3)
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
					 skill[2] = skill[2] + skillPointInput;
					 sklPts = sklPts - skillPointInput;
				 }
			 }
			 else if (sklChoice == 4)
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
					 skill[3] = skill[3] + skillPointInput;
					 sklPts = sklPts - skillPointInput;
				 }
			 }
			 else if (sklChoice == 5 && xp >= 50)
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
					 skill[4] = skill[4] + skillPointInput;
					 sklPts = sklPts - skillPointInput;
				 }
			 }

			else
			{
				cout << "Big Gay";
			}
		} while (sklPts != 0);

		cout << skill[0] << " - Power" << endl << skill[1] << " - Agility" << endl << skill[2] << " - Stamina" << endl << skill[3] << " - Chrasima" << endl << skill[4] << " - Lumpther" << endl;














































	system("pause");
	return 0;

}