#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	
	int xp = 0;
	int gold = 0;
	int hp = 10;
	int lomps = 0;
	int sklPts = 10;
	int stamina = 10;
	int power = 10;
	int agility = 10;
	int sklChoice;
	int skillPointInput;

	int skill[5] = { 0.0 };

	cout << "What is your name Stranger Moth?\n >> ";
	cin >> name;

	for (int i = 0; i < size(skill); i++)
	{
		cout << "You have " << sklPts << " left what skill would you like to upgrade." << endl;
		cout << "1 = Power\n2 = Agility\n3 = Stamina\n4 = Charisma\n5 = Lumpther (Ultimate)";
		cin >> sklChoice;

		if (sklChoice == 1)
		{
			cout << "How many points would you like to put into Power?"



			skill[0] = skillPointInput
		}


	}




















	system("pause");
	return 0;

}